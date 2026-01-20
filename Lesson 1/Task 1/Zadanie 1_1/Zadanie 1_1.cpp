
#include <iostream>

enum class monthsOfTheYear
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int enteringANumber{};
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> enteringANumber;

        monthsOfTheYear number = static_cast<monthsOfTheYear>(enteringANumber);

        switch (number)
        {
        case monthsOfTheYear::january:
            std::cout << "Январь" << std::endl;
            break;
        case monthsOfTheYear::february:
            std::cout << "Февраль" << std::endl;;
            break;
        case monthsOfTheYear::march:
            std::cout << "Март" << std::endl;;
            break;
        case monthsOfTheYear::april:
            std::cout << "Апрель" << std::endl;;
            break;
        case monthsOfTheYear::may:
            std::cout << "Май" << std::endl;;
            break;
        case monthsOfTheYear::june:
            std::cout << "Июнь" << std::endl;;
            break;
        case monthsOfTheYear::july:
            std::cout << "Июль" << std::endl;;
            break;
        case monthsOfTheYear::august:
            std::cout << "Август" << std::endl;;
            break;
        case monthsOfTheYear::september:
            std::cout << "Сентябрь" << std::endl;;
            break;
        case monthsOfTheYear::october:
            std::cout << "Октябрь" << std::endl;;
            break;
        case monthsOfTheYear::november:
            std::cout << "Ноябрь" << std::endl;;
            break;
        case monthsOfTheYear::december:
            std::cout << "Декабрь" << std::endl;;
            break;
        default:
            if (enteringANumber > 12 )
            std::cout << "Неправильный номер!" << std::endl;;
            break;
        }
    } while (enteringANumber != 0);

    std::cout << "До свидания";
}

