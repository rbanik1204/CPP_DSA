#include<iostream>
#include<utility>
using namespace std;
int main(void){
    pair<int,int> p1(23,25);
    pair<int,int> p2(p1);
    cout<<p2.first<<' '<<p2.second;
    p2 = make_pair(20,21);
    p1.swap(p2);
    cout<<p2.first<<' '<<p2.second;
}