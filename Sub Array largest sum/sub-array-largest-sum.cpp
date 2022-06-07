#include<iostream>
using namespace std;
int main(){
    int subArray[]={-2,3,4,-1,5,-12,6,1,3};
    int sum;
    int largestSum;
    int n=sizeof(subArray)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum +=subArray[k];
            }
            largestSum = max(largestSum,sum);
        }
    }
    cout<<"Sum of Arrays: "<<largestSum<<endl;
}
