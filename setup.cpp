#include <iostream>
#include <fstream>


using namespace std;

int ErrorCatcher(string ilosc_na_start)
{
    int int_ilosc_na_start =0;
    try
    {
        int temp = stoi(ilosc_na_start);
        int_ilosc_na_start = temp;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }
    return int_ilosc_na_start;
}

int main()
{
	 string wymiar_x, wymiar_y, ilosc_na_start;
    cout<<"Wpisz wymiar x tablicy: ";
    cin>>wymiar_x;
    cout<<"Wpisz wymiar y tablicy: ";
    cin>>wymiar_y;
    cout<<"Wpisz ilosc punktow na start: ";
    cin>>ilosc_na_start;


    int int_ilosc_na_start = ErrorCatcher(ilosc_na_start);
    string tempx[int_ilosc_na_start];
    string tempy[int_ilosc_na_start];

    cout<<"Czas podać koordynaty:"<<endl;
    for (int i = 0; i < int_ilosc_na_start; i++)
    {
        cout<<"Koordynat x"<<i<<": "<<endl;
        cin>>tempx[i];
        cout<<"Koordynat y"<<i<<": "<<endl;
        cin>>tempy[i];

    }

    ofstream file ("settings.txt", ios::trunc);
    file<<wymiar_x<<endl<<wymiar_x<<endl;
    for (int i = 0; i < (sizeof(tempx)/sizeof(tempy[0])); i++)
    {
            file<<tempx[i]<<endl;
            file<<tempy[i]<<endl;
    }
    file.close();
    system("./bin/test");
	return 0;
}
