# vscode-qt-vcpkg-template

[![Windows Build](https://github.com/upupming/vscode-qt-vcpkg-template/actions/workflows/windows.yml/badge.svg)](https://github.com/upupming/vscode-qt-vcpkg-template/actions/workflows/windows.yml)

## Template usage

> This is a template for Qt Widget. If you are looking for a QML template, please see [https://github.com/upupming/vscode-qt-qml-vcpkg-template](https://github.com/upupming/vscode-qt-qml-vcpkg-template).

We use the manifest mode `vcpkg.json` to declare dependencies, just like `package.json` for npm. Clone the repo with vcpkg submodules using:

```bash
git clone --recurse-submodules https://github.com/upupming/vscode-qt-vcpkg-template.git
```

Or run the following command after cloned the repo:

```bash
git submodule update --init
```

## Advantages

- Debugging, Intelligence & Code formatting on VSCode is much more faster
- vcpkg will copy dependencies' dll and deploy qt dlls automatically
- Automatically build Release zip with GitHub Actions.
- Cache all packages and get faster package installing speed on CI.
- Use Ninja generator for faster build time, just as faster as the Qt Creator.

## Getting started

1. Clone the repo.

    ```bash
    git clone --recurse-submodules https://github.com/upupming/vscode-qt-vcpkg-template.git
    ```

2. Install latest visual studio 2019 with msvc compiler.
3. Global search `vscode-qt-vcpkg-template` and `Microsoft Visual Studio/2019/Community` etc., ans replace them according your own condition.
4. Run the [`CMake Configure` task](.vscode/tasks.json) or CMake Tools' Configure command.
5. Change the `main.cpp` and use `F5` or debug button on the left side bar to see the results. VSCode will run CMake to build the exe on each debug session.
    - We use [`CMake Build` task](.vscode/tasks.json) to build the exe. CMake Tools' Build command (`F7`) is the same.
6. Run the [`release.bat`](release.bat) to build and get a release zip file at any time.
