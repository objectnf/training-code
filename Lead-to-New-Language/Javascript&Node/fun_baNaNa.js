let wtf = 0/0  // 由于除0，wtf的值是NaN
console.log(typeof(wtf));  // NaN的类型是number
console.log("ba" + wtf + "a")  // "NaN"变成了字符串
