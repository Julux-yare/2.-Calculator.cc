#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;  // Skapa en instans av kalkylatorn
    double num1, num2;
    int choice;

    do {
        std::cout << "\nSimple Calculator\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
        }

        switch (choice) {
            case 1:
                std::cout << "Result: " << calc.add(num1, num2) << "\n";
                break;
            case 2:
                std::cout << "Result: " << calc.subtract(num1, num2) << "\n";
                break;
            case 3:
                std::cout << "Result: " << calc.multiply(num1, num2) << "\n";
                break;
            case 4:
                try {
                    std::cout << "Result: " << calc.divide(num1, num2) << "\n";
                } catch (const std::invalid_argument& e) {
                    std::cout << e.what() << "\n";  // Fångar division med noll
                }
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);  // Fortsätt tills användaren väljer att avsluta

    return 0;
}
