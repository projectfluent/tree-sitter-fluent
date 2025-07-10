package tree_sitter_fluent_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_fluent "github.com/projectfluent/tree-sitter-fluent.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fluent.Language())
	if language == nil {
		t.Errorf("Error loading Fluent grammar")
	}
}
