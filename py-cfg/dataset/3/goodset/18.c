#include <bits/stdc++.h>
#define EMPTY '.'
using namespace std;
vector<string> A;
char ans[4][4];
char ans1[][4] = {{'g','r','i','d'},{'s','n','o','t'},{'p','o','s','s'},{'i','b','l','e'}};
int I[] = {0,1,2,3, 3,3,3,3, 3,2,1,0, 0,0,0,0};
int J[] = {0,0,0,0, 0,1,2,3, 3,3,3,3, 3,2,1,0};
int DI[] = {0,0,0,0, -1,-1,-1,-1, 0,0,0,0, 1,1,1,1};
int DJ[] = {1,1,1,1, 0,0,0,0, -1,-1,-1,-1, 0,0,0,0};

int check(string x,string y) {
	int i;
    for(i=0;i<4;i++) {
        if(x[i]!=y[i]) {
            break;
        }
    }
    if(i==4) return 1;
    for(i=0;i<4;i++) {
        if(x[i] != y[4-i-1]) {
            break;
        }
    }
    if(i==4) return 1;
    return 0;
}

void removeDuplicatesReverse() {
    vector<string> V;
    int i,j;
    for(i=0;i<(int)A.size();i++) {
        for(j=0;j<i;j++) {
            if(check(A[j], A[i]) == 1) {
                break;
            }
        }
        if(j>=i){
            V.push_back(A[i]);
        }
    }
    A = V;
}

int checkValidity(char (&parentGrid)[4][4], int config, string str) {
    int i = I[config];
    int j = J[config]; 	
    int k;
    for(k=0;k<4;k++) {
        if(parentGrid[i][j] == EMPTY || parentGrid[i][j] == str[k]) {
            i += DI[config];
            j += DJ[config];
        }
        else break;
    }
    //cout<<"a checkValidity"<<endl;
    if(k == 4) return 1;
    return 0;
}

void fillAs(char (&parentGrid)[4][4]) {
	int i,j;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(parentGrid[i][j] == EMPTY) {
                parentGrid[i][j] = 'A';
            }
        }
    }
}

void updateAns(char (&grid)[4][4]) {
	int i,j;
	//cout<<"in updateAns"<<endl;
	//cout<<grid[0][1]<<endl;
	if(ans[0][0] == 'g') {
		for(i=0;i<4;i++) {
            for(j=0;j<4;j++) {
                ans[i][j] = grid[i][j];
            }
        }
        return;
	}

    int flag = 0;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(grid[i][j] < ans[i][j]) {
                flag = 1;
                break;
            }
            else if(grid[i][j] > ans[i][j]){
            	flag = 2;
            	break;
			}
        }
        if(j!=4) break;
    }
    if(i!=4 && flag == 1) {
        for(i=0;i<4;i++) {
            for(j=0;j<4;j++) {
                ans[i][j] = grid[i][j];
            }
        }
    }
}
void updateTmpGrid(char (&parentGrid)[4][4], char (&tmpGrid)[4][4], string& str1, int config) {
    int i = I[config];
    int j = J[config];
    //cout<<"A str1 = "<<str1<<endl;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
           tmpGrid[i][j] = parentGrid[i][j];
        }
    }
    int k;
    i = I[config];
    j = J[config];
    //cout<<"A str1 = "<<str1<<endl;
    for(k=0;k<4;k++) {
    	//cout<<str1[k]<<endl;
        tmpGrid[i][j] = str1[k];
        //cout<<str1[k]<<endl;
        i += DI[config];
        j += DJ[config];
        //cout<<str1[k]<<endl;
    }
    //cout<<"A str1 = "<<str1<<endl;
}
void dfs(char (&parentGrid)[4][4], int index) {
	//cout<<"dfs at index =  "<<index<<endl;
    if(index == (int)A.size()) {
    	//cout<<"b fillAs"<<endl;
        fillAs(parentGrid);
        //cout<<"a fillAs"<<endl;
        updateAns(parentGrid);
        //cout<<"a updateAns"<<endl;
        return;
    }
    int config;
    string str = A[index];
    char tmpGrid[4][4];
    for(config = 0;config <16; config++) {
    	//str = A[index];
    	//cout<<"A str = "<<str<<endl;
        //str = A[index];
        //cout<<"b checkValidity"<<endl;
        if(checkValidity(parentGrid, config, str) == 1) {
			//cout<<"A str = "<<str<<endl;
			//cout<<"b updateTmpGrid"<<endl;
            updateTmpGrid(parentGrid, tmpGrid, str, config);
            //cout<<str<<endl;
            //cout<<"a updateTmpGrid"<<endl;
            //cout<<"A str = "<<str<<endl;
			dfs(tmpGrid, index+1);
            
			//cout<<"a dfs of index = "<<index+1<<endl;
            
        }
    }
    //cout<<"closing dfs index = "<<index<<endl;
} 

void solve() {
    char grid[4][4];
    int i,j;
    for(i=0;i<4;i++) {
    	for(j=0;j<4;j++) {
    		ans[i][j] = ans1[i][j];
		}
	}
	
    removeDuplicatesReverse();
    //cout<<"A size = "<<A.size()<<endl;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            grid[i][j] = EMPTY;
        }
    }
    dfs(grid, 0);
}


int main() {
	//freopen("in.txt","r",stdin);
	int t;
	string dd;
	cin>>t;
	int n,i,j;
	while(t--) {
		A.clear();
	    cin>>n;
	    for(i=0;i<n;i++) {
	        cin>>dd;
	        A.push_back(dd);
	    }
	    solve();
	    for(i=0;i<4;i++) {
	    	for(j=0;j<4;j++) {
	    		cout<<ans[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
