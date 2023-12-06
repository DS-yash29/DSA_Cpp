#include<iostream>
using namespace std;

int main(){
    int a1[10] = {4,7,11,34,57,34,-546,90,100,0};
    int a2[5] = {10,7,50,90,100};

    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);
    int ans[n]; // Declaring the Max size of Resulting  array , by Smaller array as it contains max'm number of elements resulting array can contain
    int elem = 0; // COunting the Length of Resulting Array.

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(a1[i] == a2[j]){
                ans[elem] = a1[i];
                elem++;
                break;
            }
        }
    }

    for (int i = 0;i<elem;i++){
        cout<<ans[i]<<" ";
    }




}    