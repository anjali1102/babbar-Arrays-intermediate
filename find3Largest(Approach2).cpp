//Time Complexity: O(nlogn)
//Space Complexity: O(1)
#include<iostream>
using namespace std;
void find3Largest(int arr[], int size){
    int check=0, count=1;
    sort(arr, arr+size);
    for(int i=0;i<size;i++){
        while(count<4){
            if(check!=arr[size-1]){
                cout<<arr[size-1]<<" ";
                check=arr[size-1];
            }
        }
    }
}
int main(){
    int size;
    cin>>size;
    for(int i=0;i,size;i++)
        cin>>arr[i];
    find3Largest(arr,size);
    return 0;
}