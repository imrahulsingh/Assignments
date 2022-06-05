class Solution {
    public int removeDuplicates(int[] nums) {
        // Here is the length of updated array
        int count = 0;
        // Now we will Loop for all the elements in the array
        for (int i = 0; i < nums.length; i++) {
            //  we skip, If the current element is equal to the next element
            if (i < nums.length - 1 && nums[i] == nums[i + 1]) {
                continue;
            }
            // here Update the array 
            nums[count] = nums[i];
            count++;
        }
        return count;
    }
}
