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
    int casos = 3;
    int indice = 33;
    while(casos--)
    {
        //ifstream cin2("input0" + std::to_string(10-casos)+".txt");
        ofstream cout2("numeroperdidoa/input/input0" + std::to_string(indice)+".txt");
        ofstream cout3("numeroperdidoa/output/output0" + std::to_string(indice)+".txt");

        indice++;
        int n = 5;
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(3,10000000);
        

        int x = dist6(rng) ;


        std::cout << x << std::endl;

        vector<int> datos(x);
        std::generate_n(datos.begin(), x, increment());
        std::random_shuffle(datos.begin(), datos.end());
        cout2<<x<<endl;
        //cout3<<datos[x-1];
        //cout3<<"1";
        cout3<<x;
        for(int i=0; i<datos.size(); i++ )
        {
            //cout<< datos[i]<< "  ";
            //if(datos[i]!=1)
            if(datos[i]!=x)
                cout2<< datos[i]<< " ";
        }
        //cout<<endl;




    }



    return 0;
}