import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA

# Load the penguins dataset from seaborn
penguins = sns.load_dataset("penguins")

# Drop rows with missing values
penguins = penguins.dropna()

# Select numeric columns for PCA
data = penguins.select_dtypes(include=np.number)

# Define random state for reproducibility
random_state = 0

# Create a pipeline for PCA
pca_pl = make_pipeline(StandardScaler(), PCA(n_components=2, random_state=random_state))

# Fit and transform the data
pcs = pca_pl.fit_transform(data)

# Convert transformed data to a DataFrame
pcs_df = pd.DataFrame(data=pcs, columns=['PC1', 'PC2'])

# Add species and sex columns from original data
pcs_df['Species'] = penguins['species'].values
pcs_df['Sex'] = penguins['sex'].values

# Plotting the PCA results
plt.figure(figsize=(12, 10))
with sns.plotting_context("talk", font_scale=1.25):
    sns.scatterplot(x="PC1", y="PC2", data=pcs_df, hue="Species", style="Sex", s=100)
    plt.xlabel("PC1")
    plt.ylabel("PC2")
    plt.title("PCA", size=24)
    plt.savefig("PCA_Example_in_Python.png", format='png', dpi=75)
    plt.show()
