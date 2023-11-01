#include<iostream> 
using namespace std;

void print ( int arr[], int s, int e){
    for( int i = s ; i<= e ; i++ ){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
bool binarySearch(int arr[], int s, int e , int k){

    print ( arr, s, e);
     

    if ( s > e)
        return false;
    
    int mid = s + ( e - s)/2;
    cout <<"Value of mid is : "<<  mid << endl;
    
     if (arr[mid] == k)
        return true;

    else if ( arr[ mid] < k){
        s= mid + 1;
        return binarySearch(arr,  s, e , k);
    }

    else {
        e = mid - 1;
          return binarySearch(arr,  s,  e ,  k);
    }
    
}
int main(){

    int arr[13] = {1,3,5,6,7, 12, 15, 16, 18, 22, 24, 27, 29};
    int size = 13;

    int start= 0;
    int end = size - 1;
    int key = 6;
    bool ans = binarySearch( arr, start , end , key );

    if ( ans){
        cout << " Element found " << endl;

    }
    else
        cout << "Element not found " << endl;
}