/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = new Map();
    for (var i=0; i<nums.length; i++) {
        let nextNum = target - nums[i]
        
        if (map[nextNum] !== undefined) {
            let result = []
            result.push(map[nextNum])
            result.push(i)
            return result
        }
        
        map[nums[i]] = i
    }
};
