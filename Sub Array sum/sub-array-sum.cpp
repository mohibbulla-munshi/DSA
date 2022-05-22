#include<iostream>
using namespace std;
int main(){
    int subArray[]={1,2,3,4,5};
    int sum = 0;
    int n=sizeof(subArray)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                sum +=subArray[k];
            }
        }
    }
    cout<<"Sum of Arrays: "<<sum<<endl;
}
