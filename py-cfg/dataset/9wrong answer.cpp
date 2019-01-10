  #include<iostream>
#include<vector>

using namespace std;
int midexcess(vector<int>arr){
	 if (arr.size() == 1){return 0;}
	else{return (arr[arr.size()-1] - arr[arr.size()-2])-1;}
}
vector<vector<int>>allSubs(vector<int>arr){
	vector<vector<int>>allseq;
	for(vector<int>::iterator it = arr.begin();it != arr.end();it++){
		vector<int>toAdd;
		int position = it - arr.begin();
		toAdd.push_back(position);
		allseq.push_back(toAdd);
		for(vector<vector<int>>::iterator it1 = allseq.begin();it1 != allseq.end();it1++){
			if(arr[(*it1).back()] < *it){
				(*it1).push_back(position);
			}

		}
	}
	return allseq;

}
bool isWorking(vector<int>elems, vector<int>arr,int allelems ){
	vector<vector<int>> allsubs = allSubs(arr);
	int maxL = elems.size();
	for(vector<vector<int>>::iterator it = allsubs.begin(); it != allsubs.end();it++){
		if((*it).size() >= maxL && (*it) != elems){
			return false;		
		}

	}
	return true;

}
	 
 
void printing(vector<int> arr, int allelems){
	for(int counter = 0; counter < allelems; counter++){
		cout<<arr[counter]<<" ";
	}
	cout<<endl;
}

void finalise(vector<int>elems, int allelems ){
	int minStart = allelems - (elems.back()+1) + midexcess(elems)+1;
	vector<bool>usedUp(allelems,1);
	vector<int>finalelist(allelems,0);
	int counter = 1 ;
	for(int i = 0; i < elems.size();i++){
		finalelist[elems[i]] = minStart+i;
		usedUp[(minStart+i-1)] = false;
	}
	for(int i = allelems-1; i >= 0;i-- ){
		while(!finalelist[i] && counter <= allelems){
		    if(counter > allelems){
		        cout<<"NO";
		        return;
		    }
			 
			if(usedUp[counter-1] ){
				finalelist[i] = counter;
				usedUp[counter-1] = false;
				
				counter++;
				
			}
			else{
				//cout<<counter<<" ";
				counter++;
			}
		}
	}
	//cout<<endl;
	 
	if/*(isWorking(elems,finalelist,allelems))*/(counter > allelems){
		cout<<"YES"<<endl;
		printing(finalelist,allelems);
		cout<<endl;
	}
	else{
		cout<<"NO \n";
	}

}
int main(){
	int testcases;
	cin>>testcases;
	for(int i = 0; i <testcases; i++ ){
		int allelems;
		int seqelems;
		 
		int firstelem;
		vector<int>elems;
		cin>>allelems;
		cin>>seqelems;
		 
		 
		for(int i = 0; i < seqelems; i++){
			int toadd;
			cin>>toadd;
			elems.push_back(toadd-1);
		}
		 
		finalise(elems,allelems);
	}
	return 0;
}