#pragma once

class Message
{
public:
	void Send(const char* content);
	void Send(int frequency);
	void Send(const char* content, int frequency);
};

