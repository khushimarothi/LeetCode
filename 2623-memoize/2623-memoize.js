/**
 * @param {Function} fn
 */
function memoize(fn) {
     const cache = {};
    
    return function(...args) {
        let key = '';
    for (const arg of arguments) {
      key += ',' + arg;
    }

    if (key in cache) {
      return cache[key];
    }
    const functionOutput = fn(...arguments);
    cache[key] = functionOutput;
    return functionOutput;
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */