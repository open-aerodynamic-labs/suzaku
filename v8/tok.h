/**
 * Copyright 2022 open-aerodynamic-airduck
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Create Date 2022/5/31
 *
 * Developers:
 *
 *     - orient-sherlock
 *
 */
#ifndef __SUZAKU_TOK_H__
#define __SUZAKU_TOK_H__

#include <string>

/**
 * token类别
 */
typedef enum {
    /* 关键字 */
    KIND_LET,
    KIND_FUN,
    KIND_CHAR,
    KIND_INT,
    KIND_LONG,
    KIND_FLOAT,
    KIND_DOUBLE,
    KIND_VARARGS,
    KIND_ANY,
    KIND_RETURN,
    KIND_GOTO,
    KIND_OBJECT,
    KIND_THIS,
    KIND_STATIC,
    KIND_CONST,
    KIND_IF,
    KIND_ELSE,
    KIND_ELIF,
    KIND_FOR,
    KIND_WHILE,
    KIND_DO,
    KIND_SWITCH,
    KIND_CASE,
    KIND_DEFAULT,
    KIND_BREAK,
    KIND_CONTINUE,
    KIND_SIZEOF,
    KIND_NULL,
    KIND_STRUCT,
    KIND_FUNDECL,
    KIND_VOID,
    KIND_BYTE,
    KIND_STRING,

    /* 字面量 */
    KIND_IDENTIFIER,
    KIND_NUMBER,
    KIND_STRING_LITERAL,
    KIND_CHARACTER_LITERAL,

    /* 符号 */
    KIND_EQ,
    KIND_NE,
    KIND_ADD,
    KIND_SUB,
    KIND_STAR,
    KIND_SLASH,
    KIND_OPEN_PAREN,
    KIND_CLOSE_PAREN,
    KIND_OPEN_BRACE,
    KIND_CLOSE_BRACE,
    KIND_DOT,
    KIND_COMMA,
    KIND_OPEN_BRACKET,
    KIND_CLOSE_BRACKET,
    KIND_COLON,
    KIND_ADDADD,
    KIND_SUBSUB,
    KIND_ARROW,
    KIND_ADDEQ,
    KIND_SUBEQ,
    KIND_STAREQ,
    KIND_SLASHEQ,
    KIND_GT,
    KIND_LT,
    KIND_GTEQ,
    KIND_LTEQ,
    KIND_LSHIFT,
    KIND_RSHIFT,
    KIND_EQEQ,
    KIND_OR,
    KIND_AND,
    KIND_NOT,
    KIND_XOR,
    KIND_OROR,
    KIND_OREQ,
    KIND_ANDAND,
    KIND_ANDEQ,
    KIND_NOTEQ,
    KIND_XOREQ,
    KIND_EQARROW,

    KIND_NOP,
    KIND_EOI,
    KIND_EOF,
} tokenkind_t;

/**
 * token结构体
 */
struct token {
    tokenkind_t kind;
    std::string value;
    int lineno;
    int colno;
};

/**
 * 创建一个token
 */
inline static void sk_make_token(tokenkind_t kind, std::string &value, int lineno, int colno, struct token *p_tok)
{
    p_tok->kind = kind;
    p_tok->value = value;
    p_tok->lineno = lineno;
    p_tok->colno = colno;
}

/**
 * 打印token
 */
inline static void sk_print_token(struct token *p_tok)
{
    printf("<%d, %s>\n", p_tok->kind, p_tok->value.c_str());
}

#endif /* __SUZAKU_TOK_H__ */
