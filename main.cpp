//Author: Nathan Gerbino
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "colors.h"
#include<bits/stdc++.h>

using namespace std;

void personalitycolor1(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "MediumVioletRed", "DeepPink", "PaleVioletRed", "HotPink", "LightPink", or "Pink".
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : "<< personalcolor[x] <<")";
}
void personalitycolor2(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "DarkRed", "Red", "Firebrick", "Crimson", "IndianRed", "LightCoral", "Salmon", "DarkSalmon", or "LightSalmon".
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout << "Your list of color combinations is ; "<<color<<", Gold, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: Gold), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : "<< personalcolor[x] <<")";
}
void personalitycolor3(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "DarkKhaki", "Gold", "Khaki", "PeachPuff", "Yellow", "PaleGoldenrod", "Moccasin", "PapayaWhip", "LightGoldenrodYellow", "LemonChiffon", or "LightYellow"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor4(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "Maroon", "Brown", "SaddleBrown", "Sienna", "Chocolate", "DarkGoldenrod", "Peru", "RosyBrown", "Goldenrod", "SandyBrown", "Tan", "Burlywood", "Wheat", "NavajoWhite", "Bisque", "BlanchedAlmond", or "Cornsilk"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor5(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "DarkGreen", "Green", "DarkOliveGreen", "ForestGreen", "SeaGreen", "Olive", "OliveDrab", "MediumSeaGreen", "LimeGreen", "Lime", "SpringGreen", "MediumSpringGreen", "DarkSeaGreen", "MediumAquamarine", "YellowGreen", "LawnGreen", "Chartreuse", "LightGreen", "GreenYellow", or "PaleGreen"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout << "Your list of color combinations is ; "<<color<<", DarkRed, Gold, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: Gold), (color3: Indigo), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor6(string color,string filename,string personality)//This void function is important to the personality color test, this one fuction will only work if the color the person selected was "OrangeRed", "Tomato", "DarkOrange", "Coral", or "Orange"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout << "Your list of color combinations is ; "<<color<<", DarkRed, Gold, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: Gold), (color3: Indigo), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor7(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "Teal", "DarkCyan", "LightSeaGreen", "CadetBlue", "DarkTurquoise", "MediumTurquoise", "Turquoise", "Aqua", "Cyan", "Aquamarine", "PaleTurquoise", or "LightCyan"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : " <<personalcolor[x]<<")";
}
void personalitycolor8(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "Navy", "DarkBlue", "MediumBlue", "Blue", "MidnightBlue", "RoyalBlue", "SteelBlue", "DodgerBlue", "DeepSkyBlue", "CornflowerBlue", "SkyBlue", "LightSkyBlue", "LightSteelBlue", "LightBlue", or "PowderBlue"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor9(string color,string filename,string personality) //This void function is important to the personality color test, this one fuction will only work if the color the person selected was "Indigo", "Purple", "DarkMagenta", "DarkViolet", "DarkSlateBlue", "BlueViolet", "DarkOrchid", "Fuchsia", "Magenta", "SlateBlue", "MediumSlateBlue", "MediumOrchid", "MediumPurple", "Orchid", "Violet", "Plum", "Thistle", or "Lavender"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Gold, White, and "<<personalcolor[x]<<"." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Gold), (color4 : White), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor10(string color,string filename,string personality)//This void function is important to the personality color test, this one fuction will only work if the color the person selected was "MistyRose", "AntiqueWhite", "Linen", "Beige", "WhiteSmoke", "LavenderBlush", "OldLace", "AliceBlue", "Seashell", "GhostWhite", "Honeydew", "FloralWhite", "Azure", "MintCream", "Snow", "Ivory", or "White"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"black", "DarkSlateGray", "DimGray", "SlateGray"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, Gold, and "<<personalcolor[x]<<"." << endl;
myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : Gold), (color5 : "<<personalcolor[x]<<")";
}
void personalitycolor11(string color,string filename,string personality)//This void function is important to the personality color test, this one fuction will only work if the color the person selected was "Black", "DarkSlateGray", "DimGray", "SlateGray", "Gray", "LightSlateGray", "DarkGray", "Silver", "LightGray", or "Gainsboro"
{
fstream myfile(filename);
int x;
string personalcolor[]= {"DarkRed", "Red", "Firebrick", "Crimson"};
if (personality == "average")
{x=0;}
if (personality == "reserved")
{x=1;}
if (personality == "selfcentered")
{x=2;}
if (personality == "rolemodel")
{x=3;}
cout <<"Your list of color combinations is ; "<<color<<", "<<personalcolor[x]<<", DarkGreen, Indigo, White, and Gold." << endl;
myfile << "color { (color: "<< color <<"),(color1: "<<personalcolor[x]<<"), (color2: DarkGreen),(color3: Indigo), (color4 : White), (color5 :Gold)";
}

