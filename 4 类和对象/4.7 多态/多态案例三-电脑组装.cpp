#include <iostream>
using namespace std;
class CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_Cpu = cpu;
        m_VC = vc;
        m_Mem = mem;
    }
    ~Computer()
    {
        if (m_Cpu != NULL)
        {
            /* code */
            delete m_Cpu;
            m_Cpu = NULL;
        }
        if (m_VC != NULL)
        {
            /* code */
            delete m_VC;
            m_VC = NULL;
        }
        if (m_Mem != NULL)
        {
            /* code */
            delete m_Mem;
            m_Mem = NULL;
        }
    }
    void work()
    {
        // 调用每个零件工作的接口

        m_Cpu->calculate();
        m_VC->display();
        m_Mem->storage();
    }

private:
    CPU *m_Cpu;
    VideoCard *m_VC;
    Memory *m_Mem;
};

class IntelCpu : public CPU
{
public:
    void calculate()
    {
        cout << "this is intel cpu work" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
    virtual void display()
    {
        cout << "this is Intel VideoCard work" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "this is Intel Memory work" << endl;
    }
};

class LenovoCpu : public CPU
{
public:
    void calculate()
    {
        cout << "this is Lenovo cpu work" << endl;
    }
};

class LenovoVideoCard : public VideoCard
{
    virtual void display()
    {
        cout << "this is Lenovo VideoCard work" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "this is Lenovo Memory work" << endl;
    }
};

void test01()
{
    // 第一台电脑零件
    CPU *intelCpu = new IntelCpu;
    VideoCard *intelVedioCard = new IntelVideoCard;
    Memory *intelMemory = new IntelMemory;

    cout << "first computer start work" << endl;

    // 创建第一台电脑
    Computer *computer1 = new Computer(intelCpu, intelVedioCard, intelMemory);
    computer1->work();
    delete computer1;

    cout << "-------------------" << endl;
    cout << "second computer start work" << endl;

    Computer *computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;

    cout << "-------------------" << endl;
    cout << "third computer start work" << endl;

    Computer *computer3 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
    computer3->work();
    delete computer3;
}

int main()
{
    test01();
}