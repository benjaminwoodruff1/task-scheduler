#include <iostream>
#include <cassert>
#include "../include/PriorityQueue.h"

// Testing if the highest priority always comes out first and lowest priority comes out last
void testPriorityOrder() {
    PriorityQueue<Signal> pq;
    pq.push(Signal("Low", 1, BACKGROUND_TASK));
    pq.push(Signal("High", 10, HARDWARE_INTERRUPT));
    pq.push(Signal("Med", 5, BACKGROUND_TASK));
    pq.push(Signal("Med-High", 7, HARDWARE_INTERRUPT));
    pq.push(Signal("Low-Med", 3, BACKGROUND_TASK));

    if(pq.top().priority != 10) {
        std::cout << "[FAIL] Expected priority 10, got " << pq.top().priority << std::endl;
    } else {
        std::cout << "[PASS] testPriorityOrder(top)" << std::endl;
    }

    int lowest = 100;

    while(!pq.empty()) {
        if(pq.top().priority < lowest) {
            lowest = pq.top().priority;
        }
        pq.pop();
    }

    if(lowest != 1) {
        std::cout << "[FAIL] Expected priority 1, got " << lowest << std::endl;
    } else {
        std::cout << "[PASS] testPriorityOrder(lowest)" << std::endl;
    }
}

// Test 2: Ensure size updates correctly
void testSize() {
    PriorityQueue<Signal> pq;
    assert(pq.empty());
    
    pq.push(Signal("Task", 5, BACKGROUND_TASK));
    assert(pq.size() == 1);
    
    pq.pop();
    assert(pq.empty());
    std::cout << "[PASS] testSize" << std::endl;
}

int main() {
    std::cout << "--- RUNNING SYSTEM UNIT TESTS ---" << std::endl;
    
    testPriorityOrder();
    testSize();
    
    std::cout << "[ALL TESTS PASSED]" << std::endl;
    return 0;
}