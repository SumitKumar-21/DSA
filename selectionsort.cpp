#include<iostream>
#include<vector>
using namespace std;

void bubbleSorting(int arr[],int n){
    for(int i =0; i<n-1;i++){
for(int j=0;j<=n-1-i;j++)
if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
}
}

//elements get sorted from left 
void selectionSort(int arr[],int n){
    for(int i =0; i<n-1;i++){   // i for accessing the array
int minindex = i;
for(int j =i+1;j<n;j++)  // j for accesssing the  array
if(arr[j]<arr[minindex]) minindex = j;
swap(arr[i], arr[minindex]);   
}
}

void insertionSorting(int arr[],int n){
    for(int i =1; i<=n-1;i++){
        int j=i-1;
for(;j>=0;j--){
if(arr[j]>arr[i] ) arr[j+1]=arr[j];
else break;
} 
arr[j+1]=x;
}
}

int main(){
    int arr[5]= {90,-45,-7,78,4};
   insertionSorting(arr,5) ;
   for(int i =0; i<5; i++){
    cout<<arr[i]<<endl;
   }
}
