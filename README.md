# Mini C Compiler

This project is a basic implementation of a **Mini C Compiler** using **Lex** (for lexical analysis) and **Yacc** (for syntax analysis). It parses a subset of the C programming language, performs syntax checking, and generates a symbol table for identifiers.

---

## 📁 Project Structure

- `lexer.y` — Lex specification file for tokenizing input.
- `parser.y` — Yacc grammar file for parsing and syntax analysis.
- `sym_tab.c` — Symbol table implementation and management.
- `ip_file.c` — Example input file written in C (can be replaced with any valid C code snippet).
- `op_file.txt` — Output file capturing parsing results and symbol table (generated on execution).

---

## 🛠️ Build & Run Instructions

1. **Generate header and parser source files using Yacc**  
   (The `-d` flag generates the `y.tab.h` header containing token definitions)
   ```bash
   yacc -d parser.y
   ```
2. **Generate lexical analyzer source file using Lex**
   ```bash
   lex lexer.y
   ```
3. **Compile all generated files along with the symbol table**
   ```bash
   gcc -g lex.yy.c y.tab.c sym_tab.c -ll
   ```
4. **Run the compiler with an input file**
   ```bash
   ./a.out < ip_file.c > op_file.txt
   ```

---

## ✅ Features

- Tokenizes and parses basic C code
- Builds a symbol table for identifiers
- Performs syntax analysis using a user-defined grammar
- Outputs logs and symbols in a readable format
