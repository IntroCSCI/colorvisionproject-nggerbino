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
    
  public:
    string color;
    string colorgenmethod;
    string filename;
    string personality;
    string myfile= "myfile";
    int z;
    
    colors (string color, string colorgenmethod, string filename, string personality);
  
    //void string printcolor(string color);
    //void colors::printcolor(string color){ in file color cpp
    //cout << color << endl;
    
    //get colorfuntion?
    //get colorgenmethod function?

};

#endif