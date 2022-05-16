#include<iostream>
using namespace std;
int main(){
    int ReverseArr[]={1,2,3,4,5};
    int n = sizeof(ReverseArr)/sizeof(int);
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(ReverseArr[s], ReverseArr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        cout<<ReverseArr[i];
    }
}
