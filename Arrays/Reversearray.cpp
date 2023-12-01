#include<iostream>
using namespace std;

/*
    Reversing elements of array
    a1 -> {1,2,3,4,5};
    reversed_a1 -> {5,4,3,2,1};
*/

// Using Call By reference method
void reverseArray(int a[],int l){
    int i = 0;
    while(i<l){
        a[l-i] = a[l-i] + a[i];
        a[i] = a[l-i] - a[i];
        a[l-i] = a[l-i] - a[i];i++,l--;
    }
}

int main(){

    // First Approach : Just for printing the array in reverse
    int a1[5] = {1,2,3,4,5};
    cout<<"Array Before Reversing : "<<endl;
    int length = sizeof(a1)/sizeof(int);
    for(int i = 0;i<length;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

    cout<<"Array After Reversing : "<<endl;
    for(int i = 0;i<length;i++){
        cout<<a1[length-i-1]<<" ";
    }cout<<endl;

    // Second Approach : To Reverse the array .

    cout<<"Array Before Reversing : "<<endl;
    
    for(int i = 0;i<length;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

    reverseArray(a1,length-1);
    cout<<"Array After Reversing : "<<endl;
    for(int i = 0;i<length;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

}