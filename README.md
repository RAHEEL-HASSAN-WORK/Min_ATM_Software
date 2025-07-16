# 🏦 ATM Simulator in C++

This project is a console-based ATM simulator written in **C++**, featuring user authentication, MPIN management, and standard ATM operations such as withdrawals, deposits, and balance checking. It also includes file handling to persist user MPINs securely across sessions.

---

## 📋 Features

✅ 20 Predefined Users
✅ Hidden MPIN Input (like real ATMs)
✅ File-based MPIN saving and loading (`mpins.txt`)
✅ Secure MPIN update system
✅ ATM Operations:

* Fast Cash
* Withdraw Money
* Deposit Money
* Check Balance
* Change MPIN
* Exit option

---

## 🧑‍💻 How It Works

1. **User Login**

   * Enter your username (e.g., `raheel`)
   * Enter your 4-digit MPIN (input is hidden with `*`)
2. **Main Menu Options**

   * `1. Fast Cash`: Quick withdrawal
   * `2. Withdraw Money`: Custom withdrawal
   * `3. Deposit Money`: Add money to balance
   * `4. Change MPIN`: Update your password
   * `5. Check Balance`: Show current balance
   * `6. Additional Options`: Placeholder
   * `7. Exit`: Exit the program


---

## 📂 File Structure

```
ATM-Project/
│
├── mpins.txt         # Stores user MPINs
├── main.cpp          # Core C++ source code
└── README.md         # This file
```

---

## 💾 MPIN Management

* MPINs are loaded from `mpins.txt` at startup.
* If the file does not exist, default MPINs are used.
* Any changes (like MPIN update) are saved back to the file.

---

## 🚀 How to Run

1. **Compile the program** (if using g++):

   ```bash
   g++ main.cpp -o atm
   ```

2. **Run the executable**:

   ```bash
   ./atm
   ```

3. **Login using a valid username and MPIN** (e.g., `admin` → `1111`).

---

## 👤 Sample Users

| Username | MPIN |
| -------- | ---- |
| raheel   | 4567 |
| admin    | 1111 |
| user1    | 1234 |
| guest    | 9999 |
| zain     | 1515 |

📌 *You can view or edit more in `mpins.txt`.*

---

## 🛡️ Security Features

* Input masking for MPINs
* File handling instead of hardcoded credentials
* MPIN update and persistence system

---

## 🧠 Concepts Used

* File I/O (`ifstream`, `ofstream`)
* Arrays and strings
* Conditional and loop structures
* `getch()` for hidden input
* Modular programming with functions

---

## 🔧 Requirements

* C++ Compiler (g++, Dev-C++, etc.)
* Windows (for `conio.h`, or use platform-specific replacement for Linux/Mac)

---

## 📌 Notes

* **Platform-specific:** `conio.h` and `getch()` are Windows-specific. Replace with `termios.h` on Unix-based systems.
* **No real banking transactions involved.** This is a simulation.

---

## ✨ Credits

Created by **Raheel Hassan**
Feel free to use, modify, or extend the project for educational purposes.

---

