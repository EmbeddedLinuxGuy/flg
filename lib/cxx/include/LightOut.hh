/*
 * Copyright 2010 Erik Gilling
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __LightOut_hh__
#define __LightOut_hh__

#include <string>
using namespace std;

class Board;

class LightOut {
public:
	string name;
	uint8_t index;
	Board *board;

	uint8_t red[2];
	uint8_t green[2];
	uint8_t blue[2];
};


#endif /* __LightOut_hh__ */
