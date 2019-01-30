#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int tt;
	cin>>tt;
	while(tt--){
		int n,m,i,j;
		cin>>n>>m;
		long long int ta = 0,tb = 0,x;
		long int a[n],b[m];
		for(i = 0;i < n;i++){
			cin>>a[i];
			ta = ta + a[i];
		}
		for(i = 0;i < m;i++){
			cin>>b[i];
			tb = tb + b[i];
		}
		if(ta == 0 && tb == 0){
			cout<<"Bob"<<endl;
		}
		else if(ta != tb){
			cout<<"Alice"<<endl;
		}
		else if(ta == tb){
			if(n == m){
				//cout<<"nm"<<endl;
				sort(a,a+n);
				sort(b,b+m);
				int flag = 0;
				for(i = 0;i < n ;i++){
					if(a[i] != b[i]){
						flag = 1;
						break;
					}
				}
				if(flag){
					cout<<"Alice"<<endl;
				}
				else if(flag == 0){
					cout<<"Bob"<<endl;
				}
			}
			else {
				if (n > m){
					//cout<<"n"<<endl;
					sort(a,a+n);
					sort(b,b+m);
					int flag = 0;
					i = n - 1;
					for(j = m-1;j >= 0;j--){
						if(a[i] != b[j]){
							flag = 1;
							break;
						}
						i--;
					}
					if(flag == 1){
						cout<<"Alice"<<endl;
					}
					if(flag == 0){
						if(a[i-1] == 0){
							cout<<"Bob"<<endl;
						}
						else{
							cout<<"Alice"<<endl;
						}
					}
				}
				else if(m > n){
						//cout<<"m"<<endl;
						sort(a,a+n);
						sort(b,b+m);
						int flag = 0;
						j = m-1;
						for(i = n-1;i >= 0;i--){
							if(a[i] != b[j]){
								flag = 1;
								break;
							}
							j--;
						}
						//cout<<j<<" ";
						if(flag == 1){
							cout<<"Alice"<<endl;
						}
						if(flag == 0){
							if(b[j-1] == 0){
								cout<<"Bob"<<endl;
							}
							else{
								cout<<"Alice"<<endl;
							}
						}
					}
			}
		}
	}
	return 0;
}