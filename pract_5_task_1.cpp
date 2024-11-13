#include <iostream>
#include <stack>
#include <string>

int main() {
    // ��������� ����� ��� �����
    std::stack<std::string> stringStack;

    // ��������� ����� �� �����
    stringStack.push("apple");
    stringStack.push("banana");
    stringStack.push("cherry");

    // ���������� �������� ������� �������
    int totalCharacters = 0;
    while (!stringStack.empty()) {
        totalCharacters += stringStack.top().size(); // ������ ������� ������� ��������� ��������
        stringStack.pop(); // ��������� ������ �������
    }

    // ���� �������� ������� �������
    std::cout << "Count of symvols: " << totalCharacters << std::endl;

    return 0;
}
