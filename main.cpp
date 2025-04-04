#include <iostream>

void rekfizzbuzz(int n, int i);
void fizzbuzzoneline(int n);

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
    std::cout << "Enter a number: ";                        //Nummer eingeben
    int n;                                                  //Nummer zum eingeben
    std::cin >> n;                                          //Eingabe der Nummer


    return 0;                                               //return
}

void rekfizzbuzz(int n,int i)
{
    if(i > n) return;
    if(i % 3 == 0 && i % 5 == 0) std::cout << "FizzBuzz" << std::endl;
    else if(i % 3 == 0) std::cout << "Fizz" << std::endl;
    else if(i % 5 == 0) std::cout << "Buzz" << std::endl;
    else std::cout << i << std::endl;
    rekfizzbuzz(n, i + 1);
}

void fizzbuzzoneline(int n)
{
    for(int i = 1; i <= n; i++) i % 3 == 0 && i % 5 == 0 ? std::cout << "FizzBuzz" << std::endl :i % 3 == 0 ? std::cout << "Fizz" << std::endl :i % 5 == 0 ? std::cout << "Buzz" << std::endl :std::cout << i << std::endl;
}

void mitextrafizz(int n)
{

}

// Hello everybody, my name is Markiplier, and welcome back to Five Nights at Freddy's!