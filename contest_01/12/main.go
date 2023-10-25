package main

import (
	"fmt"
)

func main() {
	var k int64 = 0
	var x int64 = 0
	fmt.Scan(&x)
	for x > 1 {
		if x%2 == 0 {
			x = x / 2
			k += 1
		} else {
			x = 3*x + 1
			k += 1
		}
	}
	fmt.Println(k)
}
