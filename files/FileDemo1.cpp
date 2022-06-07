#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    /*
        3 opertions:
        1. open
        2. read / write
        3. close
    */

    // object of ofstream class
    ofstream fout;
    // open file
    // append mode...
    fout.open("C:\\Users\\Samir\\Desktop\\sample.txt", ios::app);
    // write data
    // fout<<"Hi";
    fout.close();

    ifstream fin;
    fin.open("C:\\Users\\Samir\\Desktop\\sample.txt");
    string s = "";
    int count = 0;
    while (1)
    {
        count++;
        char c;
        fin >> c;
        if (fin.eof())
        {
            break;
        }
        cout << c;
    }

    /*
        if (fin.is_open())
        {

            while (getline(fin, s))
            {
                count++;
                cout << s << endl;
            }
        }
        else{
            cout<<"File not found";
        }
    */
    fin.close();
    cout << "Total lines: " << count;
    /// read data line by line....
}