#include<bits/stdc++.h>
using namespace std ; 

int main (){
    int n ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    int max_subarray_sum= INT_MIN; // int_min is the minimum int value 

    for ( int l = 0 ; l<n ; l++){
        for(int r= l ; r<n ; r++){
            int current_subarray_sum= 0 ; 
            for ( int i = l ; i<=r ; i++){
                current_subarray_sum+=a[i] ; 
            }
            max_subarray_sum= max ( max_subarray_sum , current_subarray_sum) ; 
        }
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}