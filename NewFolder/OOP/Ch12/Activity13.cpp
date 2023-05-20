#include <iostream>
#include <stdexcept>

void scram()
{
    std::cout << "SCRAM! I mean it. Get away from here!" << std::endl;
}

bool isSensorGlitch(unsigned int count)
{
    return (count % 17 == 0);
}

bool isCriticalError(unsigned int count)
{
    return (count % 69 == 0);
}

bool isShutdownSignal(unsigned int count)
{
    return (count % 199 == 0);
}

void checkReactorSafety(unsigned int& count)
{
    if (isSensorGlitch(count))
    {
        throw std::runtime_error("Sensor glitch");
    }
    else if (isCriticalError(count))
    {
        throw 123;
    }
    else if (isShutdownSignal(count))
    {
        throw std::logic_error("Shutdown signal received");
    }
    ++count;
}

int main()
{
    unsigned int count = 0;
    bool isSafe = true;
    while (isSafe)
    {
        try
        {
            checkReactorSafety(count);
        }
        catch (const std::runtime_error& e)
        {
            std::cout << "Runtime error: " << e.what() << std::endl;
        }
        catch (const std::logic_error& e)
        {
            std::cout << "Logic error: " << e.what() << std::endl;
            scram();
            isSafe = false;
        }
        catch (...)
        {
            std::cout << "Unknown exception caught" << std::endl;
            scram();
            isSafe = false;
        }
    }
    std::cout << "Exiting program" << std::endl;
    return 0;
}