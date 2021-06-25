#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <random>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include "formato.h"
using namespace std;
class Thread
{

private:
	thread* threads;
	static void runProcess(Thread* t);
public:
	Thread();
	~Thread();

	void start();
	void join();
	void detach();
protected:
	virtual void process() = 0;

};

