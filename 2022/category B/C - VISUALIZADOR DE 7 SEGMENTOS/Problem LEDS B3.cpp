#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    string n; 
    int totalLeds;
    cin>>t;
    int nroLeds[10] = {6,2,5,5,4,5,6,3,7,6};
    while(t--){
        cin>>n;
        totalLeds =0;
        for(int i=0; i<n.length(); i++)
        {
            totalLeds+=nroLeds[n[i]-48] ;
            //cout<<nroLeds[n[i]-48] << "  "<< n[i]-48<<endl;
        } 
        if(totalLeds%2==1)
        {
            cout<<"7";
            totalLeds-=3;
        }
        for(int i =0; i<totalLeds/2; i++)
        {
            cout<<"1";
        }
        cout<<endl;


    }

    return 0;
}