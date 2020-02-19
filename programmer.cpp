#include <iostream>
#include <vector>
class IWorker
{
public:
    virtual void work() = 0;
};

class Programmer : public IWorker
{
public:
    void work() { std::cout << "Programmer is working" << std::endl; };
};

class Tester : public IWorker
{
public:
    void work() { std::cout << "Tester is working" << std::endl; };
};

class Designer : public IWorker
{
public:
    void work() { std::cout << "Designer is working" << std::endl; };
};

class Integrator : public IWorker
{
public:
    void work() { std::cout << "Integrator is working" << std::endl; };
};


class Senior : public Programmer
{
public:
    void work() { std::cout << "Senior Programmer is working" << std::endl; };
};

class Junior : public Programmer
{
public:
    void work() { std::cout << "Junior Programmer is working" << std::endl; };
};

int main()
{
    std::vector<IWorker*> workers;
    workers.emplace_back(new Designer());
    workers.emplace_back(new Designer());
    
    workers.emplace_back(new Programmer());
    workers.emplace_back(new Programmer());
    workers.emplace_back(new Programmer());
    
    workers.emplace_back(new Tester());
    workers.emplace_back(new Integrator());
    
    workers.emplace_back(new Senior());
    workers.emplace_back(new Junior());
    
    for (const auto& worker : workers)
    {
        worker->work();
    }
    
     for (auto& worker : workers)
    {
        delete worker;
    }
}
    
