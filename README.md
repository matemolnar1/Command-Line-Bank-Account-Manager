# 🏦 C Bank Account Manager (OOP in C)

An interactive command-line banking application written in C. 

This project was built to demonstrate **Object-Oriented Programming (OOP) principles within a purely procedural language**. It utilizes strict memory management and the **Opaque Pointer (PIMPL) idiom** to enforce encapsulation, hiding the internal data structures from the main application.

## ✨ Features
* **Encapsulation:** The `Account` struct's data (like the balance) is completely hidden from `main.c`. It can only be modified through dedicated "methods" (functions).
* **Dynamic Memory Management:** Custom "constructor" and "destructor" functions (`account_create` and `account_destroy`) handle safe memory allocation and prevention of memory leaks.
* **Interactive CLI:** A simple text-based interface to check balances, deposit funds, and withdraw funds securely.
* **Input Validation:** Prevents negative deposits and overdrawing.

## 📁 File Structure
* `account.h`: The "Public Interface." Defines the capabilities of an Account without revealing its internal variables.
* `account.c`: The "Private Implementation." Contains the actual struct definition and the logic for the banking
