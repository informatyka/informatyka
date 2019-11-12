#include <iostream>

using namespace std;

//funkcje



int main(int argc, char const *argv[])
{


    int wymiar_x, wymiar_y, ilosc_na_start;
    cout<<"Wpisz wymiar x tablicy: ";
    cin>>wymiar_x;
    cout<<"Wpisz wymiar y tablicy: ";
    cin>>wymiar_y;
    cout<<"Wpisz ilosc punktow na start: ";
    cin>>ilosc_na_start;
    int start[ilosc_na_start][2];


    int ** board = new int * [wymiar_x];
    for(int i = 0; i<wymiar_x;i++)
    {
        board[i] = new int[wymiar_y];
    }


    cout<<"Czas podać koordynaty:"<<endl;
    for (int i = 0; i < ilosc_na_start; i++)
    {
        int tempx=0;
        int tempy = 0;
        cout<<"Koordynat x"<<i<<": "<<endl;
        cin>>tempx;
        cout<<"Koordynat y"<<i<<": "<<endl;
        cin>>tempy;
        board[tempx][tempy]=1;
    }
//
//
//
// cout<<"############################"<<endl;

for (int i = 0; i < wymiar_x; i++)
{
    for (int j = 0; j < wymiar_y; j++)
    {
        cout<<board[i][j];
    }
    cout<<endl;
}


// cout<<"############################"<<endl;
    return 0;
}
