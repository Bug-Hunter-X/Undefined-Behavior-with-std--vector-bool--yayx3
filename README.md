# std::vector<bool> Pitfalls in C++

This repository demonstrates a common, yet often subtle, error encountered when using `std::vector<bool>` in C++.  `std::vector<bool>` is a specialized version of `std::vector` that uses a bit-packed representation to save memory.  However, this specialization sacrifices certain properties of standard vectors, leading to potential undefined behavior.

The primary issue stems from the fact that `std::vector<bool>` doesn't store boolean values as individual objects. This affects how you iterate through, access elements via pointers or iterators, and perform other operations.  Many operations that work seamlessly with other vector types might not work correctly with `std::vector<bool>`.

**Example:**
Attempting to use iterators or pointers with `std::vector<bool>` is problematic. Unexpected results can be seen due to the bit-packed representation. Additionally, the return type of `operator[]` is not a reference, further complicating element modifications.

**Recommended Solution:**
Avoid using `std::vector<bool>` unless absolutely necessary.   Consider using `std::vector<char>` and storing 0/1 as alternatives. Using `std::vector<uint8_t>` is generally safer if bit manipulation is required.

This simple repository offers insights into this subtle yet problematic behavior, assisting developers in avoiding common pitfalls associated with `std::vector<bool>`. 