#include <iostream>
#include <chrono> // For millisec timing
#include <thread>   // For sleep_for
#include "../include/PriorityQueue.h"

int main() {
    PriorityQueue<Signal> scheduler;

    std::cout << "Loading System Signals into Priority Queue..." << std::endl;

    scheduler.push(Signal("Telemetry Log", 2, BACKGROUND_TASK));
    scheduler.push(Signal("Engine Overheat", 10, HARDWARE_INTERRUPT));
    scheduler.push(Signal("GPS Update", 5, BACKGROUND_TASK));
    scheduler.push(Signal("Brake Fault", 9, HARDWARE_INTERRUPT));

    std::cout << "Processing " << scheduler.size() << " signals based on priority (>7 is Critical):\n" << std::endl;

    double time = 0;
    while (!scheduler.empty())
    {
        Signal top = scheduler.top(); // Get highest priority
        
        if (top.priority > 7) { // Arbitrary threshold for critical signals
            std::cout << "[CRITICAL] ";
        } else {
            std::cout << "[NORMAL]   ";
        }

        std::cout << "[TICK: " << time << "s] Handling: " << top.name << " (P: " << top.priority << ")" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(top.processingTime)); // Simulate processing time
        time += top.processingTime; //update time
        scheduler.pop(); // Remove it
    }

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "SIMULATION COMPLETE. Final Clock: " << time << " seconds." << std::endl;

    return 0;
}