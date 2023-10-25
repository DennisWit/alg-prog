package main

import (
	"fmt"
	"sort"
)

func main() {
	n := 1
	var word string
	intlist := make(map[string]int)
	intlist2 := make([]string, 0)

	for n > 0 {
		fmt.Scan(&word)
		if word == "end" {
			break
		}
		intlist[word] += 1
		if intlist[word] == 2 {
			intlist2 = append(intlist2, word)
		}
	}
	sort.Strings(intlist2)
	for _, num := range intlist2 {
		fmt.Print(num, " ")
	}
}
