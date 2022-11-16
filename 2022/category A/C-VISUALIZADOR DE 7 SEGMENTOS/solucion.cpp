#include <iostream>
using namespace std;
int main()
{
    short h,m,n, x, mm=1,mh=100,d,nleds, total;
    cin>>n;
    while(n--)
    {
        mm=1,mh=100;
        cin>>h>>m;        
        x=h*100+m;
        nleds=0;
        total = 0;
        while(x!=0)
        {
            d=x%10;
            x/=10;
            switch (d)
            {
                case 0:case 9:case 6:
                nleds = 6;
                break;
                case 2:case 3:case 5:
                nleds = 5;
                break;
                case 1:
                nleds = 2;
                break;
                case 7:
                nleds = 3;
                break;
                case 4:
                nleds = 4;
                break;
                 case 8:
                nleds = 7;
                break;
            default:
                break;
            }
            total +=nleds;

           
        }
        cout<<total<<endl;
        x=h*100+m;
        cout<<x<<endl;
        if(total%2==1)
        {
            cout<<"7";
            total-=3;
        }
        for(int i =0; i<total/2; i++)
        {
            cout<<"1";
        }
        cout<<endl;


        
    }
    return 0;
}
