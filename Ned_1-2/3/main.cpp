//Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
//также разность удвоенной суммы первого и третьего чисел и утроенного второго
//числа.
#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
        std :: cin >> n1;
        std :: cin >> n2;
        std :: cin >> n3;
        if (n1>0){
            n1 = (n1*2);
            n2 = (n2*3);
            n3 = (n3*2);
            std::cout <<"n1=" <<n1 <<"n2=" <<n2 <<"n3=" <<n3 <<std::endl;
        }else{
            std::cout <<"Yspeh" << std::endl;
        }
        if (n1>1){
            int abob=0;
            abob=(n1+n2+n3)/3;
                    std::cout <<"abob";
        }
}
