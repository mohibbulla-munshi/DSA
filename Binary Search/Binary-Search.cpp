#include<iostream>
using namespace std;

int binaryFunction(int *binaryArr, int key, int n){
    int startPoint=0;
    int endPoint=n-1;
    while(startPoint<=endPoint){
        int midPint = (startPoint+endPoint)/2;
        if(binaryArr[midPint]==key){
            return midPint;
        }
        else if(key>binaryArr[midPint]){
            startPoint=midPint+1;
        }
        else{
            endPoint=midPint-1;
        }
        return -1;
    }

}

int main(){
    int binaryArr[]={1,2,3,4,5,6,7};
    int n=sizeof(binaryArr)/sizeof(int);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int index = binaryFunction(binaryArr, key, n);
    if(index == -1){
        cout<<key<<" Not present!!"<<endl;
    }
    else{
        cout<<key<<" Present at: "<<index<<endl;

    }

    return 0;
}
