import pandas as pd
from sklearn.tree import DecisionTreeClassifier, export_graphviz
from sklearn.model_selection import train_test_split
from sklearn import metrics
from six import StringIO  # Ensure you have installed 'six' package
from IPython.display import Image
import pydotplus
import os

# Define column names based on your data
col_names = ['pregnant', 'glucose', 'bp', 'skin', 'insulin', 'bmi', 'pedigree', 'age', 'label']

# Read the CSV file, using raw string or double backslashes in the path
pima = pd.read_csv(r"E:\Surya\DECISION TREES\pima-indians-diabetes.csv", header=None, names=col_names)

# Display the first few rows of the dataset to verify it's loaded correctly
pima.head()

# Define the feature columns and target variable
feature_cols = ['pregnant', 'insulin', 'bmi', 'age', 'glucose', 'bp', 'pedigree']
X = pima[feature_cols]
y = pima.label

# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=1)

# Initialize the Decision Tree Classifier
clf = DecisionTreeClassifier()

# Fit the classifier to the training data
clf.fit(X_train, y_train)

# Make predictions on the test data
y_pred = clf.predict(X_test)

# Calculate and print the accuracy of the model
print("Accuracy:", metrics.accuracy_score(y_test, y_pred))

# Visualize the decision tree
dot_data = StringIO()
export_graphviz(clf, out_file=dot_data, filled=True, rounded=True, special_characters=True,
                feature_names=feature_cols, class_names=['0', '1'])

# Create the 'DECISION TREES' directory if it doesn't exist
output_dir = 'DECISION TREES'
os.makedirs(output_dir, exist_ok=True)

# Specify the full path to save the image
output_path = os.path.join(output_dir, 'diabetes.png')

graph = pydotplus.graph_from_dot_data(dot_data.getvalue())
graph.write_png(output_path)
Image(graph.create_png())
