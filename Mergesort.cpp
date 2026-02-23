#include <iostream>
#include <vector>

using namespace std;

//Function to merge array
void merge(int left , int mid , int right , vector<int>& arr){
    int idx1 = mid - left +1 ;
    int idx2 = right - mid ;
    int L[idx1] , R[idx2];
     
     for(int i = 0 ; i < idx1 ; i++) L[i] = arr[left+i];
     for(int j = 0 ; j < idx2 ; j++) R[j] = arr[mid+j+1] ;
    
        int i = 0 , j = 0 , k = left;
    
    while(i < idx1 && j < idx2){
        if(L[i] < R[j]){
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }
    while(i < idx1){
        arr[k++] = L[i++];
    }
        while(j < idx2){
        arr[k++] = R[j++];
    }
    
}





//Function to sort array
int mergeSort(int left , int right , vector<int>& arr){
    if(left < right){
        int mid = left + (right - left)/2;
        mergeSort(left , mid,arr);
        mergeSort(mid+1,right,arr);
        merge(left , mid , right , arr);
    }
}


int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create a vector of the specified size
    vector<int> arr(n);
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int left = 0 ;
    int right = n-1 ;
    mergeSort(left , right ,arr);
    
   for(int num : arr){
    cout<< num << " ";
   }

    return 0;
}