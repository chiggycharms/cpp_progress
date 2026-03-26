#include <iostream>
#include <map>
#include <string>
using namespace std;
/* int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> intMap;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        intMap[arr[i]]++;
    }
    for( auto i:intMap){
        cout<<i.first<<" "<<i.second<<endl;
    }
} */
int main()
{
    string s;
    cin >> s;
    map<char, int> charMap;
    for (int i = 0; i < s.size(); i++)
    {
        charMap[s[i]]++;
    }
    map<char, int>::iterator itr;
    for (itr=charMap.begin();itr!=charMap.end();itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
}