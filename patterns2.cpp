#include"bits/stdc++.h"
using namespace std;
void pat1(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
void pat2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pat6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pat8(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<=n-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pat9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pat10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<'*';
        }
        cout<<endl;
    }
    
}
void pat11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0)start =1;
        else start =0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    // pat1(x);
    // pat2(x);
    // pat3(x);
    // pat4(x);
    // pat5(x);
    // pat6(x);
    // pat7(x);
    // pat8(x);
    // pat9(x);
    // pat10(x);
    pat11(x);
}