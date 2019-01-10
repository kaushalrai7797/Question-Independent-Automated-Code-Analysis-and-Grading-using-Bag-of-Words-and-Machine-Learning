#include<iostream>
#include<vector>

using namespace std;
int highestDiff(vector<int>arr){
	int l = arr.size();
	 int maxdiff = 0;
	for (int i = 0; i < l-2; i++){
		int tempdiff = arr[i+1]- arr[i];
		if(tempdiff > maxdiff) maxdiff = tempdiff;
	}
	return maxdiff+1;
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
	 
	int firstelem = allelems*2;
	vector<int>arr;
	for(int i = firstelem; i > allelems; i--){
		arr.push_back(i);
	}
	int i;
	for(int j = 0; j < elems.size();j++){
		i = elems[j];
		arr[i] = i+1;
	}
	i++;
	while(i < allelems){
		arr[i] = 0;
		i++;
	}
	if(isWorking(elems,arr,allelems)){
		cout<<"YES"<<endl;
		printing(arr,allelems);
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