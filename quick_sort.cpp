//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
         if(low>=high){
           return;
       }
       int mid=partition(arr,low,high);
       quickSort(arr,low,mid-1);
       quickSort(arr,mid+1,high);
       
       
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
      
       
        int p=arr[low];
        int c=0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=p){
                c++;
            }
        }
        int pi=low+c;
        swap(arr[pi],arr[low]);
        int i=low,j=high;
        while(i<j){
            while(arr[i]<=p){
                i++;
            }
            while(arr[j]>p){
                j--;
            }
            if(i<j){
                swap(arr[i++],arr[j--]);
            }
        }
        return pi;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends