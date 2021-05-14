//Author: Nathan Gerbino
#ifndef COLORS_H
#define COLORS_H
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

class colors{

  private:
    int z;
  public:
    string color;// color the person put into the system
    string colorgenmethod;//what color genmethod the system is using
    string filename;//what the file name is
    string personality;// what the person put in as their personality
    string myfile= "myfile";
    
    
    colors (string color, string colorgenmethod, string filename, string personality);
  
    //void string printcolor(string color);
    //void colors::printcolor(string color){ in file color cpp
    //cout << color << endl;
    
    //get colorfuntion?
    //get colorgenmethod function?

};

#endif