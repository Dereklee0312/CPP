#include <iostream>
#include <ostream>

// int main() {
//   int x{};
//   while (true) {
//     std::cout << "Num= " << x << std::endl;
//     x++;
//   }
//   return 0;
// }

// int main()
// {
//     unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
//     std::cout << "x was: " << x << '\n';
//
//     x = 65536; // 65536 is out of our range, so we get wrap-around
//     std::cout << "x is now: " << x << '\n';
//
//     x = 65537; // 65537 is out of our range, so we get wrap-around
//     std::cout << "x is now: " << x << '\n';
//
//     return 0;
// }

// int main()
// {
// 	unsigned int x{ 3 };
// 	unsigned int y{ 5 };
//
// 	std::cout << x - y << '\n';
// 	return 0;
// }

// int main()
// {
// 	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
// 	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
// 	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
// 	std::cout << '\n';
// 	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
// 	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
// 	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
//
// 	return 0;
// }

// int main()
// {
//     double zero {0.0};
//     double posinf { 5.0 / zero }; // positive infinity
//     std::cout << posinf << '\n';
//
//     double neginf { -5.0 / zero }; // negative infinity
//     std::cout << neginf << '\n';
//
//     double nan { zero / zero }; // not a number (mathematically invalid)
//     std::cout << nan << '\n';
//
//     return 0;
// }

bool isEqual(int x, int y)
{
    return x == y; // operator== returns true if x equals y, and false otherwise
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y) << std::endl ; // will return true or false

    return 0;
}
