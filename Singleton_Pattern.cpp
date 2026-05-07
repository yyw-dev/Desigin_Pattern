#include<iostream>

//定义一个单例模式的类任务队列
class TaskQueue
{
public:
    TaksQueue(const TaskQueue& t)=delete;
    TaskQueue& operator=(const TaskQueue& t)=delete;
    static TaskQueue* getInstance()
    {
        return m_taskQ;
    }
private:
    TaskQueue()=default;
    //只能通过类名访问静态属性和方法
    static TaskQueue* m_taskQ;
};

TaksQueue* TaskQueue::m_taskQ=new TaskQueue;

int main()
{
    TaskQueue* taksQ=TaskQueue::getInstance();
    return 0;
}