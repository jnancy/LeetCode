//solution was accepted but not optimal
bool isPalindrome(int x) {
    int div, l, r, reverse=0, xx = x;
    if(x<0){
        return false;
    }
    while(x){
        reverse = reverse*10 + x%10;
        x/=10;
    }
    if(reverse == xx){
        return true;
    }
    else{
        return false;
    }
    /*
    attempt at an alternate solution - unfinished
    for(div = 1; x/div>=10; div*10){        
    }
    while( x!= 0){
        l = x/div;
        r = x%10;
        if(l!=r){
            return false;
        }
        //chops off left and right ends of x
        x = (x%div)/10;
        div/=100;
    }
    return true;
    */
}
