// 연산자 오버라이딩 사용 예정.
//test
#include <iostream>
#include "DefaultNumber.h"

static float operation(DefaultNumber number1, DefaultNumber number2, std::string oper)
{
    float answerNumber = 0;

    // oper에 따라 분기
    if (oper == "+")
    {
        answerNumber = number1 + number2;
    }
    else if (oper == "-")
    {
        answerNumber = number1 - number2;
    }
    else if (oper == "*")
    {
        answerNumber = number1 * number2;
    }
    else if (oper == "/")
    {
        answerNumber = number1 / number2;
    }
    else
    {
        throw std::exception("지정되지 않은 연산자입니다.\n");
    }
    return answerNumber;
}

static bool isValidOper(std::string oper)
{
    std::string operList[] = { "+", "-", "*", "/" };

    bool flag = false;

    for (const std::string& validOper : operList) {
        if (oper == validOper)
        {
            flag = true;
        }
    }
    return flag;
}

int main()
{
    while (true)
    {
        try
        {
            float firstNumber;
            float secondNumber;
            float answerNumber;
            std::string oper;

            std::cout << "1번 피연산자를 입력하세요.\n";
            while (!(std::cin >> firstNumber)) {
                std::cout << "1번 피연산자 : 숫자를 입력하세요.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            std::cout << "연산자를 입력하세요.\n";
            while (!(std::cin >> oper) || !isValidOper(oper)) {
                std::cout << "연산자 : +, -, *, / 중에 입력하세요.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            std::cout << "2번 피연산자를 입력하세요.\n";
            while (!(std::cin >> secondNumber)) {
                std::cout << "2번 피연산자 : 숫자를 입력하세요.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            DefaultNumber number1{ firstNumber };
            DefaultNumber number2{ secondNumber };

            answerNumber = operation(number1, number2, oper);
            std::cout << "결과 : " << firstNumber << " " << oper << " " << secondNumber << " = " << answerNumber << "\n";
        }
        catch (std::exception exception)
        {
            std::cout << exception.what();
        }
    }

    return 0;
}