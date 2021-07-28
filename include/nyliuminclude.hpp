/*
 * Copyright 2021 NyliumMc https://nyliummc.org
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
 */
/*
 * AUTHORS:
 *	ttehbx222 [Lukas Nieswand]
 * EDITORS:
 */
#ifndef NYLIUM_INCLUDE
#define NYLIUM_INCLUDE
#define concat2(first, second) first second
#define concat3(first, second, third) first second third
#define concat4(first, second, third, fourth) first second third fourth
#ifdef _WIN64
#define OS_SUFFIX ".lib"
#elif defined __GNUC__
#ifdef __ppc64__
#define OS_SUFFIX ".a"
#endif
#endif
#endif