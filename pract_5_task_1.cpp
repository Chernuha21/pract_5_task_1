#include <iostream>
#include <stack>
#include <string>

int main() {
    // Створення стека для рядків
    std::stack<std::string> stringStack;

    // Додавання рядків до стека
    stringStack.push("apple");
    stringStack.push("banana");
    stringStack.push("cherry");

    // Обчислення загальної кількості символів
    int totalCharacters = 0;
    while (!stringStack.empty()) {
        totalCharacters += stringStack.top().size(); // Додаємо кількість символів верхнього елемента
        stringStack.pop(); // Видаляємо верхній елемент
    }

    // Вивід загальної кількості символів
    std::cout << "Count of symvols: " << totalCharacters << std::endl;

    return 0;
}
