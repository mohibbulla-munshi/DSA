#include<iostream>
using namespace std;
int main(){
    int pairs[] = {1,2,3,4,5,6,7,8};
    int n=sizeof(pairs)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(pairs[i]<pairs[j])
                cout<<pairs[i]<<pairs[j]<<endl;
        }
        cout<<endl;
    }
}


