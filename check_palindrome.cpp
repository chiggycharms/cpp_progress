#include "bits\stdc++.h"
using namespace std;
int check_palindrome(int d){
    int og_num=d;
    int rev_num=0,last_num;
    while(og_num!=0){
        last_num=og_num%10;
        og_num=og_num/10;
        rev_num=(rev_num*10)+last_num;
    }
    if(d==rev_num) return 0;
    else return -1;
}
int main(){
    int x;
    cin>>x;
    cout<<check_palindrome(x);
}