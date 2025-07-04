#include <iostream>
#include <chrono>
#include <typeinfo>
#include <iomanip>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Enter two numbers separed by a space: ";
    int x{};
    int y{};
    std::cout << "X: " << &x << " Y: " << &y << "\n";
    std::cin >> x >> y;
    std::cout << "You entered " << x << " and " << y << "\n";

    for (int i = 0; i < 1000000000; i++) {
        int x = i * i;
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << (x = 5) << "\n";

    // Hitung dalam ms dan µs
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // Konversi ke detik (double untuk presisi)
    double seconds = us.count() / 1'000'000.0;

    std::cout << "Waktu dalam ms: " << ms.count() << " ms\n";
    std::cout << "Waktu dalam µs: " << us.count() << " µs\n";
    std::cout << "Waktu dalam detik: " << std::fixed << std::setprecision(6) << seconds << " s\n";
    return 0;
}