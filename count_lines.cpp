#include <iostream>
#include <fstream>
using namespace std;

int count_lines(string file_path)
{
    ifstream a;
    a.open(file_path);
    string reading="";int count=0;
    while(getline(a,reading))count++;
    a.close();
    return count;
}
int main()
{
    string file="";
    cout<<count_lines(file);
} 