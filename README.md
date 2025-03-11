# Organized - C Project

## Description
This project involves developing a system to manage and organize various electronic components in a virtual workshop. The goal is to efficiently store, sort, and handle different types of hardware using linked lists in C. The project emphasizes essential C programming concepts such as memory management, data structures, and algorithmic sorting. It provides an interactive shell interface to facilitate hardware management.

## Features
The **Organized** program includes the following functionalities:

- **Add Hardware**: Register new components with a unique ID and category.
- **Delete Hardware**: Remove hardware items from the inventory.
- **Display Inventory**: Show all stored materials in the workshop.
- **Sort Hardware**: Organize components based on different attributes (type, name, ID) with optional reverse sorting.

## Installation
To compile and run the project, follow the directory structure and commands below:

### Folder Structure
```
/include/
  ├── shell.h          # Header file for shell function declarations
/src/
  ├── del_option.c          # Entry point of the program
  ├── add_option.c.c      # Implements add, delete, display, and sort functions
  ├── organized.c      # Implements add, delete, display, and sort functions
  ├── sort.c         # Utility functions for linked lists and validation
  ├── bonus.c         # Implements -h functions
libshell.a      # Provided shell library
Makefile             # Compilation rules
README.md           # This file
```

### Compilation
Clone the repository:
```sh
git clone https://github.com/jawedlahrouri/organized-epitech.git
cd organized
```
Compile the project:
```sh
make
```
Run the program:
```sh
./organized
```

## Example Usage
Once the program is running, enter commands to interact with the system:

```sh
Workshop ➜ add WIRE usb
WIRE n°0 - "usb" added.

Workshop ➜ add ACTUATOR button, DEVICE recorder
ACTUATOR n°1 - "button" added.
DEVICE n°2 - "recorder" added.

Workshop ➜ disp
DEVICE n°2 - "recorder"
ACTUATOR n°1 - "button"
WIRE n°0 - "usb"

Workshop ➜ sort NAME -r
Workshop ➜ disp
WIRE n°0 - "usb"
DEVICE n°2 - "recorder"
ACTUATOR n°1 - "button"
```

## Technical Details
This project utilizes linked lists to dynamically store and manage hardware components. The sorting feature allows sorting by **type, name, or ID** in ascending or descending order. The shell interface integrates with `libshell.a`, enabling command execution.

### Key Functions
- `add(void *data, char **args)`: Adds a new hardware component.
- `del(void *data, char **args)`: Deletes a hardware component by ID.
- `disp(void *data, char **args)`: Displays the inventory.
- `sort(void *data, char **args)`: Sorts the stored hardware components.

## Contributors
This project was developed as part of an EPITECH programming exercise.

