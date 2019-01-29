#include<iostream>
#include<vector>
using namespace std;
#define ll long long 

int main()
{


int test;
cin>>test;
while(test--)
{

	ll a;
	cin>>a;


	if(a==2)
	{
		cout<<"9\n";
		continue;
	}
	ll cur=2,prevCur=2;
	int fir=1,sec=1;
    bool flag=false;
    for(ll i=10;i<=1000000000000;i*=10)
    {
    	for(ll j=1;j<=9;j++)
    	{

    		if(j==1)
    			cur+=i-1;
    		else if(j==4||j==6||j==9)
    			cur+=i/j+1;
    		else if(j==5)
    			cur+=i/j-1;
    		else cur+=i/j;

    		if(cur>=a)
    		{   fir=i;
    			sec=j;
    			flag=true;
    			break;
    		}
    	   prevCur=cur;



    		


    	}
    	if(flag)
    		break;

    	cur+=1;
    

    }

    switch(sec)
    {//cout<<fir*sec+(a-prevCur-1)*sec<<endl;

    	case 1:
    	   cout<<fir*sec+(a-prevCur-1)*sec;
    	break;

    	case 2:
    	    cout<<fir*sec+(a-prevCur-1)*sec;
    	break;

    	case 3:
    	cout<<(fir*sec+1)+(a-prevCur-1)*sec;
    	break;

    	case 4:
    		cout<<(fir*sec+1)+(a-prevCur-1)*sec;
    	break;

    	case 5:
    		cout<<(fir*sec+4)+(a-prevCur-1)*sec;
    	break;

    	case 6:
    		cout<<(fir*sec)+(a-prevCur-1)*sec;
    	break;

    	case 7:
    		cout<<(fir*sec+3)+(a-prevCur-1)*sec;

    	break;

    	case 8:
    		cout<<(fir*sec+1)+(a-prevCur-1)*sec;
    	break;

    	case 9:
    		cout<<(fir*sec)+(a-prevCur-1)*sec;
    	break;


    }
    cout<<endl;

}	
	



return 0;
}