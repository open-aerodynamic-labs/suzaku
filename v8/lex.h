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
#ifndef __SUZAKU_LEX_H__
#define __SUZAKU_LEX_H__

#include "tok.h"
#include <vector>

/**
 * 执行词法解析器
 *
 * @param code      源码
 * @param vectok    tok列表
 */
void sk_run_lex(const std::string& code, std::vector<struct token> *vectok);

#endif /* __SUZAKU_LEX_H__ */
