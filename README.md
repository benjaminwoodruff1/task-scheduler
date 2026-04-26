# Task Prioritization Engine (Core Logic)

## Overview
This repository contains a C++ implementation of a **Priority Queue** built using a **Binary Max-Heap**. This project serves as the foundational logic for an embedded system scheduler, ensuring that high-urgency tasks are always processed first regardless of their arrival order.

By building the heap from scratch rather than using the Standard Template Library (STL), this project demonstrates a deep understanding of memory management, pointer logic, and algorithm complexity.

## Technical Features
* **Custom Binary Max-Heap:** Implemented core heap logic including `upheap` and `downheap` operations to maintain the Max-Heap property.
* **Generic Templates:** Designed the `PriorityQueue` as a template class to handle any data type or custom struct (like `Signal`) using `std::less` comparators.
* **Real-Time Simulation:** Integrated `<chrono>` and `<thread>` to simulate task execution delays, mapping logical "ticks" to real-world seconds.
* **Algorithmic Efficiency:** Guaranteed $O(\log n)$ time complexity for insertions and extractions, providing deterministic performance for real-time systems.
* **Unit Tested:** Includes a dedicated test suite to verify heap invariants and queue-draining logic.

## File Structure
* `src/PriorityQueue.cpp`: Contains the heap logic and array management.
* `include/PriorityQueue.h`: Header file defining the PriorityQueue class.
* `include/Signal.h`: Definition of the Signal object/struct.
* `main.cpp`: Driver program that simulates a batch of hardware signals being loaded into the controller.

## How to Compile and Run
This project can be compiled using any standard C++ compiler (GCC/Clang).

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/benjaminwoodruff1/task-scheduler.git](https://github.com/benjaminwoodruff1/task-scheduler.git)
