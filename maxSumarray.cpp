/************Maximum sumarray***********/
// {I<nput : [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

// explaination :[4,-1,2,1] has largest sum= 6

/***** NAIVE APPROACH *****/
//Time---> O(n^2)    space --->O(1)
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(int arr[],int size){
    int sum=0,maximum;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum+=(arr[j]);
            maximum=max(sum,maximum);
        }
    }
    return sum;
}
int main(){
    int size,arr[size];
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    maxSubarray(arr,size);
    return 0;
}

/*****KADANE'S ALGORITHM*****/
//Time---> O(n)    space --->O(1)
class Solution{
public:
    int maxSubarray(vector<int>&nums){
        int sum=0;
        int maximum=INT_MIN;
        for(int i=0;i<nums;i++){
            sum+=nums[i];
            maximum=max(sum,maximum);
            if(sum<0)
                sum=0;
        }
        return maximum;
    }
};