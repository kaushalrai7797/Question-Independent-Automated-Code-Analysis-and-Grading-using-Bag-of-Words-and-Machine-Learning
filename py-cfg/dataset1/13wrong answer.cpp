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
bool isWorking(vector<int>elems, vector<int>arr,int allelems, bool zeroinc){
	vector<vector<int>> allsubs = allSubs(arr);
	int maxL = elems.size();
	for(vector<vector<int>>::iterator it = allsubs.begin(); it != allsubs.end();it++){
		if((*it).size() >= maxL && (*it) != elems){
			return false;		
		}

	}
	return true;

}
	 
vector<int>fillFirstfew(vector<int>elems,int allelems, bool zeroinc){
	int offset = highestDiff(elems);
	 vector<int>arr(allelems);
	int i;
	if(zeroinc){
		i = 0;
	}
	else{
		 i =1;
	}
	for( ;i < elems.size(); i++){
		arr[elems[i]] = i * offset;
	}
	if(!zeroinc){
		arr[0] = i * offset;
	}
	 
	return arr;
	
}
void printing(vector<int> arr, int allelems){
	for(int counter = 0; counter < allelems; counter++){
		cout<<arr[counter]<<" ";
	}
	cout<<endl;
}
void finalise(vector<int>elems, int allelems,bool zeroinc){
	 
	int l = elems.size();
	vector<int> arr = fillFirstfew(elems,allelems,zeroinc);
	int i = 1;
	for(; i < elems.size(); i++){
		int limit =arr[elems[(i+1)%l]];
		int counter = elems[i];
		int counter1 = 1;
		while(counter > elems[i-1]){
			arr[counter] = 	limit + counter1;
			counter--;counter1++;	
		}
	}
	int limit = arr[elems[(i)%l]];
	int counter = allelems - 1;
	int counter1 =1;
	while(counter > elems[i-1]){
		arr[counter] = 	limit - counter1;
		counter--;counter1++;	
	}
	if(isWorking(elems,arr,allelems,zeroinc)){
		cout<<"YES"<<endl;
		printing(arr,allelems);
		cout<<endl;
	}
	else{
		cout<<"NO \n";
		printing(arr,allelems);
		cout<<endl;
	}

}
int main(){
	int testcases;
	cin>>testcases;
	for(int i = 0; i <testcases; i++ ){
		int allelems;
		int seqelems;
		bool zeroinc = false;
		int firstelem;
		vector<int>elems;
		cin>>allelems;
		cin>>seqelems;
		cin>>firstelem;
		if(firstelem == 1){
			zeroinc = true;
		}
		else{
			elems.push_back(firstelem);
		}
		elems.push_back(0);
		for(int i = 1; i < seqelems; i++){
			int toadd;
			cin>>toadd;
			elems.push_back(toadd-1);
		}
		finalise(elems,allelems,zeroinc);
	}
	return 0;
}