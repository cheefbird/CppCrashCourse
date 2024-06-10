#include <iostream>

enum class Operator
{
    add,
    subtract,
    multiply,
    divide
};

struct Calculator
{
    Operator operand;

    Calculator(Operator value)
    {
        operand = value;
    }

    int calculate(int a, int b)
    {
        switch (operand)
        {
        case Operator::add:
            return a + b;

        case Operator::subtract:
            return a - b;

        case Operator::multiply:
            return a * b;

        case Operator::divide:
            return a / b;

        default:
            return 0;
        }
    }
};

int main()
{
    Calculator device = {Operator::add};
    int result = device.calculate(1, 2);
    std::cout << "RESULT: " << result;
    return 0;

};