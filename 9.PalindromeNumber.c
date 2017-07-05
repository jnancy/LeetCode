//both solutions were accepted but are not optimal
//method 1: reverse x and compare that to the original x
bool isPalindrome(int x) {
    int reverse=0, xx = x;
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
//method 2: compare the leftmost and rightmost digits of x, and then chop them off to repeat the process with a shortened x
bool isPalindrome(int x){
  if (x < 0){
      return false;
  }
  int div = 1;
  while (x / div >= 10){
      div *= 10;
  }
  while (x != 0){
      int l = x / div;
      int r = x % 10;
      if (l != r){
         return false;
      }
      x = (x % div) / 10;
      div /= 100;
    }
    return true;
}
