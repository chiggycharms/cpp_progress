#include "bits\stdc++.h"
using namespace std;
int check_armstrong(int d){
    int og_num=d,res=0,count=0,last;
    while(og_num!=0){
        og_num=og_num/10;
        count=count+1;
    }
    og_num=d;
    while(og_num!=0){
        last=og_num%10;
        og_num=og_num/10;
        res=res+pow(last,count);
    }
    if(res==d) return 0;
    else return -1;
}
int main(){
    int x;
    cin>>x;
    cout<<check_armstrong(x);
}