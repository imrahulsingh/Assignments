#include <iostream>
#include <fstream>
#include<math.h>
#include <string>

using namespace std;
int main()
{
    ifstream fin1, fin2;
    ofstream fout;
    int n1, n2;

    fin1.open("intext1.txt");
    fin2.open("intext2.txt");
    fout.open("outtext.txt");

    fin1 >> n1;
    fin2 >> n2;
 while (!fin1.eof() && !fin2.eof())
    {
        if (n1 < n2)
        {
            fout << n1 << endl;
            fin1 >> n1;
            //fin1.ignore(4, '\n');
        }
        else
        {
            fout << n2 << endl;
            fin2 >> n2;
            //fin2.ignore(4, '\n');
        }
    }
    	cout>>"Congratulation!!  Data Sorted Successfully";
    fin1.close();
    fin2.close();
    fout.close();
}
