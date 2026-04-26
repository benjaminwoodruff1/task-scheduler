#include "PriorityQueue.h"

// Explicitly instantiate the PriorityQueue for the Signal type.
// This allows the compiler to see the template logic and 
// link it even if it's defined in the header.
template class PriorityQueue<Signal>;