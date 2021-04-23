//Author: Nathan Gerbino
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void personalitycolor1(string color,string filename,string personality)
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
void personalitycolor2(string color,string filename,string personality)
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
void personalitycolor3(string color,string filename,string personality)
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
void personalitycolor4(string color,string filename,string personality)
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
void personalitycolor5(string color,string filename,string personality)
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
void personalitycolor6(string color,string filename,string personality)
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
void personalitycolor7(string color,string filename,string personality)
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
void personalitycolor8(string color,string filename,string personality)
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
void personalitycolor9(string color,string filename,string personality)
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
void personalitycolor10(string color,string filename,string personality)
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
void personalitycolor11(string color,string filename,string personality)
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

void colornum1(string color,string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum2(string color, string filename)
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", Gold, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: Gold), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum3(string color, string filename)
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum4(string color,string filename)
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum5(string color, string filename)
{
fstream myfile(filename);
cout << "Your list of color combinations is ; "<<color<<", DarkRed, Gold, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: Gold), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum6(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum7(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum8(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 : Black)";
}

void colornum9(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Gold, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Gold), (color4 : White), (color5 : Black)";
}

void colornum10(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, Gold, and Black." << endl;
myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : Gold), (color5 : Black)";
}

void colornum11(string color, string filename)
{
fstream myfile(filename);
cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Gold." << endl;
  myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Gold)";
}

string colorfulpersonality()// function that lets you input the value for personality
  {
    string filename;
    string color;
    string personality;
  
    cout << "enter one of personality's listed that fits you the best ; 'average', 'reserved', 'selfcentered', 'rolemodel'." << endl;
    
    cin >> personality;

    int loop =2;
    return personality;
  } 


