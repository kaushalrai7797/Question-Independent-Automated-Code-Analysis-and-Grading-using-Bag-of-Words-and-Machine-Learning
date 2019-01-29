 #include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
vector<string> IMPOSSIBLE = {"grid","snot","poss","ible"};
bool isPalindrome(string a){
	int count = a.size()-1;
	int i =0;
	for(;i!=count;i++,count--){
		if(a[i] != a[count]){
			return false;
		}
	}
	return true;
}
string Reverse(string a){
	string b;
	for(int i = a.size()-1;i >=0; i--){
		b.push_back(a[i]);
	}
	return b;
}
void Printing(vector<string> str){
	cout<<endl;
	for(string &s : str){
		cout<<s<<endl;
	}
}
vector<string>Addingh(vector<string>already,vector<string>allwords){
	vector<string>imposs = {"ZZZZ","ZZZZ","ZZZZ","ZZZZ"};
	for(vector<string>::reverse_iterator it = allwords.rbegin(); it != allwords.rend(); it++){
		for(vector<string> ::reverse_iterator it1 = already.rbegin(); it1 != already.rend(); it1++){
			bool fits = 1;
			for(int i = 3; i >= 0; i--){
				if((*it1)[i] == '/'){
					
				}				
				else if((*it1)[i] != (*it)[i]){
					fits = 0;
					break;
				}
			}
			if (fits){
				*it1 = *it;
				return already; 
			}
		}

	}
	return imposs;
}
vector<string>Rotate(vector<string>previous){
	vector<string>toReturn(4);
	for(vector<string>::iterator it = previous.begin(); it!= previous.end();it++){
		for(int i = 0; i <4; i++){
			toReturn[i].push_back((*it)[i]);
		}
	}
	return toReturn;
}
vector<string>Addingv(vector<string>already,vector<string>allwords){
	vector<string>rough = Rotate(already);
	rough = Addingh(rough,allwords);
	rough = Rotate(rough);
	return rough;

}
vector<string> wordsleft(vector<string>already,vector<string>allwords){
	vector<string>imposs = {"ZZZZ","ZZZZ","ZZZZ","ZZZZ"};
	vector<string> toReturn;
	map<string,int>mymap;
	vector<string>rough = Rotate(already);
	for(vector<string>::iterator it = already.begin(); it!= already.end(); it++){
		if((*it)[0]=='/'||(*it)[1] == '/'||(*it)[2] =='/' ||(*it)[3] == '/'){
			
		}
		else{
			string temp = Reverse(*it);
			mymap[temp]+=1;
			mymap[*it]+=1;
		}
	}
	for(vector<string>::iterator it = rough.begin(); it!= rough.end(); it++){
		if((*it)[0]=='/'||(*it)[1] == '/'||(*it)[2] =='/' ||(*it)[3] == '/'){
			 
		}
		else{
			string temp = Reverse(*it);
			mymap[temp]+=1;
			mymap[*it]+=1;
		}
	}
	for(vector<string>::iterator it1 = allwords.begin(); it1 != allwords.end(); it1++){
		if(mymap[*it1] == 0){
			toReturn.push_back(*it1);
		}
		else if(mymap[*it1] > 1){
			return imposs;
		}
	}
	 
	return toReturn;
}
vector<string>addpad(vector<string>already,vector<string>allwords){
    vector<string> badomen = {"ZZZZ","ZZZZ","ZZZZ","ZZZZ"};
	for(vector<string>:: iterator it = already.begin(); it != already.end(); it++){
		for(string::iterator it1 = (*it).begin(); it1 != (*it).end(); it1++){
			if(*it1 == '/'){
			    char t = 'A';
			    *it1 =t;
			    while(t <= 'Z'&&wordsleft(already,allwords)!= badomen ){
			        t++;
			        *it1 = t;
			    }
						
			}
		}
	}
	return already;
	
}
vector<string>tofill(vector<string>allwords,vector<string>already,vector<string>tot){
	vector<string>badOmen = {"ZZZZ","ZZZZ","ZZZZ","ZZZZ"};
	if(allwords.size() == 0){
		already = addpad(already,tot);
		return already;
	}
	
	else if(already == badOmen){
		return badOmen;
	}
	else{
		
		 
		
		vector<string>hor = Addingh(already,allwords);
		vector<string>ver = Addingv(already,allwords);
		vector<string>horl = wordsleft(hor,tot);
		vector<string>verl = wordsleft(ver,tot);
		if(verl == horl && verl == badOmen){
			 
			return badOmen;
		}
		else if (verl == badOmen){
			return tofill(horl,hor,tot);

		}
		else if(horl == badOmen){
			return tofill(verl, ver,tot);
		}
		else{
			
			vector<string> c = tofill(horl,hor,tot);
			vector<string> d = tofill(verl, ver,tot);
			 
			if( c < d){return c;}
			else{return d;}
		}
	}

}
vector<string>Upsidedown(vector<string>a){
	vector<string> f;
	for(vector<string>::reverse_iterator rit = a.rbegin(); rit!=a.rend(); rit++){
		f.push_back(*rit);
	}
	return f;
}
vector<string>Leftright(vector<string>a){
	vector<string>f ,g;
	f = Rotate(a);
	g = Upsidedown(f);
	return g;
	
}
void finalise(vector<string>allWords){
		vector<string> badomen = {"ZZZZ","ZZZZ","ZZZZ","ZZZZ"};
	if(allWords.size() < 8){
		int padded = (8- allWords.size())/2;
		vector<string >toReturn ={"////","////","////","////"};
		 
		for(int it = 0;it < (allWords.size())/2; it++ ){
			toReturn[4-it-1] = allWords[allWords.size()/2-1-it];
		}
	    vector<string>togo = addpad(toReturn,allWords);
	    if(togo!= badomen){	
		Printing(togo);cout<<endl;
	    }
	    else{
	        Printing(IMPOSSIBLE);
	    }
		return;
	}
	else{
	
		vector<string> minc = badomen;
		vector<string> pre = {"////","////","////","////"};
		 
		for(vector<string>::reverse_iterator it = allWords.rbegin(); it != allWords.rend(); it++){			
			pre[3] = *it;			 
			vector<string>left = wordsleft(pre,allWords);
			vector<string>c = tofill(left,pre,allWords);
			vector<string>d = Upsidedown(c);

			if(d<c){c = d;}
			d = Leftright(c);
			if(d<c){c = d;}
			if(c < minc){minc = c;}
			pre= Rotate(pre);
			c = tofill(left,pre,allWords);
			d = Upsidedown(c);
			if(d<c){c = d; }
			d = Leftright(c);
			if(d<c){c = d;}
			if(c < minc){minc = c;}
			pre = Rotate(pre);
			
		}
		if(minc != badomen){
			
			Printing(minc);
		}
		else{
			
			Printing(IMPOSSIBLE);
		}
	}
	
}
int main(){
	 int tests;
	cin>>tests;
	for(int i = 0; i <tests; i++){
		int numW;
		cin>>numW;
		vector<string>allwords;
		map<string,int>mymap;
		bool cantdo = 0;
		for(int j = 0; j < numW; j++){
			string aword;
			cin>>aword;
			if(cantdo){

			}
			else if(isPalindrome(aword)){
				cantdo = 1;
			}
			else if(mymap[aword]){

			}
			else{
				string d = Reverse(aword);
				allwords.push_back(aword);
				allwords.push_back(d);
				mymap[aword]+=1;
				mymap[d]+=1;
			}
		}
		 
		if(cantdo){
			
			Printing(IMPOSSIBLE);
			
		}
		else{
			cout<<endl;
			sort(allwords.begin(),allwords.end());
			finalise(allwords);
			 
		}
	}
	
}