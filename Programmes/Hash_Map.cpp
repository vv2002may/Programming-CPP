// two type of map
// 1.unordered_map
// o(1)
// 2.map(ordered: balanced BST or red black tree)
// o(logn)

#include<iostream>
#include<unordered_map>
#include<map>
#include <vector>
using namespace std;
int main()
{
    system("clear");
    // unordered_map<key,value> name;
    // unordered_map<string,int> m;
    //one way
    // m["Mango"]=100;
    // //other way
    // m.insert(make_pair("Apple",200));
    // //search
    // if(m.count("Mango")==1)
    // cout<<"Mango : "<<m["Mango"]<<endl;
    // m["Gauva"]=m["Mango"] + 90;
    // // for deletion
    // m.erase("Apple");
    // //itertator to search
    // // f->first : for key
    // // f->second : for value
    // auto f = m.find("Apple");
    // if(f!=m.end())
    // cout<<"Apple : "<<f->second<<endl;
    // else
    // cout<<"Apple not found\n";
    // map<int,int> v;
    // v.find(key) --> use to find if key is present in map or not
    // v.end() --> gives end location of map
    // v[1]=2;
    // cout<<v[1];
    map<int,vector<int> > m;
    m[1].push_back(2);
    // m[1].push_back(4);
    // m[1].push_back(6);
    // m[2].push_back(6);
    // for(int i=0;i<m[2].size();i++)
    // cout<<m[2][i];
    // cout<<m[2][0];
 
}