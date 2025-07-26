# 🔐 C++ Password Manager (Console-Based)

A lightweight, beginner-friendly terminal password manager built in C++.

---

## ✅ Current Features

- ➕ Add new password entries (Site, Username, Password)
- 📄 View all saved entries
- 💾 Store entries in a simple text file (`passwords.txt`)

---

## 🛠️ Planned Features

- 🔐 **Encryption**: Use AES (via Crypto++) to encrypt saved passwords
- 🔑 **Master Password**: Require a login before using the app
- 🕶️ **Password Masking**: Hide password input while typing (with `*`)
- 🧼 **Usability Improvements**:
  - Clear screen between actions
  - Press Enter to continue after each operation
  - Clean and modern terminal UI
- 🧹 **Delete/Search** entries
- 📁 Organize code into multiple files and functions
- 📦 Add `.gitignore` to exclude sensitive files like `passwords.txt`, `key.bin`, etc.

---

## 📂 File Structure

📁 password-manager/
├── main.cpp
├── passwords.txt
├── README.md
└── (key.bin and encryption files in future)


---

## 🚀 Getting Started

### 💻 Requirements

- C++ Compiler (e.g. g++, MSVC)
- Git Bash or any terminal
- (Optional) [Crypto++ Library](https://www.cryptopp.com/) for encryption features

### 🧪 Compile & Run

```bash
g++ main.cpp -o password_manager
./password_manager
