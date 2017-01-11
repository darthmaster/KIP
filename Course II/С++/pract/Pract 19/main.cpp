#include <iostream>
#include <math.h>

#include "practics.cpp"
#include "tasks/task14.cpp"
#include "tasks/task15.cpp"
#include "tasks/task16.cpp"
#include "tasks/task17.cpp"
#include "tasks/task18.cpp"

using namespace std;

int main(){

    int maink=0;
    int k=0;

    //Красивое меню
    cout<<"---------------------------------------\n";
    cout<<"|         Практические C++ по ОП      |\n";
    cout<<"---------------------------------------\n";
    cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n";
    cout<<"░░░░░░░░░░▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄░░░░░░░░░\n";
    cout<<"░░░░░░░░▄▀░░░░░░░░░░░░▄░░░░░░░▀▄░░░░░░░\n";
    cout<<"░░░░░░░░█░░▄░░░░▄░░░░░░░░░░░░░░█░░░░░░░\n";
    cout<<"░░░░░░░░█░░░░░░░░░░░░▄█▄▄░░▄░░░█░▄▄▄░░░\n";
    cout<<"░▄▄▄▄▄░░█░░░░░░▀░░░░▀█░░▀▄░░░░░█▀▀░██░░\n";
    cout<<"░██▄▀██▄█░░░▄░░░░░░░██░░░░▀▀▀▀▀░░░░██░░\n";
    cout<<"░░▀██▄▀██░░░░░░░░▀░██▀░░░░░░░░░░░░░▀██░\n";
    cout<<"░░░░▀████░▀░░░░▄░░░██░░░▄█░░░░▄░▄█░░██░\n";
    cout<<"░░░░░░░▀█░░░░▄░░░░░██░░░░▄░░░▄░░▄░░░██░\n";
    cout<<"░░░░░░░▄█▄░░░░░░░░░░░▀▄░░▀▀▀▀▀▀▀▀░░▄▀░░\n";
    cout<<"░░░░░░█▀▀█████████▀▀▀▀████████████▀░░░░\n";
    cout<<"░░░░░░████▀░░███▀░░░░░░▀███░░▀██▀░░░░░░\n";
    cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n";
    cout<<"Введите номер практической [11-18]\n=> "; cin>>maink;

    //Этот синтаксис case
    switch (maink){

        case 11:{
            cout<<"Введите задание [1-4] => "; cin>>k;
            switch (k){  
                 case 1:{
                    cout<<"\nВычислить значение выражения\nс=log10((y-sqrt(log10(x)))*(x-(y/(x+pow(x,2)/4))))\n";
                    n11_1();
                    break;
                 }  
                 case 2:{
                    cout<<"\nДаны два действительных числа x и у. Вычислить их сумму, разность, произведение и частное.\n";
                    n11_2();
                    break;
                 }
                 case 3:{
                    cout<<"\nСоставить программу, печатающую значение True, если треугольник со сторонами а, b, с является равнобедренным и значение False в противном случае.\n";
                    n11_3();
                    break;
                 }
                 case 4:{
                    cout<<"\nСоставить программу, которая печатает True, если точка с координатами (х, у) принадлежит заданным закрашенным (заштрихованным) областям и False – в противном случае.\n";
                    n11_4();
                    break;
                 } 
                 default:{  
                    cout<<"Такого задания нет :c";
                 }
              }  
            break;
        }

        case 12:{
            cout<<"Введите задание [1-2] => "; cin>>k;
            switch (k){  
                 case 1:{
                    n12_1();
                    break;
                 }  
                 case 2:{
                    n12_2();
                    break;
                 } 
                 default:{  
                    cout<<"Такого задания нет :c";
                 }
              }  
            break;
        }

        case 13:{
            cout<<"Введите задание [1-2] => "; cin>>k;
            switch (k){  
                 case 1:{
                    n13_1();
                    break;
                 }  
                 case 2:{
                    n13_2();
                    break;
                 } 
                 default:{  
                    cout<<"Такого задания нет :c";
                 }
              }  
            break;
        }

        case 14:{

            cout<<"\nВ одномерном массиве, состоящем из n целых элементов, вычислить:";
            cout<<"\n1) Произведение элементов массива, расположенных между первым и вторым нулевыми элементами. ";
            cout<<"\n2) Найти среднее арифметическое значение четных элементов и среднее арифметическое нечетных элементов и сравнить их между собой.";
            cout<<"\n3) Преобразовать массив таким образом, чтобы в первой его половине располагались элементы, стоявшие в нечетных позициях, а во второй половине – элементы, стоявшие в четных позициях.\n";
            
            n14();
            break;
        }

        case 15:{
            n15();
            break;
        }

        case 16:{
            n16();
            break;
        }

        case 17:{
            
            cout<<"Введите задание [1-2] => "; cin>>k;
            switch (k){
                 case 1:{
                    n17_1();
                    break;
                 }  
                 case 2:{
                    n17_2();
                    break;
                 } 
                 default:{  
                    cout<<"Такого задания нет :c";
                 }
              }  
            break;

        }

        case 18:{
            n18();
            break;
        }

        default:{
            cout<<"Такой практической нет :c";
            break;
        }

    }

cout<<"\n";
return 0;
}
