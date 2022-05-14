#include<iostream>
using namespace std;

int linearSearch(int *linearArr, int key, int lenth){
    for(int i=0; i<lenth; i++){
        if(linearArr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
	int linearArr[]={1,2,3,4,5,6,7};
	int length = sizeof(linearArr)/sizeof(int);
	int key;
	cout<<"Enter the key: ";
	cin>>key;
	int index = linearSearch(linearArr, key, length);
	if(index !=1){
        cout<<key<<" Present at: " <<index<<endl;
	}
	else{
        cout<<key <<" is not present!!"<<endl;
	}

	return 0;
}
