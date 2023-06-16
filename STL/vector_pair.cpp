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
	map<int, int> m;
	vector<pair<int, int>> p;
	m[2] = 4;
	m[10] = 12;
	m[3] = 14;
	m[12] = 121;
	m[3] = 15;
	p.push_back(make_pair(2, 6));
	p.push_back(make_pair(2, 7));
	p.push_back(make_pair(5, 9));
	p.push_back(make_pair(1, 11));
	sort(p.begin(), p.end());
	for (auto x : p)
	{
		// if(x.first==2)
		// m.erase(m.find(x.first));
		cout << x.first << "	" << x.second << endl;
	}

	// cout << p[1].first;
	cout << endl;
}