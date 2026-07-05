#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n  ; cin >> n ;
    int a[n] ; 

    for ( int i = 0 ; i<n ;  ++i ){
        cin >> a[i] ;
    }
    int mx= INT_MIN ;
    for ( int l = 0 ; l<n ; l++){
        for ( int r = l ; r<n ; ++r){
            int sum = 0 ; 
            for(int i = l ; i<=r ; i++){
                cout << a[i ] << ' ' ; 
                sum+=a[i] ;
            }
            mx=max(mx,sum) ;
            cout <<"--->" <<  " sum : " << sum   ; 
            cout << endl ; 
        }
    }
    cout << "Maximum subarray elemt sum : " << mx << endl ; 
    return 0 ;
}