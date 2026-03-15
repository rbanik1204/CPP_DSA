#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(void){
    vector <pair <int,int>> vPair;
    short unsigned int n;
    cout<<"Enter number of pairs:";
    cin>>n;
    vPair.resize(n);
    cout<<"Enter pair Values"<<endl;
    for(int i=0;i<n;i++){
        cin>>vPair[i].first>>vPair[i].second;
    }
    for(vector<pair<int,int>>::iterator it = vPair.end()-1;it!=vPair.begin();){
        (*(it-1)).first += (*it).first;
       (*(it-1)).second += (*it).second;
       it--;
    }
    cout<<vPair[0].first<<' '<<vPair[0].second;
    return 0;
}