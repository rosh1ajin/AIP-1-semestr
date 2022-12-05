#include <iostream>

const int N = 25;

int getRand(void) { return rand() % 10; }

int main(void)
{
    setlocale(0, "rus");
    int Array[N];
    for (int i = 0; i < N; ++i)
        Array[i] = getRand();

    std::cout << "MASSIV (25): ";
    for (int i = 0; i < N; ++i)
        std::cout << Array[i] << ' ';
    std::cout << std::endl;
    system("pause");

    int Sum = 0;
    int Cnt = 0;
    for (int i = 0; i < N; ++i)
    {
        if ((i % 2) != 0)
        {
            Sum += Array[i];
            ++Cnt;
        }
    std::cout << "Nechetnie: " << Cnt << std::endl;
    std::cout << "Summa Nechetnih: " << Sum << std::endl;

    int SumCH = 0;
    int CntCH = 0;
    for (int i = 0; i < N; ++i)
    {
        if ((i % 2) == 0)
        {
            SumCH += Array[i];
            ++CntCH;
        }

    std::cout << "Chetnie: " << CntCH << std::endl;
    std::cout << "Summa Chetnih: " << SumCH << std::endl;
    }
}
}
