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
void patt7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void patt8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void patt9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void patt10(int n)
{
    for (int i = 0; i < n - 1; i++)
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
void patt11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void patt12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int space = 2 * (n - i);
        for (int j = 1; j <= space; j++)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void patt13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << ' ';
            count++;
        }
        cout << endl;
    }
}
void patt14(int n)
{
    for (int i = 1; i <=n; i++)
    {
        char c='A';
        for (int j = 1; j<=i; j++)
        {
            cout << c<<' ';
            c++;
        }
        cout << endl;
    }
}
void patt15(int n)
{
    for (int i = n; i >=1; i--)
    {
        char c='A';
        for (int j = i; j >=1; j--)
        {
            cout << c<<' ';
            c++;
        }
        cout << endl;
    }
}
void patt16(int n)
{
    char c='A';
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << c<<' ';
        }
        c++;
        cout << endl;
    }
}
void patt17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }
        char c='A';
        int bp=i;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << c;
            if(j<bp)c++;
            else c--;
        }
        cout<<endl;
    }
}
void patt18(int n)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 'E'- i; j<='E'; j++)
        {
            cout<<char(j)<<' ';
        }
        cout << endl;
    }
}
void patt19(int n)
{
    int spaces=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<'*';
        }
        for (int j=1;j<=spaces;j++){
            cout<<' ';
        }
        for(int j=0;j<n-i;j++){
            cout<<'*';
        }
        spaces+=2;
        cout<<endl;
    }
    spaces=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<spaces;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        spaces-=2;
        cout<<endl;
    }
}
void patt20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<spaces;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        spaces-=2;
        cout<<endl;
    }
    spaces=2;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            cout<<'*';
        }
        for(int j=0;j<spaces;j++){
            cout<<' ';
        }
        for(int j=0;j<n-i;j++){
            cout<<'*';
        }
        spaces+=2;
        cout<<endl;
    }
}
void patt21(int n){
    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
            for(int j=0;j<n;j++){
                cout<<'*';
            }
            cout<<endl;
        }
        else{
            cout<<'*';
            for(int j=0;j<n/2;j++){
                cout<<' ';
            }
            cout<<'*';
            cout<<endl;
        }
    }
}
void patt22(int n){
    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<(2*n-1);j++){
            int top=i,left=j,bott=(2*n-2)-i,right=(2*n-2)-j;
            cout<<(n-min(min(top,bott),min(left,right)))<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int c;
    cin >> c;
    patt22(c);
}