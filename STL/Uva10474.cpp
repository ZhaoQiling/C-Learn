#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int nMarble;
    int nQuery;
    int nCase = 1;
    while(cin >> nMarble >> nQuery)
    {
        if(0 == nMarble)
        {
            break;
        }
        vector<int> marble;
        for(int i = 0; i < nMarble; i++)
        {
            int val;
            cin >> val;
            marble.push_back(val);
        }
        sort(marble.begin(), marble.end());
        cout << "CASE# " << nCase << ":" << endl;
        nCase++;
        for(int i = 0; i < nQuery; i++)
        {
            int query;
            cin >> query;
            int local = lower_bound(marble.begin(), marble.end(), query) - marble.begin();
            //cout << "loc: " << local << endl;
            if(marble[local] == query)
            {
                cout << query << " found at " << local + 1 << endl;
            }
            else{
                cout << query << " not found" << endl;
            }
        }
    }
    return 0;
}
