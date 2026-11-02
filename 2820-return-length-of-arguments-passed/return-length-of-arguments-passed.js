/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {

    return args.length;
    
    // let cnt=0;
    // for(let i=0;i<args.length;i++)
    // cnt++;
    // return cnt;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */