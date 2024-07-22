import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import warnings

# Ignore warnings (optional)
warnings.filterwarnings('ignore')

class LocallyWeightedRegression:
    def __init__(self, tau=0.01):
        self.tau = tau
    
    # Kernel function to calculate weights
    def kernel(self, query_point, X):
        # Initialize weight matrix as identity matrix
        Weight_matrix = np.eye(len(X))
        for idx in range(len(X)):
            # Calculate weights using Gaussian kernel
            distance = np.dot(X[idx] - query_point, (X[idx] - query_point).T)
            Weight_matrix[idx, idx] = np.exp(-distance / (2 * self.tau * self.tau))
        return Weight_matrix
    
    # Predict function to predict output for a single query point
    def predict(self, X, Y, query_point):
        # Add bias term to input matrix X
        X = np.hstack((X, np.ones((len(X), 1))))
        q = np.array([query_point, 1])
        W = self.kernel(q, X)
        theta = np.linalg.pinv(X.T @ (W @ X)) @ (X.T @ (W @ Y))
        pred = np.dot(q, theta)
        return pred
    
    # Fit and predict function to predict output for all query points
    def fit_and_predict(self, X, Y):
        Y_test, X_test = [], np.linspace(-np.max(X), np.max(X), len(X))
        for x in X_test:
            pred = self.predict(X, Y, x)
            Y_test.append(pred[0])
        Y_test = np.array(Y_test)
        return Y_test
    
    # Function to compute the score (RMSE)
    def score(self, Y, Y_pred):
        return np.sqrt(np.mean((Y - Y_pred) ** 2))
    
    # Function to fit and display scatter plot of all points
    def fit_and_show(self, X, Y):
        Y_test, X_test = [], np.linspace(-np.max(X), np.max(X), len(X))
        for x in X_test:
            pred = self.predict(X, Y, x)
            Y_test.append(pred[0])
        Y_test = np.array(Y_test)
        plt.style.use('seaborn')
        plt.title(f"The scatter plot for the value of tau = {self.tau:.5f}")
        plt.scatter(X, Y, color='red', label='Original Data')
        plt.scatter(X_test, Y_test, color='green', label='Predicted Data')
        plt.legend()
        plt.show()

# Reading the CSV files for X and Y values
dfx = pd.read_csv('weightedX.csv')
dfy = pd.read_csv('weightedY.csv')

# Converting dataframes to numpy arrays
X = dfx.values
Y = dfy.values

# Normalizing the X values
u = X.mean()
std = X.std()
X = (X - u) / std

# Setting the value of tau for LWR
tau = 0.2

# Creating an instance of LocallyWeightedRegression model
model = LocallyWeightedRegression(tau)

# Predicting Y values using LWR
Y_pred = model.fit_and_predict(X, Y)

# Displaying the scatter plot of original vs predicted data points
model.fit_and_show(X, Y)
