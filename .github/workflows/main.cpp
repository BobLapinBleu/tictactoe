#include <iostream>

using namespace std;

int main()
{
    cout<<"What is your name?";
    char32_t Name;
    std::cin >> Name;
    printf("Your name is %s\n", Name);

    return 0;
}
