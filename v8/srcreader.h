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
#ifndef __SUZAKU_STRREADER_H__
#define __SUZAKU_STRREADER_H__

#include <string>

/**
 * 源码读取器
 */
class SourceReader {
public:
    /** 读取字符串 */
    SourceReader(const std::string &source);
    /** 读取下一个字符 */
    bool look_ahead(char *p_ch);
    /** 回退到上一个字符 */
    void back();
    /* 查看上一个字符 */
    char peek_back();
    /* 查看下一个字符 */
    char peek_next();
    /* 跳到下一个字符 */
    char skip_next();
    /* 跳过当前行 */
    void skip_line();
    /** 是否读到文件末尾 */
    const bool eof();

    int lineno() const;
    int colno() const;

private:
    int         self_line;
    int         self_col;
    size_t      self_pos;
    std::string self_source;
    size_t      self_src_size;
};

/** 空格 */
inline static bool isspace(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

/** 是否是数字 */
inline static bool isnumber(char c)
{
    return (c >= '0' && c <= '9');
}

/** 是否是字符 */
inline static bool let(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
}

#endif /* __SUZAKU_STRREADER_H__ */