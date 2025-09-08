
#include <iostream>

char getSize(int cms) {
    // mark 30 and 42 as invalid sizes
    if (cms == 30 || cms == 42) {
        return '\0';  // Invalid size
    }
    else if (cms < 38) {
        return 'S';
    }
    else if (cms >= 38 && cms < 42) {
       return 'M';
    }
    else {
        return 'L';
    }
}

// valid size input
int getInput() {
    int cms;
    while (true) {
        std::cout << "Enter size in cm: ";
        std::cin >> cms;

        char size = getSize(cms);

        // if size is invalid (returns '\0')
        if (size == '\0') {
            std::cout << "Incorrect size entered. Please try again.\n";
        } else {
            
            return cms;
        }
    }
}

// display the T-shirt size to the user
void displayfunc(int cms) {
    char size = getSize(cms);
    std::cout << "The T-shirt size is: " << size << "\n";
}

void testSize() {
    std::cout << "Testing sizes from 28 to 44:\n";
    for (int cms = 28; cms <= 44; cms++) {
        char size = getSize(cms);
        if (size == '\0') {
            std::cout << "the size " << cms << " cm is incorrect (missing).\n";
        } else {
            std::cout << "the size " << cms << " cm is set as " << size << "\n";
        }
    }
}

int main() {
  
    testSize();

    // Then ask user for input
    int validCms = getInput();

    // Show T-shirt size for the input
    displayfunc(validCms);

    return 0;
}
