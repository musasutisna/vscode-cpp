<h1 align="center">VSCode C++ Project Starter</h1>
<p align="center">
Project template to start coding in the visual code editor for Linux users
</p>

## Prerequisites
- Install [Visual Code](https://code.visualstudio.com/download) first if you dont have it in your machine
- Install the [C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools). You can install the C/C++ extension by searching for `c++` in the Extensions view `(Ctrl+Shift+X)`. 

## Ensure GCC is installed
Although you'll use VS Code to edit your source code, you'll compile the source code on Linux using the g++ compiler. You'll also use GDB to debug. These tools are not installed by default on Ubuntu, so you have to install them. Fortunately, that's easy.

First, check to see whether GCC is already installed. To verify whether it is, open a Terminal window and enter the following command:

    gcc -v
If GCC isn't installed, run the following command from the terminal window to update the Ubuntu package lists. An out-of-date Linux distribution can sometimes interfere with attempts to install new packages.

    sudo apt-get update
Next install the GNU compiler tools and the GDB debugger with this command:

    sudo apt-get install build-essential gdb

## Structure Information
| Location | Description |
|:--|:--|
| .vscode | Visual code configuration |
| include | header files are contains header that need to be exposed publicly |
| src | all the source code and the header files that are for internal use only |
| libs | the third party libraries that are need by your project |
| bin | which are the actual executable code for debug and release |
