#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


double calculate_product(int limit);

int main(void)
{
    int num;       
    double res;    

    setlocale(LC_ALL, "");

    
    printf("Вычисление произведения: 1.1 * 1.2 * ... * 1.N\n");
    printf("Введите значение N: ");
    scanf("%d", &num);

    if (num <= 0) 
        printf("Ошибка: число N должно быть положительным.\n");
    else
    {
        res = calculate_product(num);
        printf("Итоговое произведение: %.6f\n", res); 
    }

    return 0;
}

double calculate_product(int limit)
{
    double res = 1.0;

    
    for (int j = 1; j <= limit; j++)
    {
       
        res = res * ((10.0 + j) / 10.0);
    }

    return res;
}