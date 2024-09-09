from matplotlib import pyplot as plt
import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn import preprocessing

file_path = r'DECISION TREES\data.csv'
# Load data
df = pd.read_csv(file_path)

# Mapping categorical data
df['Nationality'] = df['Nationality'].map({'UK': 0, 'USA': 1, 'N': 2})
df['Go'] = df['Go'].map({'YES': 1, 'NO': 0})

# Define features and target variable
features = ['Age', 'Experience', 'Rank', 'Nationality']
X = df[features]
y = df['Go']

# Initialize Decision Tree Classifier
dtree = DecisionTreeClassifier()

# Fit the classifier on the data
dtree.fit(X, y)

# Plot the decision tree
plt.figure(figsize=(12, 8))
from sklearn.tree import plot_tree
plot_tree(dtree, feature_names=features, filled=True, rounded=True)
plt.show()
