#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque <int> nums;
    char op;
    while (cin>>op){
        if (op=='!') break;
        else if (op=='+'){
            int x;
            cin>>x;
            nums.push_front(x);
        }
        else if (op=='-'){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        else if (op=='*'){
            if(nums.empty()){
                cout<<"error"<<endl;
            }
            else if (nums.size() == 1) {
                cout << nums.front()*2 << '\n'; 
                nums.pop_front();          
            }
            else{
            int sum=nums.front()+nums.back();
            cout<<sum<<endl;
            nums.pop_front();
            nums.pop_back();
            }
        }
    }
    return 0;
}