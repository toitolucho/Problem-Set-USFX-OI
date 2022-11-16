#include <iostream>
#include <climits>
using namespace std;
int main()
{
    long long int x, sum=0;
    long long int xmin =LLONG_MAX;
    long long int xmax=-1;
    long long int sumLeft, sumTotal=0;
    int cont = 0;
    while(cin>>x)
    {
        xmax = max(xmax,x);
        xmin = min(xmin,x);
        sum += x;
        cont++;
    }
    sumLeft = (xmin)*(xmin-1)/2;
    sumTotal = (xmax+1)*xmax/2;
    //cout<<    sumLeft << " "<< sumTotal << " "  << sum<<" "  << cont<<" "  << xmax<<" "  << xmin<< endl;
   
    x = sumTotal- ( sumLeft + sum );
    cout<<x;

    return 0;
}
