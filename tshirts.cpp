#include <iostream>

char getSize(int cms) {
    if (cms == 30 || cms == 42) {
        return '\0';  // Invalid size
    } else if (cms < 38) {
        return 'S';
    } else if (cms >= 38 && cms < 42) {
        return 'M';
    } else {
        return 'L';
    }
}

int getValidInput() {
    int cms;
    while (true) {
        std::cout << "Enter chest size in cm: ";
        std::cin >> cms;

        char size = getSize(cms);
        if (size == '\0') {
            std::cout << "Invalid size is given. Please re-enter.\n";
        } else {
            return cms;  // Valid input
        }
    }
}

void displaySize(int cms) {
    char size = getSize(cms);
    std::cout << "The T-shirt size is: " << size << "\n";
}

// Main function
int main() {
    int validCms = getValidInput();
    displaySize(validCms);
    return 0;
}
