#include <iostream>

#include <chrono>

#include <thread>



int main() {

    while (true) {

        auto now = std::chrono::system_clock::now();

        auto now_time = std::chrono::system_clock::to_time_t(now);

        std::cout << "The current time is: " << std::ctime(&now_time) << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(20));

    }

    return 0;

}
