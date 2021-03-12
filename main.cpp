//Author: Nathan Gerbino
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

string filename;

string color;

fstream reader;

int loop = 1;

while (loop==1){

cout << "Enter a premade svg color." << endl;

cin >> color;

cout << "Enter the file name." << endl;

cin >> filename;

fstream myfile(filename);

if (color == "MediumVioletRed" || color == "DeepPink" || color == "PaleVioletRed" || color == "HotPink" || color == "LightPink" || color == "Pink")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
  break;
}

else if (color == "DarkRed" ||color == "Red" ||color == "Firebrick" ||color == "Crimson" ||color == "IndianRed" ||color == "LightCoral" ||color == "Salmon" || color == "DarkSalmon" || color == "LightSalmon")
{
cout << "Your list of color combinations is ; "<<color<<", Gold, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: Gold), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
break;
}

else if (color == "DarkKhaki" || color == "Gold" || color == "Khaki" || color == "PeachPuff" || color == "Yellow" || color == "PaleGoldenrod" || color == "Moccasin" || color == "PapayaWhip" || color == "LightGoldenrodYellow" || color == "LemonChiffon" || color == "LightYellow")
{
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
break;
}

else if (color == "Maroon" || color == "Brown" || color == "SaddleBrown" || color == "Sienna" || color == "Chocolate" || color == "DarkGoldenrod" || color == "Peru" || color == "RosyBrown" || color == "Goldenrod" || color == "SandyBrown" || color == "Tan" || color == "Burlywood" || color == "Wheat" || color == "NavajoWhite" || color == "Bisque" || color == "BlanchedAlmond" || color == "Cornsilk")
{
cout << "Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
break;
}

else if (color == "DarkGreen" || color == "Green" || color == "DarkOliveGreen" || color == "ForestGreen" || color == "SeaGreen" || color == "Olive" || color == "OliveDrab" || color == "MediumSeaGreen" || color == "LimeGreen" || color == "Lime" || color == "SpringGreen" || color == "MediumSpringGreen" || color == "DarkSeaGreen" || color == "MediumAquamarine" || color == "YellowGreen" || color == "LawnGreen" || color == "Chartreuse" || color == "LightGreen" || color == "GreenYellow" || color == "PaleGreen")
{
cout << "Your list of color combinations is ; "<<color<<", DarkRed, Gold, Indigo, White, and Black." << endl;
myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: Gold), (color3: Indigo), (color4 : White), (color5 :Black)";
break;
}

else if (color == "OrangeRed" || color == "Tomato" || color == "DarkOrange" || color == "Coral" || color == "Orange")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
  break;
}

else if (color == "Teal" || color == "DarkCyan" || color == "LightSeaGreen" || color == "CadetBlue" || color == "DarkTurquoise" || color == "MediumTurquoise" || color == "Turquoise" || color == "Aqua" || color == "Cyan" || color == "Aquamarine" || color == "PaleTurquoise" ||color == "LightCyan")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
  break;
}

else if (color == "Navy" || color == "DarkBlue" || color == "MediumBlue" || color == "Blue" || color == "MidnightBlue" || color == "RoyalBlue" || color == "SteelBlue" || color == "DodgerBlue" || color == "DeepSkyBlue" || color == "CornflowerBlue" || color == "SkyBlue" || color == "LightSkyBlue" || color == "LightSteelBlue" || color == "LightBlue" || color == "PowderBlue")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Black)";
  break;
}

else if (color == "Indigo" || color == "Purple" || color == "DarkMagenta" || color == "DarkViolet" || color == "DarkSlateBlue" || color == "BlueViolet" || color == "DarkOrchid" || color == "Fuchsia" || color == "Magenta" || color == "SlateBlue" || color == "MediumSlateBlue" || color == "MediumOrchid" || color == "MediumPurple" || color == "Orchid" || color == "Violet" || color == "Plum" || color == "Thistle" || color == "Lavender")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Gold, White, and Black." << endl;
  myfile << "color { (color: "<< color <<"), (color1: DarkRed), (color2: DarkGreen), (color3: Gold), (color4 : White), (color5 :Black)";
  break;
}

else if (color == "MistyRose" || color == "AntiqueWhite" || color == "Linen" || color == "Beige" || color == "WhiteSmoke" || color == "LavenderBlush" || color == "OldLace" || color == "AliceBlue" || color == "Seashell" || color == "GhostWhite" || color == "Honeydew" || color == "FloralWhite" || color == "Azure" || color == "MintCream"|| color == "Snow" || color == "Ivory" || color == "White")
{
  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, Gold, and Black." << endl;
  myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : Gold), (color5 :Black)";
  break;
}

else if (color == "Black" || color == "DarkSlateGray" || color == "DimGray" || color == "SlateGray" || color == "Gray" || color == "LightSlateGray" || color == "DarkGray" || color == "Silver" || color == "LightGray" || color == "Gainsboro")
{

  cout <<"Your list of color combinations is ; "<<color<<", DarkRed, DarkGreen, Indigo, White, and Gold." << endl;
  myfile << "color { (color: "<< color <<"),(color1: DarkRed), (color2: DarkGreen), (color3: Indigo), (color4 : White), (color5 :Gold)";
  break;
}
else {
cout <<"Not one of the SVG colors" <<
endl;
return 0;
}


cout << "Exiting color vision project"<<endl;


}
return 0;
}
