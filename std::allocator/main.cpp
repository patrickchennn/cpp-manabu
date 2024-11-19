#include <iostream>
#include <memory>

int main() {
    // Create an allocator for int types
    std::allocator<int> alloc;

    // Allocate space for 5 integers
    int* p = alloc.allocate(5);

    // Construct values at the allocated memory
    for (int i = 0; i < 5; ++i) {
        alloc.construct(p + i, i * 10); // Construct elements with values 0, 10, 20, 30, 40
    }

    // Print the values
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // Destroy the constructed objects
    for (int i = 0; i < 5; ++i) {
        alloc.destroy(p + i);
    }

    // Deallocate the memory
    alloc.deallocate(p, 5);

    return 0;
}
