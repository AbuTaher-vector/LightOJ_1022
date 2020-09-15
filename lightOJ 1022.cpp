#include<bits/stdc++.h>
using namespace std;
#define dd double
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        dd x,sq,cir;
        cin>>x;
        sq=4*x*x;
        cir=2 * acos (0.0)*x*x;
        cout<<"Case "<<i<<": ";
        printf("%.2lf\n",sq-cir);
    }
}
