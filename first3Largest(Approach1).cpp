//Time Complexity:   O(n)
//Space Complexity:  O(1)
#include<bits/stdc++.h>
using namespace std;
void find3Largest(int arr[], int size){
    int largest1, largest2, largest3 = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest1){
            largest2=largest3;
            largest2=largest1;
            largest1=arr[i];
        }
        else if(arr[i]>largest2){
            largest3=largest2;
            largest2=arr[i];
        }
        else if(arr[i]>largest3)
            largest3=arr[i];
        cout<<largest1<<" "<<largest2<<" "<<largest3<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    find3Largest(arr,size);
    return 0;
}