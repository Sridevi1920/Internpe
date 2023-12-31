/*1. Write a  program to print the area and perimeter of a circle.
Test Data:
Radius = 7.5
Expected Output
Perimeter is = 47.12388980384689
Area is = 176.71458676442586 */
#include <iostream>
#include <cmath>

const double PI = 3.14159265359; // Define the value of PI

int main() {
    double radius = 7.5;

    double perimeter = 2 * PI * radius;
    double area = PI * pow(radius, 2);

    std::cout << "Perimeter is = " << perimeter << std::endl;
    std::cout << "Area is = " << area << std::endl;

    return 0;
}
//2.Write a  program that takes three numbers as input to calculate and print the average of the numbers.
#include <iostream>

int main() {
    double num1, num2, num3;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    std::cout << "The average is: " << average << std::endl;

    return 0;
}
/*3.Write a program to print the area and perimeter of a rectangle. 
Test Data:
Width = 5.5 Height = 8.5 */

#include <iostream>

int main() {
    double width = 5.5;
    double height = 8.5;

    double perimeter = 2 * (width + height);
    double area = width * height;

    std::cout << "Perimeter is = " << perimeter << std::endl;
    std::cout << "Area is = " << area << std::endl;

    return 0;
}
// 4.Write a  program to print an American flag on the screen. 
#include <iostream>

int main() {
    // Print the top section of the flag
    for (int i = 0; i < 4; i++) {
        std::cout << "* * * * * * ==================================" << std::endl;
        std::cout << " * * * * *  ==================================" << std::endl;
    }

    // Print the bottom section of the flag
    std::cout << "* * * * * * ==================================" << std::endl;

    // Print the stripes
    for (int i = 0; i < 6; i++) {
        std::cout << "==============================================" << std::endl;
    }

    return 0;
}
//5.Write a  program to print a face. 
#include <iostream>

int main() {
    std::cout << " +\"\"\"\"\"\"+ " << std::endl;
    std::cout << "[| o o |]" << std::endl;
    std::cout << " |  ^  | " << std::endl;
    std::cout << " | '-' | " << std::endl;
    std::cout << " +-----+ " << std::endl;

    return 0;
}
