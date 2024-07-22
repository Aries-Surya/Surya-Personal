import numpy as np
import pandas as pd
from sklearn import preprocessing
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score

# Load data
data = pd.read_csv('HR_comma_sep.csv')

# Display first few rows of the data
print(data.head())

# Creating labelEncoder
le = preprocessing.LabelEncoder()

# Converting string labels into numbers
data['salary'] = le.fit_transform(data['salary'])
data['Department'] = le.fit_transform(data['Department'])

# Splitting data into Features and Target
X = data[['satisfaction_level', 'last_evaluation', 'number_project', 
          'average_montly_hours', 'time_spend_company', 'Work_accident',
          'promotion_last_5years', 'Department', 'salary']]
y = data['left']

# Split dataset into training set and test set (70% training and 30% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=45)

# Create MLPClassifier model object
clf = MLPClassifier(hidden_layer_sizes=(6, 5),
                    random_state=5,
                    verbose=True,
                    learning_rate_init=0.01)

# Fit data onto the model
clf.fit(X_train, y_train)

# Make predictions on the test dataset
ypred = clf.predict(X_test)

# Calculate accuracy
accuracy = accuracy_score(y_test, ypred)
print(f'Accuracy: {accuracy}')
