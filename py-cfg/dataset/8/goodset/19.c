#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double bisect(int type[110], int data[110][2], int n);
int main()
{
	int t,n;
	int data[110][2];
	int type[110];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i = 0; i < n; i++)
		{
			cin>>type[i];
			if(type[i] == 1 || type[i] == 2)
				{
					cin>>data[i][0]>>data[i][1];
					data[i][0]--;
					data[i][1]--;
			    }
			
		}

		double output = bisect(type, data, n);
		output = floor(output * 100000 + 0.5)/100000;
		cout<<fixed<<setprecision(5)<<output<<endl;
	}
	system("PAUSE");
	return 0;
}

double bisect(int type[110], int data[110][2], int n)
{
	double p[110];
	double lo = 0, hi = 1;
	double mid;
	double error = 0.00000001;
	
	do
	{
		mid = (lo + hi)/2;
		for(int i = 0; i < n; i++)
		{
			switch(type[i])
			{
			case 0: p[i] = mid; break;
			case 1: p[i] =  (1 - (( 1 - p[data[i][0]])*(1 - p[data[i][1]]))); break;
			case 2: p[i] = p[data[i][0]] * p[data[i][1]]; break;
			}
		}
		
		if(p[n-1] - 0.5 > error)
			hi = mid;
		else if(p[n-1] - 0.5 < -error)
			lo = mid;
		else
			break;
	}while(true);
	


	return mid;
}
