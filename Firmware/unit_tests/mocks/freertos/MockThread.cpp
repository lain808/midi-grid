#include "freertos/MockThread.h"
#include "freertos/thread.hpp"

namespace freertos
{

MockThread& MockThread::getInstance()
{
    static MockThread instance;
    return instance;
}

Thread::Thread( const char* Name, uint16_t StackDepth, uint32_t Priority )
{
    ThreadCaller::getInstance().setThread( *this );
}

Thread::Thread()
{
    ThreadCaller::getInstance().setThread( *this );
}

bool Thread::Start()
{
    return MockThread::getInstance().Start();
}

void Thread::Suspend()
{
    MockThread::getInstance().Suspend();
}

void Thread::Resume()
{
    MockThread::getInstance().Resume();
}

void Thread::DelayUntil( const TickType_t delay )
{
    MockThread::getInstance().DelayUntil( delay );
}

uint32_t Thread::WaitForNotification( TickType_t Timeout )
{
    return MockThread::getInstance().WaitForNotification();
}

ThreadCaller& ThreadCaller::getInstance()
{
    static ThreadCaller instance;
    return instance;
}

void ThreadCaller::setThread( freertos::Thread& thread )
{
    currentThread_ = &thread;
}

void ThreadCaller::Run()
{
    currentThread_->Run();
}

}
