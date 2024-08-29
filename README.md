# tree-sitter-fluent

Fluent grammar for tree-sitter.

Modify the grammar by editing `grammar.js`. Recreate the generated files in `src` via

    npm run build
    npm test

Read the [documentation on tree-sitter](https://tree-sitter.github.io/tree-sitter/creating-parsers.html) for an introduction to the grammar and the DSL to generate it.

There are extensions to the DSL in grammar.js in `dsl`, to make the grammar more expressive and human readable.
