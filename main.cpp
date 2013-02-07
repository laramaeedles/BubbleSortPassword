#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

void bubble_sort(string* array, int n)
{
    int i,j;
    string temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if (_strcmpi(array[j].c_str(), array[j+1].c_str()) > 0)
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    int c = 0, n = 100;
    string passwords[100];
    string line;
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        passwords[c]=line;
        c++;
    }

    bubble_sort(passwords,n);

    for(c = 0; c<n; c++)
    {
        cout<<passwords[c]<<endl;
    }
    myfile.close();
}