void colornum1(string color,string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "MediumVioletRed", "DeepPink", "PaleVioletRed", "HotPink", "LightPink", or "Pink"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum2(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "DarkRed", "Red", "Firebrick", "Crimson", "IndianRed", "LightCoral", "Salmon", "DarkSalmon", or "LightSalmon"
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", Gold, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: Gold), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum3(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "DarkKhaki", "Gold", "Khaki", "PeachPuff", "Yellow", "PaleGoldenrod", "Moccasin", "PapayaWhip", "LightGoldenrodYellow", "LemonChiffon", or "LightYellow"
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum4(string color,string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "Maroon", "Brown", "SaddleBrown", "Sienna", "Chocolate", "DarkGoldenrod", "Peru", "RosyBrown", "Goldenrod", "SandyBrown", "Tan", "Burlywood", "Wheat", "NavajoWhite", "Bisque", "BlanchedAlmond", or "Cornsilk"
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum5(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "DarkGreen", "Green", "DarkOliveGreen", "ForestGreen", "SeaGreen", "Olive", "OliveDrab", "MediumSeaGreen", "LimeGreen", "Lime", "SpringGreen", "MediumSpringGreen", "DarkSeaGreen", "MediumAquamarine", "YellowGreen", "LawnGreen", "Chartreuse", "LightGreen", "GreenYellow", or "PaleGreen"
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, Gold, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: Gold), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum6(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "OrangeRed", "Tomato", "DarkOrange", "Coral", or "Orange"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum7(string color1, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "Teal", "DarkCyan", "LightSeaGreen", "CadetBlue", "DarkTurquoise", "MediumTurquoise", "Turquoise", "Aqua", "Cyan", "Aquamarine", "PaleTurquoise", or "LightCyan"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color1<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color1 <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum8(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "Navy", "DarkBlue", "MediumBlue", "Blue", "MidnightBlue", "RoyalBlue", "SteelBlue", "DodgerBlue", "DeepSkyBlue", "CornflowerBlue", "SkyBlue", "LightSkyBlue", "LightSteelBlue", "LightBlue", or "PowderBlue"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum9(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "Indigo", "Purple", "DarkMagenta", "DarkViolet", "DarkSlateBlue", "BlueViolet", "DarkOrchid", "Fuchsia", "Magenta", "SlateBlue", "MediumSlateBlue", "MediumOrchid", "MediumPurple", "Orchid", "Violet", "Plum", "Thistle", or "Lavender"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Gold, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Gold), (color4 : White), (color5 : Black)";
}

void colornum10(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "MistyRose", "AntiqueWhite", "Linen", "Beige", "WhiteSmoke", "LavenderBlush", "OldLace", "AliceBlue", "Seashell", "GhostWhite", "Honeydew", "FloralWhite", "Azure", "MintCream", "Snow", "Ivory", or "White"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, Gold, and Black." << endl;
myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : Gold), (color5 : Black)";
}

void colornum11(string color, string filename) //This prints out your color combinations basied the color the person selected, if the color they selcted is "Black", "DarkSlateGray", "DimGray", "SlateGray", "Gray", "LightSlateGray", "DarkGray", "Silver", "LightGray", or "Gainsboro"
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Gold." << endl;
  myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Gold)";
}

void colorcompair1(string color, string filename){
if (color == "mediumvioletred" || color == "deeppink" || color == "palevioletred" || color == "hotpink" || color == "lightpink" || color == "pink")
{
colornum1(color,filename);// inputs the data into the file and puts it in the console too.  
}
}
void colorcompair2(string color, string filename){
if (color == "darkred" ||color == "red" ||color == "firebrick" ||color == "crimson" ||color == "indianred" ||color == "lightcoral" ||color == "salmon" || color == "darksalmon" || color == "lightsalmon")
{
colornum2(color, filename);// inputs the data into the file and puts it in the console too.
}
}
void colorcompair3(string color, string filename){
if (color == "darkkhaki" || color == "gold" || color == "khaki" || color == "peachpuff" || color == "yellow" || color == "palegoldenrod" || color == "moccasin" || color == "papayawhip" || color == "lightgoldenrodyellow" || color == "lemonchiffon" || color == "lightyellow")
{
colornum3(color, filename);// inputs the data into the file and puts it in the console too.
}
}
void colorcompair4(string color, string filename){
if (color == "maroon" || color == "brown" || color == "saddlebrown" || color == "sienna" || color == "chocolate" || color == "darkgoldenrod" || color == "peru" || color == "rosybrown" || color == "goldenrod" || color == "sandybrown" || color == "tan" || color == "burlywood" || color == "wheat" || color == "navajowhite" || color == "bisque" || color == "blanchedalmond" || color == "cornsilk")
{
colornum4(color, filename);// inputs the data into the file and puts it in the console too.
}
}
void colorcompair5(string color, string filename){
if (color == "darkgreen" || color == "green" || color == "darkolivegreen" || color == "forestgreen" || color == "seagreen" || color == "olive" || color == "olivedrab" || color == "mediumseagreen" || color == "limegreen" || color == "lime" || color == "springgreen" || color == "mediumspringgreen" || color == "darkseagreen" || color == "mediumaquamarine" || color == "yellowgreen" || color == "lawngreen" || color == "chartreuse" || color == "lightgreen" || color == "greenyellow" || color == "palegreen")
{
colornum5(color, filename);// inputs the data into the file and puts it in the console too.
}
}
void colorcompair6(string color, string filename){
if (color == "orangered" || color == "tomato" || color == "darkorange" || color == "coral" || color == "orange")
{
colornum6(color, filename);// inputs the data into the file and puts it in the console too.
}
}
void colorcompair7(string color, string filename){
if (color == "teal" || color == "darkcyan" || color == "lightseagreen" || color == "cadetblue" || color == "darkturquoise" || color == "mediumturquoise" || color == "turquoise" || color == "aqua" || color == "cyan" || color == "aquamarine" || color == "paleturquoise" ||color == "lightcyan")
{
colornum7(color, filename);//inputs the data into the file and puts it in the console too.
int z=1;
}
}

void colorcompair8(string color, string filename){
if (color == "navy" || color == "darkblue" || color == "mediumblue" || color == "blue" || color == "midnightblue" || color == "royalblue" || color == "steelblue" || color == "dodgerblue" || color == "deepskyblue" || color == "cornflowerblue" || color == "skyblue" || color == "lightskyblue" || color == "lightsteelblue" || color == "lightblue" || color == "powderblue")
{
colornum8(color, filename);//inputs the data into the file and puts it in the console too.
}
}

void colorcompair9(string color, string filename){
if (color == "indigo" || color == "purple" || color == "darkmagenta" || color == "darkviolet" || color == "darkslateblue" || color == "blueviolet" || color == "darkorchid" || color == "fuchsia" || color == "magenta" || color == "slateblue" || color == "mediumslateblue" || color == "mediumorchid" || color == "mediumpurple" || color == "orchid" || color == "violet" || color == "plum" || color == "thistle" || color == "lavender")
{
colornum9(color, filename);//inputs the data into the file and puts it in the console too.
}
}

void colorcompair10(string color, string filename){
if (color == "mistyrose" || color == "antiquewhite" || color == "linen" || color == "beige" || color == "whitesmoke" || color == "lavenderblush" || color == "oldlace" || color == "aliceblue" || color == "seashell" || color == "ghostwhite" || color == "honeydew" || color == "floralwhite" || color == "azure" || color == "mintcream"|| color == "snow" || color == "ivory" || color == "white")
{
colornum10(color, filename);//inputs the data into the file and puts it in the console too.
}
}
void colorcompair11(string color, string filename){
if (color == "black" || color == "darkslategray" || color == "dimgray" || color == "slategray" || color == "gray" || color == "lightslategray" || color == "darkgray" || color == "silver" || color == "lightgray" || color == "gainsboro")
{
colornum11(color, filename);//inputs the data into the file and puts it in the console too.
}
}
void colorcompair12(string color, string filename){
if (color == "mediumvioletred" || color == "deeppink" || color == "palevioletred" || color == "hotpink" || color == "lightpink" || color == "pink"||color == "darkred" ||color == "red" ||color == "firebrick" ||color == "crimson" ||color == "indianred" ||color == "lightcoral" ||color == "salmon" || color == "darksalmon" || color == "lightsalmon"||color == "darkkhaki" || color == "gold" || color == "khaki" || color == "peachpuff" || color == "yellow" || color == "palegoldenrod" || color == "moccasin" || color == "papayawhip" || color == "lightgoldenrodyellow" || color == "lemonchiffon" || color == "lightyellow"||color == "maroon" || color == "brown" || color == "saddlebrown" || color == "sienna" || color == "chocolate" || color == "darkgoldenrod" || color == "peru" || color == "rosybrown" || color == "goldenrod" || color == "sandybrown" || color == "tan" || color == "burlywood" || color == "wheat" || color == "navajowhite" || color == "bisque" || color == "blanchedalmond" || color == "cornsilk"||color == "darkgreen" || color == "green" || color == "darkolivegreen" || color == "forestgreen" || color == "seagreen" || color == "olive" || color == "olivedrab" || color == "mediumseagreen" || color == "limegreen" || color == "lime" || color == "springgreen" || color == "mediumspringgreen" || color == "darkseagreen" || color == "mediumaquamarine" || color == "yellowgreen" || color == "lawngreen" || color == "chartreuse" || color == "lightgreen" || color == "greenyellow" || color == "palegreen"||color == "orangered" || color == "tomato" || color == "darkorange" || color == "coral" || color == "orange"||color == "teal" || color == "darkcyan" || color == "lightseagreen" || color == "cadetblue" || color == "darkturquoise" || color == "mediumturquoise" || color == "turquoise" || color == "aqua" || color == "cyan" || color == "aquamarine" || color == "paleturquoise" ||color == "lightcyan"||color == "navy" || color == "darkblue" || color == "mediumblue" || color == "blue" || color == "midnightblue" || color == "royalblue" || color == "steelblue" || color == "dodgerblue" || color == "deepskyblue" || color == "cornflowerblue" || color == "skyblue" || color == "lightskyblue" || color == "lightsteelblue" || color == "lightblue" || color == "powderblue"||color == "indigo" || color == "purple" || color == "darkmagenta" || color == "darkviolet" || color == "darkslateblue" || color == "blueviolet" || color == "darkorchid" || color == "fuchsia" || color == "magenta" || color == "slateblue" || color == "mediumslateblue" || color == "mediumorchid" || color == "mediumpurple" || color == "orchid" || color == "violet" || color == "plum" || color == "thistle" || color == "lavender"||color == "mistyrose" || color == "antiquewhite" || color == "linen" || color == "beige" || color == "whitesmoke" || color == "lavenderblush" || color == "oldlace" || color == "aliceblue" || color == "seashell" || color == "ghostwhite" || color == "honeydew" || color == "floralwhite" || color == "azure" || color == "mintcream"|| color == "snow" || color == "ivory" || color == "white"||color == "black" || color == "darkslategray" || color == "dimgray" || color == "slategray" || color == "gray" || color == "lightslategray" || color == "darkgray" || color == "silver" || color == "lightgray" || color == "gainsboro")
{int x=1;}
else{
cout <<"Not one of the SVG colors" <<endl;//if none of the colors are detected then it will return this statement.
}
}

void colorfulcompair1(string color,string personality, string filename)
{
  if (color == "mediumvioletred" || color == "deeppink" || color == "palevioletred" || color == "hotpink" || color == "lightpink" || color == "pink")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor1(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}
void colorfulcompair2(string color,string personality, string filename)
{
  if (color == "darkred" ||color == "red" ||color == "firebrick" ||color == "crimson" ||color == "indianred" ||color == "lightcoral" ||color == "salmon" || color == "darksalmon" || color == "lightsalmon")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor2(color,filename,personality);// inputs the data into the file and puts it in the console too.

}}}

void colorfulcompair3(string color,string personality, string filename)
{
  if (color == "darkkhaki" || color == "gold" || color == "khaki" || color == "peachpuff" || color == "yellow" || color == "palegoldenrod" || color == "moccasin" || color == "papayawhip" || color == "lightgoldenrodyellow" || color == "lemonchiffon" || color == "lightyellow")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor3(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair4(string color,string personality, string filename)
{
if (color == "maroon" || color == "brown" || color == "saddlebrown" || color == "sienna" || color == "chocolate" || color == "darkgoldenrod" || color == "peru" || color == "rosybrown" || color == "goldenrod" || color == "sandybrown" || color == "tan" || color == "burlywood" || color == "wheat" || color == "navajowhite" || color == "bisque" || color == "blanchedalmond" || color == "cornsilk")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor4(color,filename,personality);// inputs the data into the file and puts it in the console too.   
}}}

void colorfulcompair5(string color,string personality, string filename)
{
  if (color == "darkgreen" || color == "green" || color == "darkolivegreen" || color == "forestgreen" || color == "seagreen" || color == "olive" || color == "olivedrab" || color == "mediumseagreen" || color == "limegreen" || color == "lime" || color == "springgreen" || color == "mediumspringgreen" || color == "darkseagreen" || color == "mediumaquamarine" || color == "yellowgreen" || color == "lawngreen" || color == "chartreuse" || color == "lightgreen" || color == "greenyellow" || color == "palegreen")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor5(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair6(string color,string personality, string filename)
{
  if (color == "orangered" || color == "tomato" || color == "darkorange" || color == "coral" || color == "orange")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor6(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair7(string color,string personality, string filename)
{
  if (color == "teal" || color == "darkcyan" || color == "lightseagreen" || color == "cadetblue" || color == "darkturquoise" || color == "mediumturquoise" || color == "turquoise" || color == "aqua" || color == "cyan" || color == "aquamarine" || color == "paleturquoise" ||color == "lightcyan")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor7(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair8(string color,string personality, string filename)
{
  if (color == "navy" || color == "darkblue" || color == "mediumblue" || color == "blue" || color == "midnightblue" || color == "royalblue" || color == "steelblue" || color == "dodgerblue" || color == "deepskyblue" || color == "cornflowerblue" || color == "skyblue" || color == "lightskyblue" || color == "lightsteelblue" || color == "lightblue" || color == "powderblue")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor8(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair9(string color,string personality, string filename)
{
  if (color == "indigo" || color == "purple" || color == "darkmagenta" || color == "darkviolet" || color == "darkslateblue" || color == "blueviolet" || color == "darkorchid" || color == "fuchsia" || color == "magenta" || color == "slateblue" || color == "mediumslateblue" || color == "mediumorchid" || color == "mediumpurple" || color == "orchid" || color == "violet" || color == "plum" || color == "thistle" || color == "lavender")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor9(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair10(string color,string personality, string filename)
{
  if (color == "mistyrose" || color == "antiquewhite" || color == "linen" || color == "beige" || color == "whitesmoke" || color == "lavenderblush" || color == "oldlace" || color == "aliceblue" || color == "seashell" || color == "ghostwhite" || color == "honeydew" || color == "floralwhite" || color == "azure" || color == "mintcream"|| color == "snow" || color == "ivory" || color == "white")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor10(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

void colorfulcompair11(string color,string personality, string filename)
{
  if (color == "black" || color == "darkslategray" || color == "dimgray" || color == "slategray" || color == "gray" || color == "lightslategray" || color == "darkgray" || color == "silver" || color == "lightgray" || color == "gainsboro")
{
  if (personality == "average" || personality == "reserved" || personality == "selfcentered" || personality == "rolemodel"){
  personalitycolor11(color,filename,personality);// inputs the data into the file and puts it in the console too.
}}}

//void colorfulcompair12(string color,string personality, string filename)
//{
//if (personality != "average" || personality != "reserved" || personality != "selfcentered" || personality != "rolemodel"){
//cout << "you did not enter one of the listed personalites" << endl;
//}
//}

string colorfulpersonality()// function that lets you input the value for personality
  {
    string filename;
    string color;
    string personality;
  
    cout << "enter one of personality's listed that fits you the best ; 'average', 'reserved', 'selfcentered', 'rolemodel'." << endl;
    
    cin >> personality;

    int loop =2;
    //if (personality != "average" || personality != "reserved" || personality != "selfcentered" || personality != "rolemodel")
    //cout << "you did not enter one of the listed personalites" << endl;
    return personality;
  } 

int main()
{

string personality;

string colorgenmethod;// This tells the program wether or not it will be a basic color generation or a presonality based generation.

string filename;// This tells us what the filenanme will be

string color;// The color the person who uses the code decides

fstream reader;

string again;

int z =0;

cout << "Would you like to generate colors using a name of a premade svg color if so enter 'colorgenerator', or if you would like to generate colors using the personality test type 'personalitytest'." << endl;
getline(cin, colorgenmethod);
//cin >> colorgenmethod;
transform(colorgenmethod.begin(), colorgenmethod.end(), colorgenmethod.begin(), ::tolower);

cout << "Enter the file name." << endl;
getline(cin, filename);
//cin >> filename;

ofstream myfile(filename);

cout << "Enter a premade svg color from the list of 147 on this website https://www.december.com/html/spec/colorsvg.html ." << endl;

cin >> color;

transform(color.begin(), color.end(), color.begin(), ::tolower);


int loop = 1;
if (colorgenmethod == "colorgenerator"){
while (loop==1){
if (again== "yes")
{cout << "Enter a premade svg color from the list of 147 on this website https://www.december.com/html/spec/colorsvg.html ." << endl;

cin >> color;

transform(color.begin(), color.end(), color.begin(), ::tolower);//making color not casesensitive
}
colors color1 {color, colorgenmethod, filename, personality};
color1.color = color;

 
//newly included
if (color1.colorgenmethod == "colorgenerator")// basic colorgenerator
{
colors color1 {color, colorgenmethod, filename, personality};
int z;

colorcompair1(color1.color, color1.filename);// if it is "MediumVioletRed", "DeepPink", "PaleVioletRed", "HotPink", "LightPink", or "Pink" it will gerate the colors using this command.

colorcompair2(color1.color, color1.filename);// if it is "DarkRed", "Red", "Firebrick", "Crimson", "IndianRed", "LightCoral", "Salmon", "DarkSalmon", or "LightSalmon" it will gerate the colors using this command.

colorcompair3(color1.color, color1.filename);// if it is "DarkKhaki", "Gold", "Khaki", "PeachPuff", "Yellow", "PaleGoldenrod", "Moccasin", "PapayaWhip", "LightGoldenrodYellow", "LemonChiffon", or "LightYellow" it will gerate the colors using this command.

colorcompair4(color1.color, color1.filename);// if it is "Maroon", "Brown", "SaddleBrown", "Sienna", "Chocolate", "DarkGoldenrod", "Peru", "RosyBrown", "Goldenrod", "SandyBrown", "Tan", "Burlywood", "Wheat", "NavajoWhite", "Bisque", "BlanchedAlmond", or "Cornsilk" it will gerate the colors using this command.

colorcompair5(color1.color, color1.filename);// if it is "DarkGreen", "Green", "DarkOliveGreen", "ForestGreen", "SeaGreen", "Olive", "OliveDrab", "MediumSeaGreen", "LimeGreen", "Lime", "SpringGreen", "MediumSpringGreen", "DarkSeaGreen", "MediumAquamarine", "YellowGreen", "LawnGreen", "Chartreuse", "LightGreen", "GreenYellow", or "PaleGreen" it will gerate the colors using this command.

colorcompair6(color1.color, color1.filename);// if it is "OrangeRed", "Tomato", "DarkOrange", "Coral", or "Orange" it will gerate the colors using this command.

colorcompair7(color1.color, color1.filename);// if it is "Teal", "DarkCyan", "LightSeaGreen", "CadetBlue", "DarkTurquoise", "MediumTurquoise", "Turquoise", "Aqua", "Cyan", "Aquamarine", "PaleTurquoise", or "LightCyan" it will gerate the colors using this command.

colorcompair8(color1.color, color1.filename);// if it is "Navy", "DarkBlue", "MediumBlue", "Blue", "MidnightBlue", "RoyalBlue", "SteelBlue", "DodgerBlue", "DeepSkyBlue", "CornflowerBlue", "SkyBlue", "LightSkyBlue", "LightSteelBlue", "LightBlue", or "PowderBlue" it will gerate the colors using this command.

colorcompair9(color1.color, color1.filename);// if it is "Indigo", "Purple", "DarkMagenta", "DarkViolet", "DarkSlateBlue", "BlueViolet", "DarkOrchid", "Fuchsia", "Magenta", "SlateBlue", "MediumSlateBlue", "MediumOrchid", "MediumPurple", "Orchid", "Violet", "Plum", "Thistle", or "Lavender" it will gerate the colors using this command.

colorcompair10(color1.color, color1.filename);// if it is "MistyRose", "AntiqueWhite", "Linen", "Beige", "WhiteSmoke", "LavenderBlush", "OldLace", "AliceBlue", "Seashell", "GhostWhite", "Honeydew", "FloralWhite", "Azure", "MintCream", "Snow", "Ivory", or "White" it will gerate the colors using this command.

colorcompair11(color1.color, color1.filename);// if it is "DarkSlateGray", "DimGray", "SlateGray", "Gray", "LightSlateGray", "DarkGray", "Silver", "LightGray", or "Gainsboro" it will gerate the colors using this command.

//colorcompair12(color1.color, color1.filename);//if it is none of the colors it will gerate a message saying that none of the colors match the imputed color.
//if(z == 0)
//{
//cout <<"Not one of the SVG colors" <<endl;//if none of the colors are detected then it will return this statement.
//}

}
cout << "If you did not see a list of colors then you did not choose a color. Would you like to make choose a diffrent color, type 'yes' to choose a diffrent color or type 'no' to end the program." << endl;
  cin >> again;
transform(again.begin(), again.end(), again.begin(), ::tolower);
  if (again == "no")
  break;
  if(again == "yes")
  {
  }
  if (z == 1)
  {
  z=0;  
  }

}
}
colors color1 {color, colorgenmethod, filename, personality};

if (color1.colorgenmethod == "personalitytest")
{

  loop = 2;
  while (loop==2){

 
  personality = colorfulpersonality();//call back to the colorfulpersonality function.
  colors color1 {color, colorgenmethod, filename, personality};
  color1.color = color;

  colorfulcompair1(color1.color,color1.personality, color1.filename);// if it is "MediumVioletRed", "DeepPink", "PaleVioletRed", "HotPink", "LightPink", or "Pink" it will gerate the colors using this command.

  colorfulcompair2(color1.color,color1.personality, color1.filename);// if it is "DarkRed", "Red", "Firebrick", "Crimson", "IndianRed", "LightCoral", "Salmon", "DarkSalmon", or "LightSalmon" it will gerate the colors using this command.

  colorfulcompair3(color1.color,color1.personality, color1.filename);// if it is "DarkKhaki", "Gold", "Khaki", "PeachPuff", "Yellow", "PaleGoldenrod", "Moccasin", "PapayaWhip", "LightGoldenrodYellow", "LemonChiffon", or "LightYellow" it will gerate the colors using this command.

  colorfulcompair4(color1.color,color1.personality, color1.filename);// if it is "Maroon", "Brown", "SaddleBrown", "Sienna", "Chocolate", "DarkGoldenrod", "Peru", "RosyBrown", "Goldenrod", "SandyBrown", "Tan", "Burlywood", "Wheat", "NavajoWhite", "Bisque", "BlanchedAlmond", or "Cornsilk" it will gerate the colors using this command.

  colorfulcompair5(color1.color,color1.personality, color1.filename);// if it is "DarkGreen", "Green", "DarkOliveGreen", "ForestGreen", "SeaGreen", "Olive", "OliveDrab", "MediumSeaGreen", "LimeGreen", "Lime", "SpringGreen", "MediumSpringGreen", "DarkSeaGreen", "MediumAquamarine", "YellowGreen", "LawnGreen", "Chartreuse", "LightGreen", "GreenYellow", or "PaleGreen" it will gerate the colors using this command.

  colorfulcompair6(color1.color,color1.personality, color1.filename);// if it is "OrangeRed", "Tomato", "DarkOrange", "Coral", or "Orange" it will gerate the colors using this command.

  colorfulcompair7(color1.color,color1.personality, color1.filename);// if it is "Teal", "DarkCyan", "LightSeaGreen", "CadetBlue", "DarkTurquoise", "MediumTurquoise", "Turquoise", "Aqua", "Cyan", "Aquamarine", "PaleTurquoise", or "LightCyan" it will gerate the colors using this command.

  colorfulcompair8(color1.color,color1.personality, color1.filename);// if it is "Navy", "DarkBlue", "MediumBlue", "Blue", "MidnightBlue", "RoyalBlue", "SteelBlue", "DodgerBlue", "DeepSkyBlue", "CornflowerBlue", "SkyBlue", "LightSkyBlue", "LightSteelBlue", "LightBlue", or "PowderBlue" it will gerate the colors using this command.

  colorfulcompair9(color1.color,color1.personality, color1.filename);// if it is "Indigo", "Purple", "DarkMagenta", "DarkViolet", "DarkSlateBlue", "BlueViolet", "DarkOrchid", "Fuchsia", "Magenta", "SlateBlue", "MediumSlateBlue", "MediumOrchid", "MediumPurple", "Orchid", "Violet", "Plum", "Thistle", or "Lavender" it will gerate the colors using this command.

  colorfulcompair10(color1.color,color1.personality, color1.filename);// if it is "MistyRose", "AntiqueWhite", "Linen", "Beige", "WhiteSmoke", "LavenderBlush", "OldLace", "AliceBlue", "Seashell", "GhostWhite", "Honeydew", "FloralWhite", "Azure", "MintCream", "Snow", "Ivory", or "White" it will gerate the colors using this command.

  colorfulcompair11(color1.color,color1.personality, color1.filename);// if it is "DarkSlateGray", "DimGray", "SlateGray", "Gray", "LightSlateGray", "DarkGray", "Silver", "LightGray", or "Gainsboro" it will gerate the colors using this command.

  //colorfulcompair12(color,personality, filename);

  cout << "If you did not see a list of colors then you did not choose a personality. Would you like to make choose a diffrent personality, type 'yes' to choose a diffrent personality or type 'no' to end the program" << endl;
  cin >> again;
transform(again.begin(), again.end(), again.begin(), ::tolower);// making the answer not casesensitive
  if (again == "no")
  break;
  
}
  
}
cout << "Exiting color vision project"<<endl;//displays this when loops are finished
return 0; 

}