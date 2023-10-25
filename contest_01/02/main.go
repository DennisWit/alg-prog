package main

import (
	"fmt"
	"math"
)

func main() {
	var man float64 = 0.5
	var dub float64 = 20
	var ber float64 = 32
	var o2 float64 = 0
	o2 = man * 365
	dub = o2 / 20
	ber = o2 / 32
	fmt.Println(o2, math.Ceil(ber), math.Ceil(dub))
}
