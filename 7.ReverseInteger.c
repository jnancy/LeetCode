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
