#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back('a');
    vec.push_back(3);
    vec.push_back(4);
    // for(int val: vec){
    //     cout<<val<<endl;
        
    // }
    // cout<<"size of vec"<<vec.size()<<endl;
    // vec.pop_back();

    //  for(int val: vec){
    //     cout<<val<<endl;
        
    // }
    // cout<<"size of vec"<<vec.size()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(1)<<endl;
    cout<<vec.capacity();

    return 0;
}