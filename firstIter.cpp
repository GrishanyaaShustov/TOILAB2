#include <iostream>

// Итеративная функция для сложения двух чисел
int Add(int x, int y) {
    while (y > 0) {
        x += 1; // Увеличиваем x на 1
        y -= 1; // Уменьшаем y на 1
    }
    return x;
}

// Итеративная функция для умножения двух чисел
int Multy(int x, int y) {
    int result = 0;
    while (y > 0) {
        result = Add(result, x); // Добавляем x к результату
        y -= 1; // Уменьшаем y на 1
    }
    return result;
}

// Итеративная функция для возведения в степень
int Pow(int x, int y) {
    int result = 1;
    while (y > 0) {
        result = Multy(result, x); // Умножаем результат на x
        y -= 1; // Уменьшаем y на 1
    }
    return result;
}
