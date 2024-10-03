package tree_sitter_llvm_mir_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-llvm_mir"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_llvm_mir.Language())
	if language == nil {
		t.Errorf("Error loading LLVM MIR grammar")
	}
}
