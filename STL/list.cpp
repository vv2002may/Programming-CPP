#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    // list is doubly linked list
    system("clear");
    list<int> l;
    l.push_back(2);
    l.push_back(5);
    l.push_back(6);
    l.push_back(3);
    l.push_back(1);
    l.push_front(1);
    l.sort();
    l.reverse();
    cout<<l.front()<<endl;
    l.pop_front();
    // cout<<l.end()<<endl;
    l.pop_back();
    // l.begin() 
    // l.end()
    for(auto it : l)
    cout<<it<<",";
    cout<<endl;
}