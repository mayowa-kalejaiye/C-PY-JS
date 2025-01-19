# Development Environment Setup Guide

This guide provides step-by-step instructions to install GCC, Python, and Node.js on macOS, Windows, and Linux.

---

## Table of Contents

1. [GCC Installation](#gcc-installation-guide)
2. [Python Installation](#python-installation-guide)
3. [Node.js Installation](#nodejs-installation-guide)

---

## GCC Installation Guide

This guide provides step-by-step instructions to install the GNU Compiler Collection (GCC) on macOS, Windows, and Linux.

---

### Contents

1. [macOS](#macos)
2. [Windows](#windows)
3. [Linux](#linux)
4. [Troubleshooting](#troubleshooting)
5. [License](#license)

---

### macOS

#### macOS Prerequisites

- macOS (tested on macOS Ventura and later)
- `Xcode` Command Line Tools (for `clang` and related tools)

#### macOS Installation Steps

1. **Install `Xcode` Command Line Tools** (if not already installed):

   ```bash
   xcode-select --install
   ```

2. **Install Homebrew** (if not already installed):

   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

3. **Install GCC via Homebrew**:

   ```bash
   brew install gcc
   ```

4. **Verify Installation**:

   ```bash
   gcc --version
   ```

### Windows

#### Windows Prerequisites

- `Windows 10 or later`
- `Administrator privileges`

#### Windows Installation Steps

1. **Install MinGW-w64 (Minimalist GNU for Windows)**:
   - Download the installer from [MinGW-w64](https://sourceforge.net/projects/mingw-w64).
   - Run the installer and select the following options:
     - Architecture: `x86_64` (for 64-bit) or `i686` (for 32-bit)
     - Threads: `posix`
     - Exception: `seh` (for 64-bit) or `dwarf` (for 32-bit)
     - Installation folder: Choose a directory (e.g., `C:\mingw-w64`)
2. **Add MinGW-w64 to System PATH**:
   - Open the Start menu, search for "Environment Variables," and click "Edit the system environment variables."
   - In the System Properties window, click "Environment Variables."
   - Under "System variables," find the `Path` variable, click "Edit," and add the `bin` directory of your MinGW-w64 installation (e.g., `C:\mingw-w64\bin`).
3. **Verify Installation**:

   ```bash
   gcc --version
   ```

### Linux

#### Linux Prerequisites

- A Linux distribution (e.g., Ubuntu, Fedora, Debian)
- `sudo` privileges

#### Linux Installation Steps

1. **Update Package List**:

   ```bash
   sudo apt update
   ```

2. **Install GCC**:
   - For Debian/Ubuntu-based systems:

     ```bash
     sudo apt install build-essential
     ```

   - For Fedora:

     ```bash
     sudo dnf install gcc
     ```

   - For Arch Linux:

     ```bash
     sudo pacman -S gcc
     ```

3. **Verify Installation**:

   ```bash
   gcc --version
   ```

### Troubleshooting

- **macOS**: If `gcc` points to `clang`, use `gcc-<version>` (e.g., `gcc-12`) or create an alias.
- **Windows**: Ensure the MinGW-w64 `bin` directory is correctly added to the system PATH.
- **Linux**: If `gcc` is not found, ensure the package manager is updated and try reinstalling.

---

## Python Installation Guide

This guide provides step-by-step instructions to install Python on macOS, Windows, and Linux.

---

### macOS

#### macOS Installation Steps

1. **Install Python via Homebrew**:

   ```bash
   brew install python
   ```

2. **Verify Installation**:

   ```bash
   python3 --version
   ```

### Windows

#### Windows Installation Steps

1. **Download Python**:
   - Visit the official Python website: [python.org](https://www.python.org/).
   - Download the latest version of Python for Windows.
2. **Run the Installer**:
   - Check the box to Add Python to PATH during installation.
   - Click "Install Now."
3. **Verify Installation**:

   ```bash
   python --version
   ```

### Linux

#### Linux Installation Steps

1. **Install Python**:
   - For Debian/Ubuntu-based systems:

     ```bash
     sudo apt install python3
     ```

   - For Fedora:

     ```bash
     sudo dnf install python3
     ```

   - For Arch Linux:

     ```bash
     sudo pacman -S python
     ```

2. **Verify Installation**:

   ```bash
   python3 --version
   ```

---

## Node.js Installation Guide

This guide provides step-by-step instructions to install Node.js on macOS, Windows, and Linux.

---

### macOS

#### macOS Installation Steps

1. **Install Node.js via Homebrew**:

   ```bash
   brew install node
   ```

2. **Verify Installation**:

   ```bash
   node --version
   npm --version
   ```

### Windows

#### Windows Installation Steps

1. **Download Node.js**:
   - Visit the official Node.js website: [nodejs.org](https://nodejs.org/).
   - Download the LTS version for Windows.
2. **Run the Installer**:
   - Follow the installation wizard and accept the default settings.
3. **Verify Installation**:

   ```bash
   node --version
   npm --version
   ```

### Linux

#### Linux Installation Steps

1. **Install Node.js**:
   - For Debian/Ubuntu-based systems:

     ```bash
     curl -fsSL https://deb.nodesource.com/setup_lts.x | sudo -E bash -
     sudo apt install -y nodejs
     ```

   - For Fedora:

     ```bash
     sudo dnf install nodejs
     ```

   - For Arch Linux:

     ```bash
     sudo pacman -S nodejs npm
     ```

2. **Verify Installation**:

   ```bash
   node --version
   npm --version
   ```

### Troubleshooting

- **GCC**: Ensure the correct version is installed and added to the system PATH.
- **Python**: If `python` doesn't work, try `python3` or check your PATH configuration.
- **Node.js**: If `npm` is not found, reinstall Node.js or update your PATH.

### License

This guide is licensed under the MIT License. You are free to use, modify, and distribute this guide. No monetary compensation is required.
