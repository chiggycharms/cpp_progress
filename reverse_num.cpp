#include "bits\stdc++.h"
using namespace std;
int reverse_num(int d){
    int og_num=d;
    int rev_num=0,last_num;
    while(og_num!=0){
        last_num=og_num%10;
        og_num=og_num/10;
        rev_num=(rev_num*10)+last_num;
    }
    return rev_num;
}
int main(){
    int x;
    cin>>x;
    cout<<reverse_num(x);
}