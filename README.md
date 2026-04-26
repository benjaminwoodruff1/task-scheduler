# Task Prioritization Engine

## Overview
C++ implementation of a **Priority Queue** built using a **Binary Max-Heap**. This project serves as the foundational logic for an embedded system scheduler, ensuring that high-urgency tasks are always processed first regardless of their arrival order.

By building the heap from scratch as a **Generic Template**, this project demonstrates a deep understanding of data structure design, algorithmic complexity, and modern C++ practices like **Explicit Template Instantiation**.

## Technical Features
* **Custom Binary Max-Heap:** Implemented core heap logic including `upheap` and `downheap` operations to maintain the Max-Heap property.
* **Generic Templates:** Designed the `PriorityQueue` as a template class to handle any data type or custom struct (like `Signal`) using `std::less` comparators.
* **Algorithmic Efficiency:** Guaranteed $O(\log n)$ time complexity for insertions and extractions, providing deterministic performance for real-time systems.
* **Unit Tested:** Includes a dedicated test suite to verify heap invariants, ensuring the maximum element is always at the root, the minimum element is always at the root, and that the queue handles sequence-based draining correctly.

## Project Structure
* `include/PriorityQueue.h`: Contains the `PriorityQueue` template class and the `Signal` struct definition.
* `src/PriorityQueue.cpp`: Handles **Explicit Template Instantiation** for the `Signal` type to optimize compilation.
* `src/main.cpp`: Driver program that simulates a hardware interrupt controller processing batch tasks.
* `tests/tests.cpp`: Unit tests verifying priority ordering, lowest-element extraction, and queue size logic.

## How to Build and Run
This project is designed to be compiled in a Linux/WSL environment using GCC.

### 1. Clone the repository
```bash
git clone https://github.com/benjaminwoodruff1/task-scheduler.git
cd task-scheduler
```

### Run the Simulation
From the root directory, run:
```bash
g++ -o scheduler src/main.cpp src/PriorityQueue.cpp
./scheduler
```

## Project Versions
* **[Stable] Pure Logic (Current Branch):** A clean implementation of a Binary Max-Heap Priority Queue.
* **[Advanced] Real-Time Simulation:** [Click here to see the version with a system clock and task durations.](https://github.com/benjaminwoodruff1/task-scheduler/tree/feature/system-clock)