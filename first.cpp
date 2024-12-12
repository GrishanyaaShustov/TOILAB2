#include <iostream>

// Рекурсивная функция для сложения двух чисел
int Add(int x, int y) {
    if (y == 0) {
        return x; // Базовый случай: если y = 0, возвращаем x
    } else {
        return Add(x + 1, y - 1); // Рекурсия
    }
}

// Рекурсивная функция для умножения двух чисел
int Multy(int x, int y) {
    if (y == 0) {
        return 0; // Базовый случай: если y = 0, возвращаем 0
    } else {
        return Add(x, Multy(x, y - 1)); // Рекурсия
    }
}

// Рекурсивная функция для возведения в степень
int Pow(int x, int y) {
    if (y == 0) {
        return 1; // Базовый случай: любое число в степени 0 равно 1
    } else {
        return Multy(x, Pow(x, y - 1)); // Рекурсия
    }
}
