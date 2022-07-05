#include<iostream>
#include<string>

template <typename T>
class stack
{
private:
    int size;
    T* arr;

public:
    stack(int maxSize)
    {
        size = 0;
        arr = new T[maxSize];
    }
    void push(T New)
    {
        arr[size] = New;
        size++;
    }
    T pop()
    {
        size--;
        return arr[size];
    }
    ~stack()
    {
        delete[] arr;
    }
};

int main()
{
    stack<int>intStack(5);
    for (int i = 0; i < 5; i++)
    {
        intStack.push(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << intStack.pop() << " ";
    }
    std::cout << std::endl;

    stack<std::string>stringStack(2);
    stringStack.push("Hello");
    stringStack.push("World!");
    std::cout << stringStack.pop() << ' ' << stringStack.pop() << std::endl;

    stack<double>doubleStack(2);
    doubleStack.push(3.14159265359);
    doubleStack.push(2.71828182846);
    std::cout << doubleStack.pop() << ' ' << doubleStack.pop() << std::endl;
    return 0;
}