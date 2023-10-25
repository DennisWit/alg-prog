func shift(arr []int, steps int) {
	steps = steps % 10
	if steps < 0 {
		steps = 10 + steps
	}

	temp := make([]int, 10)
	for i := 0; i < 10; i++ {
		newid := (i + steps) % 10
		if newid < 0 {
			newid += 10
		}
		temp[newid] = arr[i]
	}
	copy(arr, temp)
}