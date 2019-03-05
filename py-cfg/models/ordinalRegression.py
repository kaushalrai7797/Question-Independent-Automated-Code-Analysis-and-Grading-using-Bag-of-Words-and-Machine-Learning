import pandas as pd
from sklearn.model_selection import train_test_split
import sklearn.linear_model as lm

data = pd.read_csv("dataset_new1/worksheet.csv")
# print(data2.head())
X = (data.drop(['Verdict', 'Grade', 'Question', 'Solution'], axis=1))
Y = (data['Grade'])
# print(X[:10])
# print(Y[:10])
X['Memory'] = X['Memory'].apply(lambda x: float(str(x)[:-1]))

X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size=0.3, random_state=3)

mul_lr = lm.LogisticRegression(
    multi_class='multinomial',
    solver='newton-cg',
    fit_intercept=True
).fit(X_train, y_train)
train_score = mul_lr.score(X_train, y_train)
test_score = mul_lr.score(X_test, y_test)
print (train_score)
print (test_score)