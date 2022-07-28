#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    map<int, int> mp;
    for(int i=1; i<=9; i++)
    {
        mp[i] = 0;
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=1; j<=9; j++)
        {
            if(v[i] % j == 0){
                mp[j]++;
            }
        }
    }

    cout << endl;
    for(auto i : mp)
    {
       cout << i.first << ":" << i.second << " ";
    }
    
	return 0;
}
