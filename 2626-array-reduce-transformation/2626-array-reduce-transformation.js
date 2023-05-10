/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let accum = init;
  
    for (const element of nums) {
      accum = fn(accum, element);
    }
  
    return accum;
};