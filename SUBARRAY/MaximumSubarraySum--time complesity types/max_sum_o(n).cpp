#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ; cin >> n ; 
    long long a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    long long max_subarray_sum= INT_MIN; 
    long long max_subarray_sum_so_far = INT_MIN ; 

    for ( int l = 0 ; l<n ; l++){
        max_subarray_sum_so_far = max(a[l], a[l]+max_subarray_sum_so_far) ; 
        max_subarray_sum = max (max_subarray_sum , max_subarray_sum_so_far) ; 
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}