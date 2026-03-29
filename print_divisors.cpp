#include "bits\stdc++.h"
using namespace std;
void printAllDivisors(int num){
/*     for(int i=1;i<=num;i++){
        if(num%i==0)cout<<i<<' ';
    } */
/*    for(int i=1;i<=sqrt(num);i++){
    if(num%i==0){
        cout<<i<<' ';
        if(num/i!=i)cout<<(num/i)<<' ';
    }
   } */
   vector<int>factors; 
   for(int i=1;i<=sqrt(num);i++){
    if(num%i==0){
        factors.emplace_back(i);
        if(num/i!=i)factors.emplace_back(num/i);
    }
   }
   sort(factors.begin(),factors.end());
   for(auto x:factors){
    cout<<x<<' ';
   }
}
int main(){
    int x;
    cin>>x;
    printAllDivisors(x);
}