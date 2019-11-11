#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <limits>
#include <cmath>
 

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
 
 
string Read(int what)
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
		string report = GotoLine(what);
	{
	file.close();

return report;
}
}

return 0;
}
 
 int main()
 {
    string x0 =Read(1);
    string y0 = Read(2);
    int x = stoi(x0);
    int y = stoi(y0);
 
        int ** board = new int * [x];
    for(int i = 0; i<x;i++)
    {
        board[i] = new int[y];
    }
 
    

    float temp = (float)x;
    float resize = (840/temp)/120;
 
    float fl_x = resize;
    float fl_y = resize;
    //Main game Window
    sf::RenderWindow window(sf::VideoMode(840,840), "Game of life");
 
    sf::Vector2f targetSize(fl_x, fl_y); 
    // trzeba stworzyć tablicę obiketów!!!
    float maximum = resize*resize;
    int maximum_int = (int)maximum;
    int resize_int = (int)resize;
    sf::Sprite box[resize_int][resize_int];
    
    sf::Texture myTexture;
    myTexture.loadFromFile("images/white.png");

    for (int j = 0; j < resize_int; j++)
    {    
    for (int i = 0  ; i <=resize_int ; i++)
    {
    box[j][i].setScale(targetSize.x,targetSize.y);
    
    box[j][i].setTexture(myTexture);
    box[j][i].setPosition(((int)i)*(fl_x*120), ((int)i)*(fl_y*120));
    }
    }
     while (window.isOpen())
     {
         sf::Event event;
         while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    
 
        window.clear(sf::Color::White);
        for (int j = 0; j < resize_int; j++)
        {
        for (int i = 0; i < resize_int; i++)
        {
            window.draw(box[j][i]);
        }
        }
        window.display();
     }
return 0;
}