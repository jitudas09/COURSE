#include<bits/stdc++.h>
using namespace std ; 

// bit index always start from 0 and right to left 
int cheek_kth_bit( int n , int k ){
    return (n >> k) &1 ; 
}

void print_on_bit( int x ){

    for( int i = 0 ; i<32 ; i++){
        if(cheek_kth_bit(x , i )){
            cout << i << ' ' ;
        }
    }
    cout << endl ; 
}

int count_on_bits( int x ){
    int count = 0 ; 
    for (int i = 0 ; i<32 ; ++i ){
        if(cheek_kth_bit(x,i)) {
            count++;
        }
    }
    return count ; 
}

bool is_even( int x ){
    if(x&1) {
        return false ; 
    }
    else return true ; 
}

int set_kth_bit_on( int x , int k ){
    return x| (1<<k) ;
}

int set_kth_bit_of( int x , int k ){
    return x & (~(1<<k )) ;
}

int toggle_kth_bit ( int x , int k ){
    return x xor (1<<k) ;
}

bool check_power_of_2(int x ){
    return count_on_bits(x) == 1 ;
}

int main (){
    cout << cheek_kth_bit(11,2) << endl ;
    print_on_bit(11);
    cout << count_on_bits( 11) << endl ; 
    cout << is_even(11) << endl ;
    cout << set_kth_bit_on(11,2) << endl ;
    cout << set_kth_bit_of(11,1) << endl ; 
    cout << toggle_kth_bit(11,2) << endl ; // in xor if inputs are same then false, otherwise true ;
    cout <<  check_power_of_2(8) << endl ; // result true ....1,2,4,8,1,32.....
    cout <<  check_power_of_2(12) << endl ; // result is false 
    return 0 ;
}



