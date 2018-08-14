class Solution {
    public boolean canJump(int[] nums) {
        int length = 0;     
        for(int i = 0; i < nums.length - 1; i++){
            if(nums[i] > length){
                length = nums[i];
            }
            length--;
            if(length<0){
                return false;
            }
        }
        return true;     
    }
}
