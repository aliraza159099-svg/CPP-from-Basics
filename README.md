<h1 align="center">⚙️ C++ from Basics</h1>

<p align="center"><b>A chapter-by-chapter journey from my first C++ program to data structures, algorithms and OOP.</b></p>

<p align="center">
  <img src="https://img.shields.io/badge/LANGUAGE-C%2B%2B-00599C?style=flat-square" alt="Language: C++">
  <img src="https://img.shields.io/badge/STATUS-LEARNING%20IN%20PROGRESS-3366CC?style=flat-square" alt="Status: Learning in progress">
  <img src="https://img.shields.io/badge/LEVEL-BEGINNER%20%E2%86%92%20INTERMEDIATE-F07800?style=flat-square" alt="Level: Beginner to Intermediate">
</p>

---

## 📖 About This Repository

This repository is a structured, **chapter-by-chapter log of learning C++** and **Data Structures & Algorithms**. It starts with the absolute basics (variables, input/output, operators) and progressively builds up to loops, patterns, linked lists, stacks, queues, sorting algorithms and object-oriented programming.

Every program is small and focused on a single concept. It is designed to be a clear, browsable reference for anyone learning C++, whether you are following along chapter by chapter or jumping straight to a topic you need.

---

## 🗂️ Repository Structure

```text
CPP-from-Basics/
├── Chapter_01/          Fundamentals: I/O, variables, type casting, operators
│   ├── Basics/
│   ├── Intermediate Basics/
│   └── Advanced basics/
├── Chapter_02/          Conditionals, HCF, GP, number-guessing game
├── Chapter_03/          Loops and number problems
├── Chapter_04/          Pattern printing with nested loops
├── DSA/                 Data Structures & Algorithms
│   ├── Arrays/
│   ├── LinkedList/
│   ├── Doubly Linked List/
│   ├── Stacks/
│   ├── Queue/
│   ├── Searching Algorithms/
│   └── Sorting Algorithms/
├── OOP/                 Object-Oriented Programming
│   └── Inheritance/
└── general.txt          Boilerplate C++ starter template
```

---

## 🎯 Topics Covered

### 🔰 C++ Fundamentals

| Chapter | Focus | What's inside |
|:---:|---|---|
| **01** | Basics | Hello World, variables and naming, area of a circle, user input, sum of two numbers, modulus, type casting, operator precedence, char ↔ ASCII |
| **02** | Conditionals | `if / else`, absolute value, valid triangle, greatest and youngest of three, HCF, GP, composite numbers, random guessing game |
| **03** | Loops | Counting digits, sum of digits, sum of even numbers, reversing a number, ASCII characters |
| **04** | Patterns | Square, triangle, inverted triangle, alphabet and number patterns, odd-number triangle, Floyd's triangle |

### 🧱 Data Structures & Algorithms

| Topic | Implementations |
|---|---|
| **Arrays** | Dynamic array |
| **Singly Linked List** | Traversal, insert at beginning / end / specific position, delete from start / end |
| **Doubly Linked List** | Node creation, insert at head / end, delete node / head, dummy node technique |
| **Stacks** | Array-based stack, stack using a linked list |
| **Queues** | Circular array queue, queue using a linked list (header / source split) |
| **Searching** | Linear search |
| **Sorting** | Bubble sort, insertion sort, merge sort, quick sort |

### 🏛️ Object-Oriented Programming

- Single inheritance
- Multi-level inheritance
- Polymorphism

---

## ⚙️ Getting Started

### Prerequisites

- A C++ compiler with C++17 support or later (**g++**, **Clang** or **MSVC**)
- **Git**

### Clone the repository

```bash
git clone https://github.com/aliraza159099-svg/CPP-from-Basics.git
cd CPP-from-Basics
```

### Compile and run a program

```bash
g++ -std=c++17 Chapter_01/Basics/hello.cpp -o hello
./hello
```

On Windows (PowerShell / CMD):

```bash
g++ -std=c++17 Chapter_01\Basics\hello.cpp -o hello.exe
hello.exe
```

> **Note:** Folder names containing spaces (for example `Doubly Linked List`) must be wrapped in quotes in the terminal.

### Multi-file programs

The queue implementations split code across headers and sources, so compile them together:

```bash
cd "DSA/Queue/Queue Using Linked List"
g++ -std=c++17 main.cpp src/QueueLinked.cpp -Iinclude -o queue
./queue
```

A `.vscode/` configuration is also included for building and debugging in VS Code.

---

## 🧭 Learning Path

If you are new to C++, follow the folders in this order:

1. **Chapter_01**: syntax, variables, input/output
2. **Chapter_02**: decision making
3. **Chapter_03**: loops
4. **Chapter_04**: nested loops and patterns
5. **OOP**: classes and inheritance
6. **DSA**: arrays, linked lists, stacks, queues, searching and sorting

---

## 🗺️ Roadmap

- [ ] Functions and recursion
- [ ] Pointers and references
- [ ] Classes, encapsulation and abstraction
- [ ] Trees and binary search trees
- [ ] Graphs (BFS / DFS)
- [ ] Hashing
- [ ] Binary search
- [ ] STL (vectors, maps, sets, algorithms)

---

## 🤝 Contributing

This is a personal learning repository, but suggestions and improvements are welcome. Feel free to open an issue or submit a pull request.

---

## 👨‍💻 Author

**Ali Raza** · [github.com/aliraza159099-svg](https://github.com/aliraza159099-svg)

⭐ If this repository helps you, consider giving it a star.
