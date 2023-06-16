#include<iostream>
#include<fstream>
using namespace std;
int main()
{
system("clear");
ofstream fout;
fout.open("sample.txt");
fout<<"hello everyone!\n";
fout.close();

ifstream fin;
fin.open("sample.txt");
string s;
while(fin)
{
    getline(fin,s);
    cout<<s;
}
fin.close();
cout<<endl;
}