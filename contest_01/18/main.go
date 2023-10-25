package main

import (
	"fmt"
)

func main() {
	var n int
	var itog string
	fmt.Scan(&n)

	for n > 0 {
		if n%26 == 0 {
			itog = string(65+(n-1)%26) + itog
			n /= 27
			continue

		}
		itog = string(64+n%26) + itog
		n /= 26
	}
	fmt.Print(itog)
}