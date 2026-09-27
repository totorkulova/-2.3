// Лаба2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "ru");
    // =====================================================
    // ЧАСТЬ 1. Арифметические операции с типом int
    // =====================================================

    int intA;
    int intB;

    std::cout << "=== Работа с типом int ===" << std::endl;

    // Ввод первого целого числа
    std::cout << "Введите первое целое число: ";
    std::cin >> intA;

    // Ввод второго целого числа
    std::cout << "Введите второе целое число: ";
    std::cin >> intB;

    // Проверка деления на ноль
    if (intB == 0)
    {
        std::cout << "Ошибка: деление на ноль невозможно."
            << std::endl;

        return 1;
    }

    // Арифметические операции для int
    int intSum = intA + intB;
    int intDifference = intA - intB;
    int intProduct = intA * intB;
    int intQuotient = intA / intB;

    // Вывод результатов для int
    std::cout << std::endl;
    std::cout << "Результаты для int:" << std::endl;

    std::cout << "Сумма: "
        << intSum << std::endl;

    std::cout << "Разность: "
        << intDifference << std::endl;

    std::cout << "Произведение: "
        << intProduct << std::endl;

    std::cout << "Частное: "
        << intQuotient << std::endl;


    // =====================================================
    // ЧАСТЬ 2. Арифметические операции с типом double
    // =====================================================

    double doubleA;
    double doubleB;

    std::cout << std::endl;
    std::cout << "=== Работа с типом double ==="
        << std::endl;

    // Ввод первого вещественного числа
    std::cout << "Введите первое вещественное число: ";
    std::cin >> doubleA;

    // Ввод второго вещественного числа
    std::cout << "Введите второе вещественное число: ";
    std::cin >> doubleB;

    // Проверка деления на ноль
    if (doubleB == 0.0)
    {
        std::cout << "Ошибка: деление на ноль невозможно."
            << std::endl;

        return 1;
    }

    // Арифметические операции для double
    double doubleSum = doubleA + doubleB;
    double doubleDifference = doubleA - doubleB;
    double doubleProduct = doubleA * doubleB;

    double doubleQuotient =
        static_cast<double>(doubleA) / doubleB;

    // Устанавливаем два знака после запятой
    std::cout << std::fixed << std::setprecision(2);

    // Вывод результатов для double
    std::cout << std::endl;
    std::cout << "Результаты для double:" << std::endl;

    std::cout << "Сумма: "
        << doubleSum << std::endl;

    std::cout << "Разность: "
        << doubleDifference << std::endl;

    std::cout << "Произведение: "
        << doubleProduct << std::endl;

    std::cout << "Частное: "
        << doubleQuotient << std::endl;


    // =====================================================
    // ЧАСТЬ 3. Сравнение деления int и double
    // =====================================================

    int comparisonA = 7;
    int comparisonB = 2;

    // Целочисленное деление
    int integerDivision =
        comparisonA / comparisonB;

    // Вещественное деление
    double realDivision =
        static_cast<double>(comparisonA)
        / comparisonB;

    std::cout << std::endl;
    std::cout << "=== Сравнение деления int и double ==="
        << std::endl;

    std::cout << "7 / 2 как int: "
        << integerDivision << std::endl;

    std::cout << "7 / 2 как double: "
        << realDivision << std::endl;

    return 0;
}
