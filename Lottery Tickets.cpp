// Chantell JENKINS
// Lottery Tickets Generator
// October 12, 2026

#include <iostream>
#include <random>
using namespace std;

int main()
{
    std::cout << "Lottery Tickets Generator\n";
    random_device engine;
    uniform_int_distribution<int> randomNumber(1, 9);

	int randomNumber1 = randomNumber(engine);
    int randomNumber2 = randomNumber(engine);
    int randomNumber3 = randomNumber(engine);
    int randomNumber4 = randomNumber(engine);
    int randomNumber5 = randomNumber(engine);
    int randomNumber6 = randomNumber(engine);

    std::string ticket = std::to_string(randomNumber1) + " " + std::to_string(randomNumber2) + " " + std::to_string(randomNumber3) + " " + std::to_string(randomNumber4) + " " + std::to_string(randomNumber5) + " " + std::to_string(randomNumber6);
    int ticketNumber = randomNumber1 + randomNumber2 + randomNumber3 + randomNumber4 + randomNumber5 + randomNumber6;

    std::cout << ticket << std::endl;
    std::cout << "Ticket Number: " << ticketNumber << std::endl;
    return 0;
}