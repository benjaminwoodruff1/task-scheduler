# Task Prioritization Engine (Core Logic)

## Overview
This repository contains a C++ implementation of a **Priority Queue** built using a **Binary Max-Heap**. This project serves as the foundational logic for an embedded system scheduler, ensuring that high-urgency tasks are always processed first regardless of their arrival order.

By building the heap from scratch rather than using the Standard Template Library (STL), this project demonstrates a deep understanding of memory management, pointer logic, and algorithm complexity.

## Technical Features
* **Custom Binary Max-Heap:** Implemented core heap logic including `push`, `pop`, `peek`, and `heapify` operations.
* **Algorithmic Efficiency:** Guaranteed $O(log n)$ time complexity for insertions and extractions, providing scalability for large task sets.
* **Object-Oriented Design:** Utilized a `Signal` class structure to manage task metadata including priority levels and processing requirements.
* **Deterministic Logic:** Verified that the highest-priority "Interrupts" are always moved to the top of the processing stack.

## File Structure
* `src/PriorityQueue.cpp`: Contains the heap logic and array management.
* `include/PriorityQueue.h`: Header file defining the PriorityQueue class.
* `include/Signal.h`: Definition of the Signal object/struct.
* `main.cpp`: Driver program that simulates a batch of hardware signals being loaded into the controller.

## How to Compile and Run
This project can be compiled using any standard C++ compiler (GCC/Clang).

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/yourusername/task-prioritization-engine.git](https://github.com/yourusername/task-prioritization-engine.git)
