#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
string repr(const string sIn)
{
    string s(sIn);
    for(int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    sort(s.begin(), s.end());
    return s;
}
int main()
{
    map<string, int> dict;
    vector<string> input;
    string s;
    while(cin >> s)
    {
        if(s[0] == '#')
            break;
        input.push_back(s);
        dict[repr(s)]++;
    }
    set<string> ans;
    for(vector<string>::iterator it = input.begin(); it != input.end(); it++)
    {
        if(dict.find(repr(*it)) != dict.end() && dict.find(repr(*it))->second == 1)
           ans.insert(*it);
    }
    for(set<string>::iterator it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
