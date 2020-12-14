package main

import "log"

func info(x int) {
	log.Printf("info %d\n", x)
}

func add(x, y int) int {
	z := x + y
	info(z)

	return z
}

func main() {
	x, y := 0x100, 0x200
	z := add(x, y)

	println(z)
}
