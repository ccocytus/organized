# Organized: Elementary Programming in C

Welcome to **Organized**, a C project that simulates organizing a chaotic laboratory filled with various hardware components using basic linked list data structures. This project is a hands-on exercise in elementary C programming, emphasizing memory management, linked lists, and sorting algorithms.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
    - [Shell Commands](#shell-commands)
    - [Example Workflow](#example-workflow)
5. [Compilation](#compilation)
6. [Project Structure](#project-structure)
7. [Contributing](#contributing)
8. [License](#license)

## Project Overview

In this project, you will organize a disordered laboratory workspace by storing and sorting various hardware components using linked lists. The project challenges you to:
- Store and manage hardware items (such as sensors, actuators, and devices).
- Sort the items based on various criteria like type, name, and ID.
- Implement basic shell commands to interact with the workshop.

The project is divided into two main parts:
1. **Storing and Handling Hardware**: Add, delete, and display hardware items.
2. **Sorting Hardware**: Sort hardware items based on different attributes.

## Features

- **Linked List Implementation**: Store and manipulate hardware items in a linked list.
- **Shell Commands**: Implement shell commands (`add`, `del`, `disp`, and `sort`) to manage and organize the hardware.
- **Sorting Algorithms**: Sort hardware items by type, name, or ID with optional reverse order.
- **Error Handling**: Display error messages and exit with code 84 in case of incorrect commands or input.

## Installation

To set up the project on your local machine:

1. Clone the repository:
    ```sh
    git clone https://github.com/ccocytus/organized.git
    cd organized
    ```

2. Compile the project using the provided Makefile:
    ```sh
    make
    ```

## Usage

### Shell Commands

The project provides a simple shell interface where you can enter commands to manage your virtual workshop. The available commands are:

- `add <TYPE> <NAME>`: Add a new hardware item to the workshop.
- `del <ID>`: Delete a hardware item by its ID.
- `disp`: Display the current list of hardware items.
- `sort <TAG> [-r]`: Sort the hardware items by the specified tag (`TYPE`, `NAME`, or `ID`). Use `-r` to reverse the order.

### Example Workflow

Here’s a sample workflow to get you started:

```sh
Workshop » add WIRE usb
WIRE n°0 - “usb” added.

Workshop » add ACTUATOR button, DEVICE recorder
ACTUATOR n°1 - “button” added.
DEVICE n°2 - “recorder” added.

Workshop » disp
DEVICE n°2 - “recorder”
ACTUATOR n°1 - “button”
WIRE n°0 - “usb”

Workshop » sort NAME -r
Workshop » disp
WIRE n°0 - “usb”
DEVICE n°2 - “recorder”
ACTUATOR n°1 - “button”

Workshop » del 1
ACTUATOR n°1 - “button” deleted.


## Compilation

The project is compiled using a `Makefile`. It includes several rules:

- `make`: Compile the project.
- `make clean`: Remove object files.
- `make fclean`: Remove object files and the binary.
- `make re`: Recompile the project from scratch.
