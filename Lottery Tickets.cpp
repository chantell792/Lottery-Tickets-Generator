// Chantell JENKINS
// Lottery Tickets Generator
// October 12, 2026

#include <iostream>
#include <random>
using namespace std;

int main()
{
    std::cout << "Lottery Tickets Generator\n";
	random_device engine; // Create a random number generator engine // Use random_device to seed the engine
	uniform_int_distribution<int> randomNumber(1, 9); // Generate random numbers between 1 and 9

    int randomNumber1 = randomNumber(engine);
    int randomNumber2 = randomNumber(engine);
    int randomNumber3 = randomNumber(engine);
    int randomNumber4 = randomNumber(engine);
    int randomNumber5 = randomNumber(engine);
    int randomNumber6 = randomNumber(engine);

    std::basic_string<char> ticket = std::basic_string<char>(1, '0' + randomNumber1) + " " + std::basic_string<char>(1, '0' + randomNumber2) + " " + std::basic_string<char>(1, '0' + randomNumber3) + " " + std::basic_string<char>(1, '0' + randomNumber4) + " " + std::basic_string<char>(1, '0' + randomNumber5) + " " + std::basic_string<char>(1, '0' + randomNumber6);
    int ticketNumber = randomNumber1 + randomNumber2 + randomNumber3 + randomNumber4 + randomNumber5 + randomNumber6;

    std::cout << ticket << std::endl;
    std::cout << "Ticket Number: " << ticketNumber << std::endl;
    return 0;
}