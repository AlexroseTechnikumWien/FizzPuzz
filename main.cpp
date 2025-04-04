#include <iostream>

void rekfizzbuzz(int n);

void fizzbuzz(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)std::cout << "FizzBuzz" << std::endl;
        else if(i % 3 == 0)std::cout << "Fizz" << std::endl;
        else if(i % 5 == 0)std::cout << "Buzz" << std::endl;
        else std::cout << i << std::endl;
    }
}

int main()
{
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    fizzbuzz(n);
    return 0;
}

void rekfizzbuzz(int n, int i)
{
    int i =1;
    if(i > n) return;
    if(i % 3 == 0 && i % 5 == 0) std::cout << "FizzBuzz" << std::endl;
    else if(i % 3 == 0) std::cout << "Fizz" << std::endl;
    else if(i % 5 == 0) std::cout << "Buzz" << std::endl;
    else std::cout << i << std::endl;
    i++;
    rekfizzbuzz(n);
}

void fizzbuzzoneline(int n)
{
    for(int i = 1; i <= n; i++) i % 3 == 0 && i % 5 == 0 ? std::cout << "FizzBuzz" << std::endl :i % 3 == 0 ? std::cout << "Fizz" << std::endl :i % 5 == 0 ? std::cout << "Buzz" << std::endl :std::cout << i << std::endl;
}