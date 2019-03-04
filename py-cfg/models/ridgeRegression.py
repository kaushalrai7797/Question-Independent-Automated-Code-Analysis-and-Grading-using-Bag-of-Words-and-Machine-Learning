# import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.linear_model import Ridge

data = pd.read_csv("dataset_new1/worksheet.csv")
# print(data2.head())
X = (data.drop(['Verdict', 'Grade', 'Question', 'Solution'], axis=1))
Y = (data['Grade'])
# print(X[:10])
# print(Y[:10])
X['Memory'] = X['Memory'].apply(lambda x: float(str(x)[:-1]))

X_train,X_test,y_train,y_test = train_test_split(X, Y, test_size=0.3, random_state=3)
print len(X_test), len(y_test)
lr = LinearRegression()
lr.fit(X_train, y_train)
rr = Ridge(alpha=0.01) # higher the alpha value, more restriction on the coefficients; low alpha > more generalization, coefficients are barely
# restricted and in this case linear and ridge regression resembles
rr.fit(X_train, y_train)
rr100 = Ridge(alpha=100) #  comparison with alpha value
rr100.fit(X_train, y_train)
train_score=lr.score(X_train, y_train)
test_score=lr.score(X_test, y_test)
Ridge_train_score = rr.score(X_train,y_train)
Ridge_test_score = rr.score(X_test, y_test)
Ridge_train_score100 = rr100.score(X_train,y_train)
Ridge_test_score100 = rr100.score(X_test, y_test)
print "linear regression train score:", train_score
print "linear regression test score:", test_score
print "ridge regression train score low alpha:", Ridge_train_score
print "ridge regression test score low alpha:", Ridge_test_score
print "ridge regression train score high alpha:", Ridge_train_score100
print "ridge regression test score high alpha:", Ridge_test_score100
# plt.plot(rr.coef_,alpha=0.7,linestyle='none',marker='*',markersize=5,color='red',label=r'Ridge; $\alpha = 0.01$',zorder=7) # zorder for ordering the markers
# plt.plot(rr100.coef_,alpha=0.5,linestyle='none',marker='d',markersize=6,color='blue',label=r'Ridge; $\alpha = 100$') # alpha here is for transparency
# plt.plot(lr.coef_,alpha=0.4,linestyle='none',marker='o',markersize=7,color='green',label='Linear Regression')
# plt.xlabel('Coefficient Index',fontsize=16)
# plt.ylabel('Coefficient Magnitude',fontsize=16)
# plt.legend(fontsize=13,loc=4)
# plt.show()