#include <iostream>
using namespace std;
void patt1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void patt2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void patt3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void patt4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void patt5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void patt6(int n)
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void patt7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        cout<<endl;
    }
}
void patt8(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){
            cout<<'*';
        }
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        cout<<endl;
    }
}
void patt9(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
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
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        cout<<endl;
    }
}
void patt10(int n){
       for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    } 
        for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
int main()
{
    int c;
    cin>>c;
    patt10(c);
}