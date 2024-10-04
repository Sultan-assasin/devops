#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>

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
    std::vector<int>::iterator last = std::unique(final1.begin(), final1.end());
    final1.erase(last, final1.end());

    
    std::cout << final1.size() << std::endl;

    return 0;
}
