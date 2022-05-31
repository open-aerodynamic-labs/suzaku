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
#include "v8/lex.h"
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream ifs("../main.sk");
    std::string code((std::istreambuf_iterator<char>(ifs)),
                       (std::istreambuf_iterator<char>()));
    ifs.close();

    std::vector<struct token> vectok;

    sk_run_lex(code, &vectok);

    return 0;
}