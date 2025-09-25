#include <iostream>
#include <stack>
using namespace std;

int main() {
    string a;
    cin>>a;
    stack <char> st;
    for (char i:a){
        if (!st.empty()&&i==st.top())
        {
            st.pop();
        }
        else{
            st.push(i);
        }
     
    }
    if (st.size()==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}