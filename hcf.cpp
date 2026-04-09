#include "bits/stdc++.h"
using namespace std;
int hcf(int a,int b){
    int gcd;
/*     for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf; */
/*     while(a>0&&b>0){
        if(a>b)a=a%b;
        else b=b%a;
    }
    if(a==0)return b;
    else return a; */
    if(a%b==0)return b;
    return hcf(b,a%b);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<hcf(x,y)<<endl;
}