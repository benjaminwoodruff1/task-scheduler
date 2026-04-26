#include <iostream>
#include "PriorityQueue.h"

int main() {
    PriorityQueue<Signal> scheduler;

    std::cout << "Loading System Signals into Priority Queue..." << std::endl;

    scheduler.push(Signal("Telemetry Log", 2, BACKGROUND_TASK));
    scheduler.push(Signal("Engine Overheat", 10, HARDWARE_INTERRUPT));
    scheduler.push(Signal("GPS Update", 5, BACKGROUND_TASK));
    scheduler.push(Signal("Brake Fault", 9, HARDWARE_INTERRUPT));

    std::cout << "Processing " << scheduler.size() << " signals based on priority:\n" << std::endl;

    while (!scheduler.empty()) {
        Signal top = scheduler.top(); // Get highest priority
        
        if (top.priority > 7) {
            std::cout << "[CRITICAL] ";
        } else {
            std::cout << "[NORMAL]   ";
        }

        std::cout << "Handling: " << top.name << " (P: " << top.priority << ")" << std::endl;
        
        scheduler.pop(); // Remove it
    }

    return 0;
}