#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <random>
using namespace std;


int main()
{
    int casos = 7;
    int indice = 0;
    int h,m, x, nleds, total, d, nc;
    while(casos--)
    {
        //ifstream cin2("input0" + std::to_string(10-casos)+".txt");
        ofstream cout2("visualizador7segmentosA/input/input0" + std::to_string(indice)+".txt");
        ofstream cout3("visualizador7segmentosA/output/output0" + std::to_string(indice)+".txt");

        indice++;
        
        std::random_device dev;
        std::mt19937 rng(dev());
        
		std::uniform_int_distribution<std::mt19937::result_type> dist4(1,100);
		nc = dist4(rng);
		cout2<<nc<<endl;

		cout<<nc<<" " <<endl;
		while(nc--)
		{
			
			std::uniform_int_distribution<std::mt19937::result_type> dist6(1,23);
			h = dist6(rng);
			std::uniform_int_distribution<std::mt19937::result_type> dist5(1,59);
			m = dist5(rng);
			
			
			std::cout<<h << " " << m <<std::endl;		
			
			cout2<< h << " " << m <<std::endl;
			
			
			
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
			cout3<<total<<endl;
			x=h*100+m;
			cout3<<x<<endl;
			if(total%2==1)
			{
				cout3<<"7";
				total-=3;
			}
			for(int i =0; i<total/2; i++)
			{
				cout3<<"1";
			}
			//cout2<<endl;
		}

        
        


        // vector<int> datos(x);
        // std::generate_n(datos.begin(), x, increment());
        // std::random_shuffle(datos.begin(), datos.end());
        // cout2<<x<<endl;
        // //cout3<<datos[x-1];
        // //cout3<<"1";
        // cout3<<x;
        // for(int i=0; i<datos.size(); i++ )
        // {
        //     //cout<< datos[i]<< "  ";
        //     //if(datos[i]!=1)
        //     if(datos[i]!=x)
        //         cout2<< datos[i]<< " ";
        // }
        //cout<<endl;




    }



    return 0;
}
