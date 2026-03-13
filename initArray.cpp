#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(void){
    int array[15] = {0};
    array[0] = 10;
    array[14] = 150;
    for(int i=0;i<15;i++)
        cout<<array[i]<<' ';
    cout<<array[0];
}