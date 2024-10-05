#include <iostream>


/* 25 вариант 
Известны две скорости: одна в километрах в час, другая - в метрах в секунду. Какая из скоростей больше?
*/


int main() {
    double speed_kmh, speed_ms;

    std::cout << "Введите скорость в километрах в час: ";
    std::cin >> speed_kmh;
    std::cout << "Введите скорость в метрах в секунду: ";
    std::cin >> speed_ms;

    double speed_kmh_in_ms = speed_kmh / 3.6;

    if (speed_kmh_in_ms == speed_ms) {
        std::cout << "Скорости равны!" << std::endl;
        std::cout << speed_kmh << " км/ч = " << speed_ms << " м/с" << std::endl;
    }
    else if (speed_kmh_in_ms > speed_ms) {
        std::cout << "Скорость в километрах в час больше скорости в метрах в секунду" << std::endl;
        std::cout << speed_kmh << " км/ч > " << speed_ms << " м/с" << std::endl;
    }
    else {
        std::cout << "Скорость в метрах в секунду больше скорости в километрах в час" << std::endl;
        std::cout << speed_ms << " м/с > " << speed_kmh << " км/ч" << std::endl;
    }

    return 0;
}