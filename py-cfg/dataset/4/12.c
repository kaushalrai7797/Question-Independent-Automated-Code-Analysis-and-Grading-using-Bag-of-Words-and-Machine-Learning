#include <iostream>
using namespace std;
int main()
{
	int T ;
	string M,W;
	cin >> T;
	bool flag , arr[T];
	for (int i = 0 ; i < T ; i++)
	{
		flag = false; 
		cin >> M;
		cin >> W;
		for(int j = 0 ; j < M.length() ; j++)
		{
			for (int k = 0 ; k < W.length() ; k++)
			{
				if (M[j] == W[k])
				{
					flag = true;
					break;
				}
				else
				flag = false;
			}
			if (flag == false)
			break;
		}
		if(flag == false)
		arr[i] = false;
		else
		arr[i] = true;
	}
	for (int i = 0 ; i < T ; i++)
	if(arr[i])
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}