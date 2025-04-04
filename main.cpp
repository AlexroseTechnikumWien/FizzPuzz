#include <iostream>

void rekfizzbuzz(int n, int i);
void fizzbuzzoneline(int n);
void mitextrafizz(int n);

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

    mitextrafizz(n);

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
    int efb=0,fb=0,ef=0,f=0,b=0;

    for(int i = 1; i <= n; i++)
    {
        if(i%9==0 && i%5==0)
        {
            std::cout<<"FizzBuzz mit E X T R A F I Z Z" << std::endl;
            efb++;
        }
        else if(i%3==0 && i%5==0)
        {
            std::cout<<"FizzBuzz" << std::endl;
            fb++;
        }
        else if(i%9==0)
        {
            std::cout<<"E X T R A F I Z Z" << std::endl;
            ef++;
        }
        else if(i%3==0)
        {
            std::cout<<"Fizz" << std::endl;
            f++;
        }
        else if(i%5==0)
        {
            std::cout<<"Buzz" << std::endl;
            b++;
        }
        else
            std::cout<<i<<std::endl;
    }

    std::cout<<"\nStats: "<<std::endl;
    std::cout<<"Fizz: "<<f<<std::endl;
    std::cout<<"Buzz: "<<b<<std::endl;
    std::cout<<"FizzBuzz: "<<fb<<std::endl;
    std::cout<<"E X T R A F I Z Z: "<<ef<<std::endl;
    std::cout<<"FizzBuzz mit E X T R A F I Z Z: "<<efb<<std::endl;
}

// Hello everybody, my name is Markiplier, and welcome back to Five Nights at Freddy's!

//Lebensweisheiten sind wie kleine Leuchtfeuer auf dem oft dunklen und unwegsamen Pfad des Lebens. Sie sind das destillierte Wissen und die Erfahrung unzähliger Generationen, eingefangen in kurzen, prägnanten Sätzen, die uns Orientierung und Trost spenden können. Sie erinnern uns daran, dass wir nicht allein sind in unseren Kämpfen und dass viele vor uns ähnliche Herausforderungen gemeistert haben. Lebensweisheiten spiegeln die universellen Wahrheiten über die menschliche Natur wider: die Freude an der Liebe, die Bitterkeit des Verlusts, die Bedeutung von Freundschaft, die Notwendigkeit von Mut und die Kraft der Vergebung. Sie lehren uns, dass das Leben ein ständiger Wandel ist, dass Rückschläge unvermeidlich sind, aber dass wir aus ihnen lernen und gestärkt daraus hervorgehen können. Sie ermutigen uns, im gegenwärtigen Moment zu leben, die kleinen Freuden des Alltags zu schätzen und uns nicht in der Vergangenheit oder Zukunft zu verlieren. Lebensweisheiten erinnern uns daran, dass wahre Stärke nicht in der Abwesenheit von Angst liegt, sondern in der Fähigkeit, sich ihr zu stellen. Sie lehren uns, dass Mitgefühl und Empathie die Eckpfeiler eines erfüllten Lebens sind und dass wahre Größe darin besteht, anderen zu helfen, ihr Potenzial zu entfalten. Sie erinnern uns daran, dass wir alle miteinander verbunden sind und dass unsere Handlungen Auswirkungen auf die Welt um uns herum haben. Lebensweisheiten sind wie ein Kompass, der uns hilft, unseren Weg zu finden, wenn wir uns verloren fühlen, und wie ein Anker, der uns erdet, wenn wir drohen, von den Stürmen des Lebens davongetragen zu werden. Sie sind ein Geschenk, das wir uns selbst und anderen machen können, eine Erinnerung daran, dass das Leben schön und wertvoll ist, auch in seinen schwierigsten Momenten.