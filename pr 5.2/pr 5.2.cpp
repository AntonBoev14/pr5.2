#include <iostream>
using namespace std;

int main() {
    setlocale(0, "RU");
    int D, M;

    cout << "Введите день (1-31): ";
    cin >> D;
    cout << "Введите месяц (1-12): ";
    cin >> M;

    if (M < 1 || M > 12 || D < 1 || D > 31) {
        cout << "Некорректная дата." << endl;
        return 1;
    }

    string zodiac_sign;

    switch (M) {
    case 1: 
        if (D >= 20) {
            zodiac_sign = "Водолей";
        }
        else {
            zodiac_sign = "Козерог";
        }
        break;

    case 2: 
        if (D <= 18) {
            zodiac_sign = "Водолей";
        }
        else {
            zodiac_sign = "Рыбы";
        }
        break;

    case 3: 
        if (D <= 20) {
            zodiac_sign = "Рыбы";
        }
        else {
            zodiac_sign = "Овен";
        }
        break;

    case 4: 
        if (D <= 19) {
            zodiac_sign = "Овен";
        }
        else {
            zodiac_sign = "Телец";
        }
        break;

    case 5: 
        if (D <= 20) {
            zodiac_sign = "Телец";
        }
        else {
            zodiac_sign = "Близнецы";
        }
        break;

    case 6: 
        if (D <= 21) {
            zodiac_sign = "Близнецы";
        }
        else {
            zodiac_sign = "Рак";
        }
        break;

    case 7: 
        if (D <= 22) {
            zodiac_sign = "Рак";
        }
        else {
            zodiac_sign = "Лев";
        }
        break;

    case 8: 
        if (D <= 22) {
            zodiac_sign = "Лев";
        }
        else {
            zodiac_sign = "Дева";
        }
        break;

    case 9: 
        if (D <= 22) {
            zodiac_sign = "Дева";
        }
        else {
            zodiac_sign = "Весы";
        }
        break;

    case 10: 
        if (D <= 22) {
            zodiac_sign = "Весы";
        }
        else {
            zodiac_sign = "Скорпион";
        }
        break;

    case 11: 
        if (D <= 22) {
            zodiac_sign = "Скорпион";
        }
        else {
            zodiac_sign = "Стрелец";
        }
        break;

    case 12: 
        if (D <= 21) {
            zodiac_sign = "Стрелец";
        }
        else {
            zodiac_sign = "Козерог";
        }
        break;

    default: 
        zodiac_sign = "Некорректная дата.";
        break;
    }

    cout << "Ваш знак Зодиака: " << zodiac_sign << endl;

    return 0;
}
