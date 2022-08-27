#include<iostream>
using namespace std;

int search(int arr[],int s ){
    int min = arr[0] ;
    int max = arr[0] ;
    if (arr[0] > arr[1]){
        min = arr[1];
        
    }
    else {
        max = arr[1];
    }
    
    for(int i =2 ; i<=s-1 ; i++){
        if (arr[i] > max){
            max= arr[i];
            cout<<max<<endl;
        }
        if (arr[i] < min){
            min = arr[i];
            cout<<min<<endl;
        }

    }
    cout<<"max element is " << max <<endl;
    cout<<"min element is " << min;

    
}

int main (){
    int arr[6] ={2,3,8,5,6,1};
    int s = 6 ;
    search(arr , s);
    return 0 ;
}
