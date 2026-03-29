#include "bits\stdc++.h"
using namespace std;
vector<int> digit_extractor(int d){
    int og_num=d;
    vector<int>arr;
    while(og_num!=0){
        int res=og_num%10;
        og_num=og_num/10;
        arr.emplace_back(res);
    }
    return arr;
}
int main(){
    int x;
    cin>>x;
    for(auto x:digit_extractor(x)){
        cout<<x<<' ';
    }
}