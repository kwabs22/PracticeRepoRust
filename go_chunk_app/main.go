package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Usage: go run . <sentence>")
		os.Exit(1)
	}

	sentence := os.Args[1]

	// Simple version
	simpleResult := threeWordsChunk(sentence)
	fmt.Println("Simple version:", simpleResult)

	// Struct version
	chunker := NewChunker(sentence)
	structResult := chunker.ThreeWordsChunk()
	fmt.Println("Struct version:", structResult)
}
