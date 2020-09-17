//INPUT : {10, 2, -2, -20, 10}    FOR NEGATIVE ELEMENT TOO

//NAIVE APPROACH  time-->O(n^2)   space -->O(1)
// #include<iostream>
// using namespace std;
// int main(){
//     int size,arr[size];
//     cin>>size;
//     for(int i=0;i<size;i++)
//         cin>>arr[size];
//     for(int i=0;i<size-1;i++){
//         for(int j=i;j<size;j++){
//             if(arr[i]+arr[j]==0)
//                 cout<<"Present";
//             else
//                 cout<<"Not Present";
//         }
//     }
//     return 0;
// }

// OPTIMAL APPROACH time-->O(n) space-->O(1)

#include<bits/stdc++.h> 
using namespace std; 

// Function to print subarray with sum as given sum 
void subArraySum(int arr[], int n, int sum) 
{ 
	// create an empty map 
	unordered_map<int, int> map; 

	// Maintains sum of elements so far 
	int curr_sum = 0; 

	for (int i = 0; i < n; i++) 
	{ 
		// add current element to curr_sum 
		curr_sum = curr_sum + arr[i]; 

		// if curr_sum is equal to target sum 
		// we found a subarray starting from index 0 
		// and ending at index i 
		if (curr_sum == sum) 
		{ 
			cout << "Sum found between indexes "
				<< 0 << " to " << i << endl; 
			return; 
		} 

		// If curr_sum - sum already exists in map 
		// we have found a subarray with target sum 
		if (map.find(curr_sum - sum) != map.end()) 
		{ 
			cout << "Sum found between indexes "
				<< map[curr_sum - sum] + 1 
				<< " to " << i << endl; 
			return; 
		} 

		map[curr_sum] = i; 
	} 

	// If we reach here, then no subarray exists 
	cout << "No subarray with given sum exists"; 
} 

int main() 
{
    int n, arr[n];
    cin>>n;
    int sum=0; 
	for(int i=0;i>n;i++)
        cin>>arr[i]; 	
	subArraySum(arr, n, sum); 
	return 0; 
} 
