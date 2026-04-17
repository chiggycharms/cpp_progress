#include "bits/stdc++.h"
using namespace std;
struct Stack{
    vector<int> arr;
    void push(int x){
        arr.emplace_back(x);
    }
    void pop(){
        arr.pop_back();
    }
    int top(){
        return arr.back();
    }
    bool empty(){
        return arr.empty();
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);                                
    st.push(40);
    st.push(50);
    cout<<"top: "<<st.top()<<endl;
    st.pop();
    cout<<"top: "<<st.top()<<endl;
    st.pop();
    cout<<"top: "<<st.top()<<endl;
    st.pop();
    cout<<"top: "<<st.top()<<endl;
    st.pop();
    cout<<"top: "<<st.top()<<endl;
    st.pop();
    cout<<"empty: "<<st.empty()<<endl;
    st.push(100);
    cout<<"top: "<<st.top()<<endl;
    cout<<"empty: "<<st.empty()<<endl;
}