class Solution {
    public int trap(int[] height) {
        
        if(height == null || height.length == 0){
            return 0;
        }
        
        int ans = 0;
        int size = height.length;
        
        int[] leftMax = new int[size];
        int[] rightMax = new int[size];
        
        leftMax[0] = height[0];
        for(int i = 1; i < size; i++){
            leftMax[i] = Math.max(leftMax[i-1],height[i]);
        }
        
        rightMax[0] = height[size-1];
        for(int i = size-2; i >= 0; i--){
            rightMax[i] = Math.max(rightMax[i+1],height[i]);
        }
        
        for(int i = 1; i < size-1; i++){
            ans+= Math.min(leftMax[i],rightMax[i])-height[i];
        }
        return ans;
    }
}