int main()
{

string personality;

string colorgenmethod;// This tells the program wether or not it will be a basic color generation or a presonality based generation.

string filename;

string color;

fstream reader;

cout << "Would you like to generate colors using a name of a premade svg color if so enter 'colorgenerator', or if you would like to generate colors using the personality test type 'personalitytest'." << endl;

cin >> colorgenmethod;

cout << "Enter the file name." << endl;

cin >> filename;

ofstream myfile(filename);

cout << "Enter a premade svg color." << endl;

cin >> color;

int loop = 1;

while (loop==1){

if (colorgenmethod == "colorgenerator")
{

if (color == "MediumVioletRed" || color == "DeepPink" || color == "PaleVioletRed" || color == "HotPink" || color == "LightPink" || color == "Pink")
{
  colornum1(color,filename);// inputs the data into the file and puts it in the console too.  
  break;
}

else if (color == "DarkRed" ||color == "Red" ||color == "Firebrick" ||color == "Crimson" ||color == "IndianRed" ||color == "LightCoral" ||color == "Salmon" || color == "DarkSalmon" || color == "LightSalmon")
{
colornum2(color, filename);// inputs the data into the file and puts it in the console too.
break;
}

else if (color == "DarkKhaki" || color == "Gold" || color == "Khaki" || color == "PeachPuff" || color == "Yellow" || color == "PaleGoldenrod" || color == "Moccasin" || color == "PapayaWhip" || color == "LightGoldenrodYellow" || color == "LemonChiffon" || color == "LightYellow")
{
colornum3(color, filename);// inputs the data into the file and puts it in the console too.
break;
}

else if (color == "Maroon" || color == "Brown" || color == "SaddleBrown" || color == "Sienna" || color == "Chocolate" || color == "DarkGoldenrod" || color == "Peru" || color == "RosyBrown" || color == "Goldenrod" || color == "SandyBrown" || color == "Tan" || color == "Burlywood" || color == "Wheat" || color == "NavajoWhite" || color == "Bisque" || color == "BlanchedAlmond" || color == "Cornsilk")
{
colornum4(color, filename);// inputs the data into the file and puts it in the console too.

break;
}

else if (color == "DarkGreen" || color == "Green" || color == "DarkOliveGreen" || color == "ForestGreen" || color == "SeaGreen" || color == "Olive" || color == "OliveDrab" || color == "MediumSeaGreen" || color == "LimeGreen" || color == "Lime" || color == "SpringGreen" || color == "MediumSpringGreen" || color == "DarkSeaGreen" || color == "MediumAquamarine" || color == "YellowGreen" || color == "LawnGreen" || color == "Chartreuse" || color == "LightGreen" || color == "GreenYellow" || color == "PaleGreen")
{
colornum5(color, filename);// inputs the data into the file and puts it in the console too.

break;
}

else if (color == "OrangeRed" || color == "Tomato" || color == "DarkOrange" || color == "Coral" || color == "Orange")
{
colornum6(color, filename);// inputs the data into the file and puts it in the console too.
break;
}

else if (color == "Teal" || color == "DarkCyan" || color == "LightSeaGreen" || color == "CadetBlue" || color == "DarkTurquoise" || color == "MediumTurquoise" || color == "Turquoise" || color == "Aqua" || color == "Cyan" || color == "Aquamarine" || color == "PaleTurquoise" ||color == "LightCyan")
{
colornum7(color, filename);//inputs the data into the file and puts it in the console too.
  break;
}

else if (color == "Navy" || color == "DarkBlue" || color == "MediumBlue" || color == "Blue" || color == "MidnightBlue" || color == "RoyalBlue" || color == "SteelBlue" || color == "DodgerBlue" || color == "DeepSkyBlue" || color == "CornflowerBlue" || color == "SkyBlue" || color == "LightSkyBlue" || color == "LightSteelBlue" || color == "LightBlue" || color == "PowderBlue")
{
  colornum8(color, filename);//inputs the data into the file and puts it in the console too.
  break;
}

else if (color == "Indigo" || color == "Purple" || color == "DarkMagenta" || color == "DarkViolet" || color == "DarkSlateBlue" || color == "BlueViolet" || color == "DarkOrchid" || color == "Fuchsia" || color == "Magenta" || color == "SlateBlue" || color == "MediumSlateBlue" || color == "MediumOrchid" || color == "MediumPurple" || color == "Orchid" || color == "Violet" || color == "Plum" || color == "Thistle" || color == "Lavender")
{
  colornum9(color, filename);//inputs the data into the file and puts it in the console too.
  break;
}

else if (color == "MistyRose" || color == "AntiqueWhite" || color == "Linen" || color == "Beige" || color == "WhiteSmoke" || color == "LavenderBlush" || color == "OldLace" || color == "AliceBlue" || color == "Seashell" || color == "GhostWhite" || color == "Honeydew" || color == "FloralWhite" || color == "Azure" || color == "MintCream"|| color == "Snow" || color == "Ivory" || color == "White")
{
  colornum10(color, filename);//inputs the data into the file and puts it in the console too.
  break;
}

else if (color == "Black" || color == "DarkSlateGray" || color == "DimGray" || color == "SlateGray" || color == "Gray" || color == "LightSlateGray" || color == "DarkGray" || color == "Silver" || color == "LightGray" || color == "Gainsboro")
{
colornum11(color, filename);//inputs the data into the file and puts it in the console too.
  break;
}
else {
cout <<"Not one of the SVG colors" <<endl;//if none of the colors are detected then it will return this statement.
return 0;
}
}
if (colorgenmethod == "personalitytest")
{
  loop = 2;
 while (loop==2){

 
  personality = colorfulpersonality();//call back to the colorfulpersonality function.
    
    if (color == "MediumVioletRed" || color == "DeepPink" || color == "PaleVioletRed" || color == "HotPink" || color == "LightPink" || color == "Pink")
{
  
    if (personality == "average"){
     personalitycolor1(color,filename,personality);// inputs the data into the file and puts it in the console too.
  
    break;
    }

    else if (personality == "reserved"){
    personalitycolor1(color,filename,personality);// inputs the data into the file and puts it in the console too.
  
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor1(color,filename,personality);// inputs the data into the file and puts it in the console too.
  
    break;
    }

    if (personality == "rolemodel"){
    personalitycolor1(color,filename,personality);// inputs the data into the file and puts it in the console too.
  
    break;
    
    }
}
    else if (color == "DarkRed" ||color == "Red" ||color == "Firebrick" ||color == "Crimson" ||color == "IndianRed" ||color == "LightCoral" ||color == "Salmon" || color == "DarkSalmon" || color == "LightSalmon")
{
    if (personality == "average"){
    personalitycolor2(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor2(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor2(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor2(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}
    
    else if (color == "DarkKhaki" || color == "Gold" || color == "Khaki" || color == "PeachPuff" || color == "Yellow" || color == "PaleGoldenrod" || color == "Moccasin" || color == "PapayaWhip" || color == "LightGoldenrodYellow" || color == "LemonChiffon" || color == "LightYellow")
{
    if (personality == "average"){
    personalitycolor3(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor3(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor3(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor3(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

}  
    
    else if (color == "Maroon" || color == "Brown" || color == "SaddleBrown" || color == "Sienna" || color == "Chocolate" || color == "DarkGoldenrod" || color == "Peru" || color == "RosyBrown" || color == "Goldenrod" || color == "SandyBrown" || color == "Tan" || color == "Burlywood" || color == "Wheat" || color == "NavajoWhite" || color == "Bisque" || color == "BlanchedAlmond" || color == "Cornsilk")
{
    if (personality == "average"){
    personalitycolor4(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor4(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor4(color,filename,personality);// inputs the data into the file and puts it in the console too.
      break;
    }

    else if (personality == "rolemodel"){
    personalitycolor4(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}
    
    else if (color == "DarkGreen" || color == "Green" || color == "DarkOliveGreen" || color == "ForestGreen" || color == "SeaGreen" || color == "Olive" || color == "OliveDrab" || color == "MediumSeaGreen" || color == "LimeGreen" || color == "Lime" || color == "SpringGreen" || color == "MediumSpringGreen" || color == "DarkSeaGreen" || color == "MediumAquamarine" || color == "YellowGreen" || color == "LawnGreen" || color == "Chartreuse" || color == "LightGreen" || color == "GreenYellow" || color == "PaleGreen")
{
    if (personality == "average"){
    personalitycolor5(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor5(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor5(color,filename,personality);// inputs the data into the file and puts it in the console too.
      break;
    }

    else if (personality == "rolemodel"){
    personalitycolor5(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}    
    else if (color == "OrangeRed" || color == "Tomato" || color == "DarkOrange" || color == "Coral" || color == "Orange")
{
     if (personality == "average"){
    personalitycolor6(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor6(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor6(color,filename,personality);// inputs the data into the file and puts it in the console too.
      break;
    }

    else if (personality == "rolemodel"){
    personalitycolor6(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}        
    else if (color == "Teal" || color == "DarkCyan" || color == "LightSeaGreen" || color == "CadetBlue" || color == "DarkTurquoise" || color == "MediumTurquoise" || color == "Turquoise" || color == "Aqua" || color == "Cyan" || color == "Aquamarine" || color == "PaleTurquoise" ||color == "LightCyan")
{
     if (personality == "average"){
    personalitycolor7(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor7(color,filename,personality);// inputs the data into the file and puts it in the console too.
       break;
    }

    else if (personality == "selfcentered"){
    personalitycolor7(color,filename,personality);// inputs the data into the file and puts it in the console too.
      break;
    }

    else if (personality == "rolemodel"){
    personalitycolor7(color,filename,personality);// inputs the data into the file and puts it in the console too.
      break;
    }
}        
    else if (color == "Navy" || color == "DarkBlue" || color == "MediumBlue" || color == "Blue" || color == "MidnightBlue" || color == "RoyalBlue" || color == "SteelBlue" || color == "DodgerBlue" || color == "DeepSkyBlue" || color == "CornflowerBlue" || color == "SkyBlue" || color == "LightSkyBlue" || color == "LightSteelBlue" || color == "LightBlue" || color == "PowderBlue")
{
     if (personality == "average"){
    personalitycolor8(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor8(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor8(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor8(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}        
    else if (color == "Indigo" || color == "Purple" || color == "DarkMagenta" || color == "DarkViolet" || color == "DarkSlateBlue" || color == "BlueViolet" || color == "DarkOrchid" || color == "Fuchsia" || color == "Magenta" || color == "SlateBlue" || color == "MediumSlateBlue" || color == "MediumOrchid" || color == "MediumPurple" || color == "Orchid" || color == "Violet" || color == "Plum" || color == "Thistle" || color == "Lavender")
{
    if (personality == "average"){
    personalitycolor9(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor9(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor9(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor9(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}        
    else if (color == "MistyRose" || color == "AntiqueWhite" || color == "Linen" || color == "Beige" || color == "WhiteSmoke" || color == "LavenderBlush" || color == "OldLace" || color == "AliceBlue" || color == "Seashell" || color == "GhostWhite" || color == "Honeydew" || color == "FloralWhite" || color == "Azure" || color == "MintCream"|| color == "Snow" || color == "Ivory" || color == "White")
{
     if (personality == "average"){
    personalitycolor10(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor10(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor10(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor10(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
            
    else if (color == "Black" || color == "DarkSlateGray" || color == "DimGray" || color == "SlateGray" || color == "Gray" || color == "LightSlateGray" || color == "DarkGray" || color == "Silver" || color == "LightGray" || color == "Gainsboro")
{
    if (personality == "average"){
    personalitycolor11(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "reserved"){
    personalitycolor11(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "selfcentered"){
    personalitycolor11(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }

    else if (personality == "rolemodel"){
    personalitycolor11(color,filename,personality);// inputs the data into the file and puts it in the console too.
    break;
    }
}
break;
} 
  else {
   cout << "you did not enter one of the listed personalites" << endl;
    } 
}
  break;
}
cout << "Exiting color vision project"<<endl;//displays this when loops are finished
}

return 0;
}