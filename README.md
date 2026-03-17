# Object-Oriented Grade Analysis System
**Academic Project | Carthage College**

A modular C++ system designed to manage and analyze student academic data using advanced Object-Oriented Programming (OOP) principles. This project demonstrates the practical application of inheritance, encapsulation, and dynamic memory management.

## 🚀 Key Features
* **Advanced Inheritance:** Implements a `GradeAnalyzer` class that inherits from a base `GradeBook` class to extend functionality without modifying core data.
* **Data Transformation:** Supports multiple "curving" algorithms (multiplication vs. addition) and "capped" data normalization to ensure scores do not exceed 100%.
* **Optimized Storage:** Utilizes the C++ Standard Template Library (STL) `vector` container for dynamic memory management and efficient iteration.
* **Statistical Analysis:** Features automated logic for identifying outliers (highest/lowest grades) and calculating weighted averages.

## 🛠️ Technical Stack
* **Language:** C++
* **Concepts:** Inheritance, Encapsulation, Pass-by-Reference (const), STL Containers.
* **Compiler:** G++ / Clion / VS Code

## 📂 Project Structure
* `GradeBook.h / .cpp`: Defines the base data structure and core I/O operations.
* `GradeAnalyzer.h / .cpp`: Derived class containing specialized analytical logic.
* `main.cpp`: Driver program demonstrating system capabilities.

## 📊 Sample Execution Output
```text
Original GradeBook:
72, 95, 88, 60, 95
Original Average: 82

After Removing Lowest Grade:
New Average: 87.5

After Applying Capped Curve (+20 points, max 100):
New Average: 91

Final Status: Original data preserved via const references.
