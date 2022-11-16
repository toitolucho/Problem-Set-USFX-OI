#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <random>
using namespace std;

struct increment {
    int value;
    increment(): value(0) {}
    int operator() () { return ++value; }
};
 

int main()
{
    int casos = 5;
    int indice = 10;
    while(casos--)
    {
        //ifstream cin2("input0" + std::to_string(10-casos)+".txt");
        
        int n = 5;
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(3,100000);
        

        int x = dist6(rng) ;
        std::uniform_int_distribution<std::mt19937::result_type> dist5(3,5000);
        int z = dist5(rng) ;

       // std::cout << x << std::endl;

        vector<int> datos(x);
        std::generate_n(datos.begin(), x, increment());
        std::random_shuffle(datos.begin()+z, datos.end());
       
        //cout<<x<< " " <<z<<endl;
       
        if(z<x-1)
        {
            ofstream cout2("numeroperdidoB/input/input0" + std::to_string(indice)+".txt");
            ofstream cout3("numeroperdidoB/output/output0" + std::to_string(indice)+".txt");
            indice++;

            //cout2<<x<<endl;
            //cout3<<datos[x-1];
            //cout3<<"1";
           
            cout3<<z<<  " " <<x+1<<endl;
           // cout<<z<<  " " <<x+1<<endl;
            for(int i=z; i<datos.size(); i++ )
            {
                //cout<< datos[i]<< "  ";
                //if(datos[i]!=1)
                //if(datos[i]!=x)
                   // cout<< datos[i]<< " ";
                    cout2<< datos[i]<< " ";
            }
            cout<<endl<<endl; 
                           
        }
        




    }



    return 0;
}