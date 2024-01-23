package main

import (
	"strings"
)

func threeWordsChunk(sentence string) string {
	words := strings.Fields(sentence)
	var chunks []string

	for i := 0; i <= len(words)-3; i++ {
		chunks = append(chunks, strings.Join(words[i:i+3], " "))
	}

	return strings.Join(chunks, " | ")
}