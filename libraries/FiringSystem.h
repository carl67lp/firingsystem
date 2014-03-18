#ifndef FiringSystem_h
#define FiringSystem_h
#include "Arduino.h"

class Transmitter
{
	public:
		Transmitter(char* addressLow);
		int sendCommand(char* cmd, Receiver r);
	private:
		char* _addr;
};

class Receiver
{
	public:
		Receiver(char* addressLow);
		int handleCommand(char* cmd);
	private:
		char* _addr;
};

#endif