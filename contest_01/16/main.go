package main

import (
	"fmt"
)

func main() {
	var number int
	fmt.Scan(&number)
	var s []float64
	for i := 0; i < number; i++ {
		var k float64
		fmt.Scan(&k)
		s = append(s, k)
	}

	var s2 []float64
	s2 = append(s2, s[0])
	for i := 1; i < number-1; i++ {
		s2 = append(s2, (s[i-1]+s[i]+s[i+1])/3.0)
	}
	s2 = append(s2, s[number-1])
	for _, v := range s2 {
		if int((v*10))%10 == 0 {
			fmt.Printf("%.1f", v)
		} else {
			fmt.Print(v)
		}
		fmt.Print(" ")
	}
}
