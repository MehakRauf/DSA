# My C++ and DSA Learning Journey

## Day 1: Introduction to Pseudocode and Flowcharts
- **Topics Covered**: Pseudocode, Flowcharts
- **Description**: We started with the basics of problem-solving using pseudocode and flowcharts. This day was focused on understanding the logic and planning of algorithms without diving into actual coding.

## Day 2: Basics of C++
- **Topics Covered**: Variables, Data Types, Comments, Type Conversion, Type Casting, Operators
- **Description**: We explored fundamental concepts of C++ programming. This included learning about different types of variables and data types, how to use comments, and the concepts of type conversion and casting. Operators were also covered.

## Day 3: Conditionals and Loops
- **Topics Covered**: Conditionals (if, else if, else, ternary), Loops (while, for, do-while)
- **Description**: The focus was on control flow mechanisms in C++. We learned how to use various conditionals and loops to control the flow of our programs.

## Day 4: Patterns
- **Topics Covered**: Pattern Printing
- **Description**: We practiced generating and printing various patterns using loops. This exercise helped in understanding nested loops and their applications.

---
## Day 5: Functions
- **Topics Covered**: Function Definition and Declaration, Parameters and Arguments, Functions in memory and pass by value.
- **Description**: We covered essential concepts of functions in C++. Topics included function definitions, declarations, prototypes, overloading, parameters, return types, and the scope and lifetime of variables.

## Day 6: Binary Number Systems
- **Topics Covered**: Binary Number Systems, binary to decimal, decimal to binary, 1s complement, 2s complement.
- **Description**: We explored binary number systems, the code for the conversion of decimal to binary and binary to decimal.

## Day 7: Bitwise Opearators, scope of a variable and data type modifiers
- **Topics Covered**: Bitwise Operators, Variable Scope, Data Type Modifiers.
- **Description**: We explored bitwise operators in C++, including their use and how they operate on binary representations of data. The session also covered the scope of variables, explaining how variable visibility and lifetime are affected by their scope. Additionally, we discussed data type modifiers such as signed, unsigned, short, and long, and how they alter the range and storage of data types.

## Day 8: Introduction to Arrays, Array Operations, and Function Parameter Passing by Reference
- **Topics Covered**: Arrays, Array Operations with Loops, Pass-by-Reference, Linear Search, Reverse Array.
- **Description**: On Day 8, we delved into the fundamental concept of arrays in C++. We began with the basics of arrays, including their declaration, initialization, and accessing elements. We then explored how to perform operations on arrays using loops, which included iterating through elements and modifying array content.

We also examined function parameter passing by reference, discussing how passing arrays to functions allows for efficient data manipulation without the overhead of copying.

The session covered linear search algorithms for finding elements within an array and demonstrated how to reverse an array in-place using loops. Through these topics, we gained a comprehensive understanding of array operations and function interactions in C++.

## Day 9: Advanced Array Concepts and STL: Vectors and Memory Management
- **Topics Covered**: Standard Template Library (STL), Vectors, For-Each Loops, Vector Functions, Vector Syntax, Static vs Dynamic Memory Allocation, Vector Memory Layout, LeetCode Problem.
- **Description**:  On Day 9, we expanded our understanding of array management in C++ by exploring the Standard Template Library (STL) with a focus on vectors. We learned about vector syntax, various functions provided by the vector class, and how to efficiently use the for-each loop for iteration. We also covered crucial concepts related to memory management, including static versus dynamic memory allocation and how vectors are managed in memory. To consolidate our learning, we solved a practical problem from LeetCode(single number question), applying our knowledge of vectors .

## Day 10: Subarrays and Kadane's Algorithm
- **Topics Covered**: Subarrays, Brute Force Approach, Maximum Subarray Sum, Kadane's Algorithm.
- **Description**:We focused on subarrays, starting with the brute force approach to generate and print all possible subarrays from a given array O(n^3). We then explored how to calculate the maximum sum of these subarrays O(n^2), emphasizing the inefficiency of the brute force method. Finally, we implemented and explained Kadane's Algorithm, a more efficient way to find the maximum sum of a subarray in linear time O(n).

## Day 11: Pair Sum Problem
- **Topics Covered**: Pair Sum, Brute Force Approach, Optimal Solution.
- **Description**: We delved into the Pair Sum problem, starting with a brute force approach that involves checking all possible pairs in the array, resulting in a time complexity of O(n^2). We discussed the inefficiencies of this method, especially for larger datasets. Next, we explored a more optimal solution which reduces the time complexity to O(n). 

## Day 12: Majority Element
- **Topics Covered**: Majority Element, Brute Force Approach, Optimal Solution, Moore's Voting Algorithm.
- **Description**: We explored the Majority Element problem, beginning with a brute force approach that checks all possible elements to count their occurrences, resulting in a time complexity of O(n^2). We highlighted the inefficiency of this method and its limitations with larger datasets. Next, we introduced a more optimal solution, which reduces the time complexity to O(nlogn) and allows for efficient counting of elements. Finally, we delved into Moore's Voting Algorithm, an elegant solution that achieves O(n) time complexity. This algorithm effectively identifies the majority element by maintaining a candidate and a count, showcasing its clever use of the properties of majority elements.

## Day 13: Time and Space Complexities
- **Topics Covered**: Time Complexity, Space Complexity, Common Time Complexities, Recursion Time Complexity.
- **Description**: We focused on understanding time and space complexities, key concepts in evaluating algorithm efficiency. We covered common time complexities, including 𝑂(1), 𝑂(𝑛), O(nlogn), O(n2), O(n3), O(n!) and O(logn)  discussing their implications on performance. We also examined space complexity, emphasizing how the amount of memory an algorithm uses can impact its feasibility. Additionally, we explored the intricacies of recursion time complexity, analyzing how recursive calls affect overall performance. This session reinforced the importance of both time and space complexities in algorithm design and optimization.

