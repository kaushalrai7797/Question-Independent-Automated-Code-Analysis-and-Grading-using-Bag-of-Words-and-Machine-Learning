#include <bits/stdc++.h>
using namespace std;


double a[500],b[500];
int tp[500],x[500],y[500],n;

double val(double p)
{
        for(int i=1;i<=n;i++)
        {
            if(!tp[i])a[i]=p,b[i]=1-p;
            else if(tp[i]==1)
            {
                a[i]= (b[x[i]]*a[y[i]  ])+(a[x[i]  ]*b[y[i]  ])+a[x[i]   ]*a[y[i]   ];
                b[i]=1-a[i];
            }else
            {
                a[i]=a[x[i]  ]*a[y[i]  ];
                b[i]=1-a[i];
            }
        }
        return a[n];
}

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        cin>>n;
        a[0]=1;
        b[0]=0;
        double p=1;
        //cin>>p;

        for(int i=1;i<=n;i++)
        {
            cin>>tp[i];
            if(!tp[i]);
            else if(tp[i]==1)
            {
                cin>>x[i]>>y[i];
            }else
            {
                cin>>x[i]>>y[i];
            }
        }

        double L=0,R=1;

        for(int c=5000;c--;)
        {
            double m1=L+(R-L)/3;
            double m2=R-(R-L)/3;
            double r1=val(m1);
            double r2=val(m2);

            if(fabs(r1-.5) < fabs(r2-.5))
            {
                R=m2;
            }else L=m1;
        }




        cout<<setprecision(5)<<fixed;
        cout<<L<<endl;
        //cerr<<a[n]<<endl;
        //cout<<1/2.0/a[n]<<endl;
    }
}
