#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    long long int n;
    long long int totalSum=0;
    long long int acum=0;
    long long int x;

    ifstream cin2("numeroperdidoa/input/input0122.txt");
    //long long int valueFromLimits = LLONG_MAX;
   // cout<<valueFromLimits<<endl;
    cin2>> n;
    for(int i =0; i<n-1; i++)
    {
        cin2>>x;
        acum+=x;
    }
    totalSum = (n+1)*n/2;
    //cout<<    totalSum << " "<< acum << " "  <<  totalSum - acum<<endl;
    cout<< totalSum - acum<<endl;

    return 0;
}