#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    long long max_subarray_sum= INT_MIN; 

    for ( int l = 0 ; l<n ; l++){
        long long current_subarray_sum= 0 ; 
        
        for(int r= l ; r<n ; r++){
            for ( int i = l ; i<=r ; i++){
                current_subarray_sum+=a[i] ; 
            }
            max_subarray_sum= max ( max_subarray_sum , current_subarray_sum) ; 
        }
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}
