#include <iostream>
#include <string>
#include <string_view>  // C++17
#include <chrono>
#include <iomanip>

void printString(std::string str) // str makes a copy of its initializer
{
    std::cout << str << "\n";
}

// str provides read-only access to whatever argument is passed in
void printSV(std::string_view str) // now a std::string_view
{
    std::cout << str << "\n";
}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::string s{"Hello, World!"};     // s makes a copy of its initializer
    // printString(s);
    printSV(s);

    auto end = std::chrono::high_resolution_clock::now();
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