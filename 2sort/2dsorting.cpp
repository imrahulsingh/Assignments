#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
#include<string.h>
#include <cstring>
#include <cstdlib>
using namespace std;

//using commandline argument here...

int main(int argc, char *argv[])
{   
   //taking the size of row and column 
    int row = 5;
    int col = 2;
    
    float myArray[row][col];

    //file open
    ifstream inputfile(argv[1]);
    
    if (!inputfile.is_open()) 
    cout<<"File not open" ;

    //loop for i/p o/p
    int r,c;
    for ( r = 0; r < row; r++) //Outer loop for rows
    {
        for ( c = 0; c < col; c++) //inner loop for columns
        {
          inputfile >> myArray[r][c];  //Take input from file and put into myArray
        }
    }
    float arr[row][col+1];
    for(int i=0;i<row;i++)
    {
        //using formula for distance
            float distance=(sqrt(pow(myArray[i][0] - 0, 2) + pow(myArray[i][1] - 0, 2) * 1.0));
            arr[i][0]=distance;
            arr[i][1]=myArray[i][0];
            arr[i][2]=myArray[i][1];
            

    }
    //for sorting 

    int i,j;
    float temp,temp1,temp2;
    for(int i=0;i<row-1;i++)
    {
        for(int j=i+1;j<row;j++)
        {
            if(arr[j][0]<arr[i][0])
            {
                temp=arr[i][0];
                 temp1=arr[i][1];
                temp2=arr[i][2];

                arr[i][0]=arr[j][0];
                arr[i][1]=arr[j][1];
                arr[i][2]=arr[j][2];

                arr[j][0]=temp;
                arr[j][1]=temp1;
                arr[j][2]=temp2;
            }


        }
    }
    
    
    

       ofstream fout(argv[2]);
  if(fout.is_open())
	{
        for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col+1; c++)
        {
            fout << arr[r][c]<<"\n";
        }
            
    }
    }
    else 
	{
		cout << "OOPs..file not opened" << endl;
	}
 
    
}
