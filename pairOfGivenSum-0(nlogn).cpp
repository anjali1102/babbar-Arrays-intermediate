// C++ program to find triplets in a given 
// array whose sum is equal to given sum.

//time complexity 0(nlogn(n))

//Avoid this method for duplicates 
#include<iostream>
using namespace std;
void SumOfPAirs(int arr[], int sum ,int n){
    int low=0;
    int high=n-1;
    while(low<high){
        if((arr[low]+arr[high])>sum)
            high--;
        else if((arr[low]+arr[high]<sum))
            low++;
        else
            cout<<"("<<low<<","<<" "<<high<<")";
            //can perform high-- / low++ 
            low++;
    }
}

//driver code
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum;
    cin>>sum;
    //sorting the array
    sort(arr,arr+n);
    SumOfPAirs(arr, sum, n);
    return 0;
}
//This code is contributed by Anjali_Chauhan