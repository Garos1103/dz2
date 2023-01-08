#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, z1, x2, y2, z2;
    
    // Запросить пользователя ввести координаты первой точки
    printf("Пожалуйста, введите координаты первой точки A (x, y, z): ");
    // Считать координаты точки из стандартного ввода и присвоить их переменным
    scanf("%lf,%lf,%lf", &x1, &y1, &z1);
    
    // Запросить пользователя ввести координаты второй точки
    printf("Пожалуйста, введите координаты второй точки B (x, y, z): ");
    // Считать координаты точки из стандартного ввода и присвоить их переменным
    scanf("%lf,%lf,%lf", &x2, &y2, &z2);
    
    // Вычислить расстояние между точками по формуле
    double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    
    // Вывести расстояние между точками на экран
    printf("Расстояние между точками: %.2lf\n", distance);
    
    return 0;
}