#include "Thread.h"

void Thread::runProcess(Thread* t)
{
	t->process();
}

Thread::Thread()
{
}

Thread::~Thread()
{
}

void Thread::start()
{
	threads = new thread(runProcess, this);
}

void Thread::join()
{

	threads->join();
}
