var findDuplicates = function(nums) {
    
    let hash = {};
    let result = [];
    
    for(let i=0; i<nums.length; i++) {
        let num = nums[i];
        if( !hash[num] ) {
            hash[num] = 1;
        } else {
            result.push(num);
        }
    }
    
    return result;
};
