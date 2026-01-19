import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from scipy import stats
from sklearn import datasets

# Load the Iris dataset
iris = datasets.load_iris()
df = pd.DataFrame(iris.data)


# i. Compute mean, mode, median, standard deviation, confidence interval, and standard error
summary_stats = pd.DataFrame({
 'Mean': df.mean(),
 'Median': df.median(),
 'Mode': df.mode().iloc[0],
 'Standard Deviation': df.std(),
 'Standard Error': df.sem(),
 '95% Confidence Interval Lower': df.apply(lambda x:stats.norm.interval(0.95, loc=x.mean(), scale=stats.sem(x))[0]),
 '95% Confidence Interval Upper': df.apply(lambda x: stats.norm.interval(0.95, loc=x.mean(), scale=stats.sem(x))[1])
})

print("Summary Statistics:\n", summary_stats)

# iii. Find covariance between sepal length and petal length
covariance = np.cov(df['sepal length (cm)'], df['petal length (cm)'])[0, 1]
print("\nCovariance between Sepal Length and Petal Length:", covariance)

# iv. Build a contingency table for the class feature
contingency_table = pd.crosstab(index=df['species'], columns="Count")
print("\nContingency Table:\n", contingency_table)


