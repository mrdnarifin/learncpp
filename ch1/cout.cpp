#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    auto chrono_start = std::chrono::high_resolution_clock::now();
    clock_t cpu_start = clock();

    // // Kode yang diukur
    // for (int i = 0; i < 10000000000; i++) {
    //     int x = i * i;
    // }

    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)

    clock_t cpu_end = clock();
    auto chrono_end = std::chrono::high_resolution_clock::now();

    // Hitung durasi
    double cpu_duration = double(cpu_end - cpu_start) / CLOCKS_PER_SEC;
    auto chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(chrono_end - chrono_start);

    std::cout << "CPU Time: " << cpu_duration << " detik" << std::endl;
    std::cout << "Wall Time: " << chrono_duration.count() << " mikrodetik" << std::endl;
    return 0;
}