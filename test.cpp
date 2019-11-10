#include <iostream>

using namespace std;

	class Test
	{
	    public:
	    string name;
	};

int main()
{
    Test newobj[5];
    for(int i = 0; i<=4; i++)
    {
        newobj[i].name="A";
    }
    cout<<newobj[0].name<<endl;
    cout<<newobj[4].name<<endl;
}
