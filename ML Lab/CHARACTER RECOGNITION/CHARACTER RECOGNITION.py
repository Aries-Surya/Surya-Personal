import numpy as np
import pandas as pd
from sklearn import preprocessing
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score
from sklearn.preprocessing import StandardScaler

# Sample dataset
data = pd.DataFrame({
    'satisfaction_level': [0.38, 0.80, 0.11, 0.72, 0.37],
    'last_evaluation': [0.53, 0.86, 0.88, 0.87, 0.52],
    'number_project': [2, 5, 7, 5, 2],
    'average_montly_hours': [157, 262, 272, 223, 159],
    'time_spend_company': [3, 6, 4, 5, 3],
    'Work_accident': [0, 0, 0, 0, 0],
    'left': [1, 1, 1, 1, 1],
    'promotion_last_5years': [0, 0, 0, 0, 0],
    'Departments': ['sales', 'sales', 'sales', 'sales', 'sales'],
    'salary': ['low', 'medium', 'medium', 'low', 'low']
})

# Cleaning data: Removing leading/trailing spaces from column values
data['Departments'] = data['Departments'].str.strip()
data['salary'] = data['salary'].str.strip()

# Encoding categorical features
le = preprocessing.LabelEncoder()
data['salary'] = le.fit_transform(data['salary'])
data['Departments'] = le.fit_transform(data['Departments'])

# Splitting data into Features and Target
X = data[['satisfaction_level', 'last_evaluation', 'number_project', 
          'average_montly_hours', 'time_spend_company', 'Work_accident',
          'promotion_last_5years', 'Departments', 'salary']]
y = data['left']

# Scaling Features
scaler = StandardScaler()
X = scaler.fit_transform(X)

# Split dataset into training set and test set
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=45)

# Create MLPClassifier model object
clf = MLPClassifier(hidden_layer_sizes=(6, 5), random_state=5, verbose=True, learning_rate_init=0.01)

# Fit data onto the model
clf.fit(X_train, y_train)

# Make predictions on the test dataset
ypred = clf.predict(X_test)

# Calculate accuracy
accuracy = accuracy_score(y_test, ypred)
print(f'Accuracy: {accuracy}')
