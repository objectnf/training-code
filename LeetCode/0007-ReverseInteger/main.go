package main

import "fmt"

func reverse(x int) int {
	var x64 = int64(x)
	var res int64 = 0
	for ; x64 != 0; {
		var tmp = x64 % 10
		x64 /= 10
		res = res * 10 + tmp
	}
	if res >= 0x7FFFFFFF || res <= -0x80000000 {
		return 0
	}
	return int(res)
}

func main(){
	var num int
	_, _ = fmt.Scanf("%d", &num)
	var num_reversed = reverse(num)
	_, _ = fmt.Printf("Result is: %d", num_reversed)
}
