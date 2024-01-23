package main

import (
	"strings"
)

type Chunker struct {
	Sentence string
}

func NewChunker(sentence string) *Chunker {
	return &Chunker{Sentence: sentence}
}

func (c *Chunker) ThreeWordsChunk() string {
	words := strings.Fields(c.Sentence)
	var chunks []string

	for i := 0; i <= len(words)-3; i++ {
		chunks = append(chunks, strings.Join(words[i:i+3], " "))
	}

	return strings.Join(chunks, " | ")
}
