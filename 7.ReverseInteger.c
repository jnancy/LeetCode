/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows
*/
int reverse(int x) {
    long reverse = 0;
    bool neg = false;
    
    if(x<0){
        neg = true;
        x = -x;
    }
    while(x>0){
        reverse = reverse*10 + x%10;
        x/=10;
    }
    if(neg){
        reverse = -reverse;
    }
    if(reverse > INT_MAX || reverse < INT_MIN ){
        return 0;
    }
    return (int)reverse;
}
