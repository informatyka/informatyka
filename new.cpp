#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

string GotoLine(int line)
{

    ifstream f("settings.txt");
    string s;

    for (int i = 1; i <= line; i++)
    {
            std::getline(f, s);
    }


    return s;
}


int * Read()
{
	int counter;
	string line;
	ifstream file("settings.txt");
	if(file.is_open())
	{
		while(getline(file,line))
		{
			counter=counter+1;
		}
	}
	if(file.is_open())
	{
		cout<<GotoLine(3)<<endl;
	{
	file.close();
	cout<<"Ilosc linii: "<<counter<<endl;
return 0;
}
}

return 0;
}
int main()
{
	Read();
}
