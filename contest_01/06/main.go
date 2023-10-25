package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a)
	list1 := [5]int{5000, 1000, 500, 200, 100}

	for x := 0; x < 5; x++ {
		b = a / list1[x]
		a = a - b*list1[x]
		fmt.Print(b)
        fmt.Print(" ")
	}
}
