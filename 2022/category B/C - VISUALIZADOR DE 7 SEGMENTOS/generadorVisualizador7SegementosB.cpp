#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <random>
using namespace std;


std::string random_string(std::size_t length)
{
    const std::string DIGITS = "0123456789";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, DIGITS.size() - 1);

    std::string random_string;

    for (std::size_t i = 0; i < length; ++i)
    {
        random_string += DIGITS[distribution(generator)];
    }

    return random_string;
}


int main()
{
    int casos = 7;
    int indice = 7;
    int nc,  totalLeds;
	int nroLeds[10] = {6,2,5,5,4,5,6,3,7,6};
	string n;
    while(casos--)
    {
        //ifstream cin2("input0" + std::to_string(10-casos)+".txt");
        ofstream cout2("visualizador7segmentosB/input/input0" + std::to_string(indice)+".txt");
        ofstream cout3("visualizador7segmentosB/output/output0" + std::to_string(indice)+".txt");

        indice++;
        
        std::random_device dev;
        std::mt19937 rng(dev());
        
		std::uniform_int_distribution<std::mt19937::result_type> dist4(1,20);
		nc = dist4(rng);
		cout2<<nc<<endl;

		cout<<nc<<" " <<endl;
		while(nc--)
		{
			
			std::uniform_int_distribution<std::mt19937::result_type> dist6(1,25);
			n =  random_string( dist6(rng));
			//cout<<n<<endl;			
			cout2<< n <<std::endl;		
			
			totalLeds =0;
			for(int i=0; i<n.length(); i++)
			{
				totalLeds+=nroLeds[n[i]-48] ;
				//cout<<nroLeds[n[i]-48] << "  "<< n[i]-48<<endl;
			} 
			if(totalLeds%2==1)
			{
				//cout<<"7";
				cout3<<"7";
				totalLeds-=3;
			}
			for(int i =0; i<totalLeds/2; i++)
			{
				//cout<<"1";
				cout3<<"1";
			}
			//cout<<endl<<endl;


			
			
			cout3<<endl;
		}

        
        




    }



    return 0;
}
