#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,9,2,8,3,8,4,7,5,6};
    int i,j,min;

    for(i=0;i<10-1;i++){
        min=i;
        for(j=i;j<10;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}