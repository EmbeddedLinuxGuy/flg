/*
 * Copyright 2009 Erik Gilling
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

#ifndef __Soma_hh__
#define __Soma_hh__

#include <sys/time.h>

#include <string>
#include <vector>
using namespace std;


#include <State.hh>
#include <SequenceDB.hh>
#include <StepSequencer.hh>
#include <Link.hh>
#include <Thread.hh>

class Soma
{
private:
	State state;
	SequenceDB seqDB;
	StepSequencer *seq;
	Thread::Mutex seqLock;

	vector<string> lowerLedNames;
	vector<string> axonLedNames;
	vector<string> upperLedNames;
	vector<string> allLedNames;
        vector<string> digitalNames;
        vector<string> allNames;

	uint8_t handleMotor(uint16_t input, uint8_t value,
			    uint8_t max, uint8_t slewRate);

	struct mg_context *mg_ctx;

	friend void channel_page(struct mg_connection *conn,
				 const struct mg_request_info *ri, void *data);
	friend void patterns_page(struct mg_connection *conn,
				  const struct mg_request_info *ri, void *data);
	friend void rate_page(struct mg_connection *conn,
			      const struct mg_request_info *ri, void *data);

	void startWebServer(int port);
	void channelPage(struct mg_connection *conn,
			 const struct mg_request_info *ri);
	void patternsPage(struct mg_connection *conn,
			  const struct mg_request_info *ri);
	void ratePage(struct mg_connection *conn,
		      const struct mg_request_info *ri);

public:
	Soma();
	~Soma();

	bool loadConfig(const char *fileName, const char *eventsfileName);
	bool attachLink(const char *busName, Link *link);

	void run(void);
};

#endif /* __Soma_hh__ */
