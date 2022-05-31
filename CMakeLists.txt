# Copyright 2022 open-aerodynamic-airduck
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Create Date 2022/5/31
#
# Developers:
#
#     - orient-sherlock
#
cmake_minimum_required(VERSION 3.20)
project(suzaku)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(${PROJECT_SOURCE_DIR}/v8 CMP_DIR)

add_executable(airdrag main.cc ${CMP_DIR})
