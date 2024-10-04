#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    int a;
    std::cin >> a;  
    std::vector<int> final1; 

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string userInput;
    std::getline(std::cin, userInput);

    std::stringstream ss(userInput);
    int number;
    while (ss >> number) {
        final1.push_back(number); 

        if (ss.peek() == ' ' || ss.peek() == ',') {
            ss.ignore();
        }
    }

    std::sort(final1.begin(), final1.end());


    final1.pop_back();

    int first_max = *std::max_element(final1.begin(), final1.end());


    std::cout << first_max << std::endl;

    return 0;
}
