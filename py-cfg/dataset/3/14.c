 #include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
 int I[] = {0,0,0,0,0,1,2,3,3,3,3,3,3,2,1,0};
 int J[] = {0,1,2,3,3,3,3,3,3,2,1,0,0,0,0,0};
 int DI[] = {1,1,1,1,0,0,0,0,-1,-1,-1,-1,0,0,0,0};
 int DJ[] = {0,0,0,0,-1,-1,-1,-1,0,0,0,0,1,1,1,1};
 vector<string>def = {"grid","snot","poss","ible"};
vector<string>allwords;
vector<string>finalans;

string reverse(string A){
	string B;
	int i;
	for(i = 3; i >= 0; i--){
		B.push_back(A[i]);
	}
	return B;
}
void noDups(){
	 
	vector<string>Nallwords;
	//Nallwords = allwords;
	map<string,int>mymap;
	 
	for(int counter = 0; counter < allwords.size(); counter++){
		string it = allwords[counter];
		mymap[it]++;
		string temp = reverse(it);
		mymap[temp]++;
		if(mymap[it] == 2){
			Nallwords.push_back(it);
			 
		}
	}
	 //allwords = Nallwords;
	
}
bool validadd(int position, vector<string> alput, string tword ){
	int i = I[position];
	int j = J[position];
	int k;
	for( k = 0; k < 4; k++){
		if(alput[i][j] == tword[k] || alput[i][j] == '/'){
			i+=DI[position];
			j+=DJ[position];
		}
		else break;
	}
	if(k == 4)return 1;
	return 0;
}
 void addWord(  int position, vector<string>&narr,string toadd){
	 
	int i = I[position];
	int j = J[position];
	for(int k = 0; k < 4; k++){
		narr[i][j] = toadd[k];
		i+=DI[position];
		j+=DJ[position];
	}

}
void updatefinalans(vector<string>narr){
	int k =0;
	if(finalans[0][0] == 'g'){
		finalans = narr;
	}
	else{
		bool canadd = 0;
		while(k < 16){
			int i = k/16;
			int j = k%16;
			if(narr[i][j] < finalans[i][j]){
				canadd = 1;
				break;
			}
			else if(narr[i][j] > finalans[i][j]){
				break;
			}
			else{
				k++;
			}
		}
		if (canadd){
			finalans = narr;
		}
	}
}

void fillAs(vector<string>&narr){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(narr[i][j] == '/'){
				narr[i][j] = 'A';
			}
		}
	}
}
void toFill(vector<string> oldans, int position ){
	//cout<<position;
	if(position == allwords.size()){
		fillAs(oldans);
		updatefinalans(oldans);
	}
	else{
		vector<string> tempans;
		for(int config = 0; config < 16; config++){
			tempans = oldans;
			if(validadd(config, tempans, allwords[position])){
				addWord(config,tempans,allwords[position]);
				toFill(tempans,position+1);
			}
		}
	}
	
}
void printing(){
	for(string &A : finalans){
		cout<<A<<endl;
	}
}
int main(){
	int tests;
	cin>>tests;
	string toadd;
	while(tests--){
		int numWords;
		cin>>numWords;
		
		 
		 for(int counter = 0; counter < numWords; counter++){
			
			cin>>toadd;
			allwords.push_back(toadd);			 
			  	
		}
		cout<<endl;
		noDups();
		finalans = def;
		vector<string>oldAns = {"////","////","////","////"};
		toFill(oldAns,0);
		printing();
		allwords.clear();
		
	}
}


























