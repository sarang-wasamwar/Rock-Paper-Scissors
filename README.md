# Rock Paper Scissors (Beginner-Friendly)

Rock Paper Scissors is a clear, beginner-friendly, open-source C++ console game. It is designed to be straightforward and self-contained with no frameworks or libraries required.

This project was created specifically to give first-year (FY) students hands-on experience with real-world open-source contributions.

## Table of Contents

- Project Overview
- Tech Stack
- Features
- Folder Structure
- Getting Started
- How to Contribute
- Contact
- License

## Project Overview

Rock Paper Scissors is part of a student chapter open-source event. The core purpose of the project is to provide a reliable sandbox where contributors can pick up issues, fix bugs, add new features, and submit pull requests in a structured environment.

Every great developer starts with their first contribution, and this project serves as a starting point.

## Tech Stack

Rock Paper Scissors relies purely on C++ fundamentals:

- C++17: Console input/output, functions, and control flow
- Standard Library: Strings and basic utilities

By avoiding complex frameworks, build tools, or package managers, the application can be compiled and run on any machine with a C++ compiler.

## Features

- Player chooses Rock, Paper, or Scissors
- Computer makes a move
- Winner is shown after each round
- Score is displayed
- Multiple rounds supported

## Folder Structure

The project follows a standard and modular structure:

```
/
├── main.cpp
├── game.cpp
├── game.h
└── README.md
```

## Getting Started

To run the application locally on your machine:

1. Clone the repository to your local machine using Git.
2. Navigate to the project directory.
3. Compile the program using a C++ compiler.
4. Run the executable.

### Compile

```bash
g++ -std=c++17 -O2 -Wall -Wextra main.cpp game.cpp -o rps
```

### Run

```bash
./rps
```

## How to Contribute

Contributions are welcome. Please refer to the TODO comments in the code for open issues, contribution guidelines, and beginner-friendly fixes.

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes in the appropriate files.
4. Test your changes locally to ensure the app works as expected.
5. Commit your changes with a descriptive message.
6. Submit a Pull Request summarizing the changes and referencing any related issues.

## Contact

Name: Krushnakant Patil

Email: krushnakant.patil24@pccoepune.org

## License

This project is licensed under the MIT License.
