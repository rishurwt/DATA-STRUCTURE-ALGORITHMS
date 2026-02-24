#include <iostream>
using namespace std;

//To swap two numbers
int swap(int* x , int* y ){
    int temp = *x ;
    *x = *y;
    *y = temp; 
}

int main(){

       int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;

        int arr[n] ;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
   
        for(int i = 0 ; i < n-1 ; i++){
            int min = i;
            for(int j = i;j<n ;j++){
                if(arr[j]<arr[min]){
                    min = j ;
                }
            }
            if(min!=i){
                swap(&arr[i],&arr[min]);
            }
        }

        for(int i = 0 ; i < n ; i++){
            cout<<arr[i];
        }
}