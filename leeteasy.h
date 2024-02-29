#ifndef LEETEASY_H
#define LEETEASY_H


/********************************************************************************************************************************
 ********************************************************************************************************************************

********************************************************************************************************************************
********************************************************************************************************************************/


bool isPalindrome(int x) {

    std::string s = std::to_string(x);
    int size = s.size();

    int f = 0;
    int l = (size -1);
    int sum = 0; 

    if( size == 0 || size == 1) {
        return true;
    }
        
    for ( int i = 0; i < size; i++) {

        if ( s[f++]  == s[l--]) {
            sum++;
        }
    }

    if (sum == size) return true; 
    else return false;
  
}

bool isPowerOfTwo(int n) {
      //  float
    if (n < 0) return false;
    //for power 2 ^0
    if (n == 1) return true;

    //to catch 1.5 
    float x = 0;
    while( n >= 2) {
        x = n/2.0;
        n = x;
    }
    if (x == 1) {
        return true;
    }
    else
    return false;
        
}


int fib(int n) {
        if ( n == 0) {
            return 0;
        }
    
        if ( n == 1) {
            return 1; 
        }
    
        else{
            return fib(n -2) + fib(n -1);
        }
    }

#endif 