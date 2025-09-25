#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector <int>vec;
    for (int i=0;i<a;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    int n;
    int pos;
    cin>>n>>pos;
    vec.insert(vec.begin()+pos,n);
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}