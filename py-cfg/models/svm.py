import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn.metrics import classification_report, confusion_matrix
import numpy as np
import matplotlib.pyplot as plt

data = pd.read_csv("dataset/worksheet.csv")
# print(data.head())
X = (data.drop(['Verdict', 'Grade', 'Question', 'Solution', 'Similarity2'], axis=1))[:192]
Y = (data['Grade'])[:192]
# print(X[:10])
# print(Y[:10])
X['Memory'] = X['Memory'].apply(lambda x: float(str(x)[:-1]))
X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size=0.20)
svclassifier = SVC(kernel='linear')
svclassifier.fit(X_train, y_train)

y_pred = svclassifier.predict(X_test)
print(confusion_matrix(y_test, y_pred))
print(classification_report(y_test, y_pred))
