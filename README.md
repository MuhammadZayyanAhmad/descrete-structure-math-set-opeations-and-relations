# Set Theory Operations

## Description
Set Theory Operations is a C++ program designed to perform basic set operations and analyze properties of relations in discrete mathematics. Users can input sets and relations to check for reflexivity, symmetry, and transitivity, as well as perform various set operations such as intersection, union, difference, and Cartesian product.

## Features
- **Relation Analysis**: Determine if a relation is reflexive, symmetric, and transitive.
- **Set Operations**:
  - Intersection
  - Union
  - Difference
  - Cartesian Product
- User-friendly command-line interface for seamless input and output.

## Requirements
- A C++ compiler (e.g., g++, Visual Studio, or any IDE that supports C++)
- Basic understanding of discrete mathematics and set theory concepts.

## Example Usage

1. Check relations
2. Perform set operations
3. Exit
Enter your choice: 1
Enter the number of relations: 3
Enter 1 (x, y) values:
- Enter value of 'x': 1
- Enter value of 'y': 1
Enter 2 (x, y) values:
- Enter value of 'x': 1
- Enter value of 'y': 2
Enter 3 (x, y) values:
- Enter value of 'x': 2
- Enter value of 'y': 1

Output:
- This set is reflexive
- This set is symmetric
- This set is transitive

1. Check relations
2. Perform set operations
3. Exit
Enter your choice: 2
Enter the size of set A: 3
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3
Enter the size of set B: 3
Enter element 1: 2
Enter element 2: 3
Enter element 3: 4

Output:
- Your set A is: (1, 2, 3)
- Your set B is: (2, 3, 4)
- Intersection: (2, 3)
- Union: (1, 2, 3, 4)
- Difference: (1)
- Cartesian Product: (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 2), (3, 3), (3, 4)
