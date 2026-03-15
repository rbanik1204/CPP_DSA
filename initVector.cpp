#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(void){
    vector <int> v = {10,9,8,7,6,5,4,3,2,1};
    // for(vector <int>::iterator it = v.begin();it!=v.end();){
    //     if(!(*it%2))
    //         it = v.erase(it);
    //     else it++;
    // }
    // for(int &val:v)
    //     cout<<val<<' ';
    // vector <int> v1;
    // v1.assign(v.begin()+3,v.end()-3);
    // cout<<"Second Vector:";
    // for(auto &val: v1) cout<<val<<' ';
    // cout<<endl;
    // cout<<"Swapping using swap member function"<<endl;
    // v.swap(v1);
    // cout<<"First Vector:";
    // for(auto &val: v) cout<<val<<' ';
    sort(v.begin(),v.end(),greater <int>());
    for(auto &val: v) cout<<val<<' ';
}