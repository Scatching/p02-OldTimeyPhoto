//Author: Sarah Catching

#include<string>
#include"bitmap.h"
#include<vector>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
   int main()
   {
    string file;

    cout<<"Give me the name of the file you wish to open."<<endl;
    cin>>file;
    cout<<"You have chosen "<<file<<" "<<endl;
    Bitmap image;
    vector<vector<Pixel> >bmp;
    Pixel rgb;
    image.open(file);
    bmp=image.toPixelMatrix();
    cout<<" "<<file<<" has been loaded. It is "<<bmp.size()<<" pixels high and "<<bmp[0].size()<<" wide."<<endl;
    
    cout<<"Let's make this image look old."<<endl;
    int x,y,grey;
        for(x=0; x<bmp.size();x++)
        {
            
            for(y=0; y<bmp[0].size(); y++)
            {
        rgb=bmp[x][y];
        grey=(rgb.red+rgb.blue+rgb.green) /3;
        rgb.red=grey;
        rgb.blue=grey;
        rgb.green=grey;
        bmp[x][y]=rgb;
        }}
        
    cout<<"Wow! This belongs in a museum!"<<endl;

//Output to ask user the file name of an image//
//Find file user inputted and store it in a matrix//
//Assign each pixel as a space in the matrix//
//Find grey equivalent for average value of red green and blue pixels//
//Assign the grey to each color//
//Save the new image as a new file//
//Name new file oldtimey.bmp//
//Use Camel Case//
//If image cannot be used output an error message requiring a 24 bit depth windows BMP file//
//With invalid file should also output prompt for new image//
//Program shouldn't crash//




    return 0;
    }
