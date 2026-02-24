#include <iostream>
using namespace std;

//To swap two numbers
int swap(int* x , int* y ){
    int temp = *x ;
    *x = *y;
    *y = temp; 
}

int main (){

        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;

        int arr[n] ;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
   
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++ ){
      
            //check two numbers
            if(arr[j] > arr[j+1]){
                 swap(&arr[j],&arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++) {
        printf(" %d ",arr[i]);
    }
}
