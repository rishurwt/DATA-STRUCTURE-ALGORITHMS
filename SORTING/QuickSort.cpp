#include  <iostream>
using namespace std;
int swap(int* x , int* y){
    int temp = *x ;
    *x = *y;
    *y = temp;
}

int partition(int left , int right  , int arr[]){

    // int mid = left + (right - left )/2;
    int pivot = arr[left] ;
    int count = 0;
    
    for(int i = 1 ; i <= right ; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int pivotIndex = left + count;
    swap(&arr[left],&arr[pivotIndex]);
    int i = left , j = right;
    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= arr[pivotIndex]){
            i++;
        }
         while(arr[j] > arr[pivotIndex]){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(&arr[i],&arr[j]);
        }
        //  swap(&arr[j],&arr[pivotIndex]);

    }
 
    return pivotIndex;
}    
int quickSort(int left , int right , int arr[]){
    if(left<right){
        int p = partition(left , right, arr);
        quickSort(left,p-1,arr);
        quickSort(p+1,right,arr);
    }
}

int main(){
    int n = 5 ;
    int arr[5] = {-1,9,5,0,1};
    int s = 0 ; 
    int e = n-1;
    quickSort(s,e,arr);

for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<endl;
}

    return 0 ;

}

