#include <iostream>
class Average {
public:
    static void calculateAndPrintAverage(float num1, float num2, float num3) {
        float average = (num1 + num2 + num3) / 3.0;
        std::cout << "Average: " << average << std::endl;
    }
};

int main() {
    float num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    Average::calculateAndPrintAverage(num1, num2, num3);

    return 0;
}
