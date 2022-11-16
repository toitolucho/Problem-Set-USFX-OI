#include <iostream>
using namespace std;
int main()
{
    short a,b;
    cin>>a>>b;
    if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
        cout<<"A"<<endl;
    else if ((a==3 && b==1) || (a==1 && b==2) || (a==2 && b==3))
        cout<<"B"<<endl;
    else
        cout<<"EMPATE"<<endl;     

    return 0;
}