## Day 14: Problem Solving from leet code (50 & 121)
- **Topics Covered**: Solved the follwoing problems: Buy and Sell Stock Problem, Binary Exponentiation using Bits.
- **Description**: In today's session first, we tackled the Buy and Sell Stock Problem, where we analyzed the optimal strategy for determining the maximum profit from stock prices over a given time period. 
Next, we explored Binary Exponentiation using Bits to calculate (x^n) efficiently. We employed the technique of exponentiation by squaring, breaking down the problem to leverage the properties of binary representation, thus significantly reducing the number of multiplications.
Overall, today's session emphasized the importance of translating theoretical knowledge of complexities into practical problem-solving techniques, reinforcing our skills in both evaluating and optimizing algorithms.

## Day 15: Problem Solving from leet code (11. Container With Most Water)
- **Topics Covered**: Solved the follwoing problem: Container With Most Water
- **Description**: In today's session I have solved the problem container with most water using brute force approach O(n^2) and then solved it with the optimal approcah using the two pointer method O(n).

## Day 16: Problem Solving from leet code (238. Product of Array Except Self)
- **Topics Covered**: Solved the follwoing problem: Product of Array Except Self
- **Description**: In today's session I have solved the problem Product of Array Except Self using division method then nested loops method but the time complexity was O(n^2) and then solved it with the optimal approcah using the three different arrays (i.e: suffix, prefix and the array holding the answer) in this case the time complexity was O(n) for space optimization then we refrained ourselves from using these 2 extra arrays instead we stored the suffix in ans array itself ans then calculated the suffix using a variableonly making the space complexity O(1).

## Day 17: Pointers
- **Topics Covered**: Fundamentals of pointers
- **Description**: In today's session we have studied about memort address, pointers, pointer to pointer, dereference operator, null pointer, pass by reference(ie. using pointers or alias(different name)), array pointers, pointer arithmetic(increment, decrement, add/subtract values, subtract pointer, compare) and solved some questions which were about predicting the output.

## Day 18: Binary Seacrh Algorithm
- **Topics Covered**: Binary Seacrh Algorithm (Iterative and Recursive)
- **Description**: In this we have learnt binary search algorithm using iterative approach a optimization to it considering the overflow of integer in worst case (INT_MAX), the recursive apprpoach of the binary search.
The time complexity of binary search is O(logn) and the space complexity is O(1).

## Day 19: Modified Binary Seacrh Algorithm 
- **Topics Covered**: Leetcode Problem no. 33 Solved (Search in rotated sorted array)
- **Description**: In this we have learnt how to use and modify binary search algorithm to solve different questions.

## Day 20: Modified Binary Seacrh Algorithm 
- **Topics Covered**: Leetcode Problem no. 852 Solved (Peak Index In Mountain Array)
- **Description**: In this we have solved this question using linear search O(n) and then optimized it by using binary searc hO(logn).

## Day 21: Modified Binary Seacrh Algorithm 
- **Topics Covered**: Leetcode Problem no. 540 Solved (Single Element in the sorted array)
- **Description**: In this we have solved this question using linear search O(n) and then optimized it by using binary search O(logn).

## Day 22: Modified Binary Seacrh Algorithm 
- **Topics Covered**: Book Allocation Problem
- **Description**: In this we have solved this question using binary search.

## Day 23: Modified Binary Seacrh Algorithm 
- **Topics Covered**: Painter's Partition Problem
- **Description**: In this we have solved this question using binary search.

## Day 24: Modified Binary Seacrh Algorithm 
- **Topics Covered**:  Aggressive Cows Problem
- **Description**: In this we have solved this question using binary search.

## Day 25: Sorting Algos 
- **Topics Covered**:  Selection, Insertion and Bubble Sort
- **Description**: In this we have studied three of the sorting algorithms i.e: Selection, Insertion and Bubble Sort.

## Day 26: Sorting Algos 
- **Topics Covered**:  Dutch National Flag Algorithm
- **Description**: Solved the problem number 75 of LC. Sort Array witj 0s,1s and 2s... Solve it using brute force approach then a optimized approach and lastly optimal solution using DNF algo.

## Day 27: Problem Solving 
- **Topics Covered**:  Merge Two Sorted Array Problem
- **Description**: Solved the problem number 88 of LC that was about merging two sorted arrays.

## Day 28: Problem Solving 
- **Topics Covered**:  Next Permutation Problem
- **Description**: Solved the problem number 31 of LC that was about finding the lexicorgraphically next arr(permutation).

## Day 29: STL  
- **Topics Covered**:  STL -> Standard Template Library
- **Description**: Learnt the stl of vectors along with the vector iterators.

## Day 30: STL  
- **Topics Covered**:  STL -> Standard Template Library
- **Description**: Learnt the stl of list, deque, pair, stack and queue.

## Day 31: STL  
- **Topics Covered**:  STL -> Standard Template Library
- **Description**: Learnt the stl of priority queue, maps, unordered maps, multi maps, set, lower bound and upper bound.

## Current Status
I have recently embarked on my Data Structures and Algorithms (DSA) journey. The topics covered so far have laid a solid foundation in C++ programming, and I am excited to delve deeper into more complex concepts and problems.

Feel free to check back for updates as I continue to expand my knowledge and skills in C++ and DSA!

