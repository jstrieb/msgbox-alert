# Windows MessageBox Alert

This is a tiny utility for creating simple message box alerts. It is
particularly useful for alerting the user to the completion of a long-running
job on the command line.

Though it was written to be used primarily from within Windows Subsystem for
Linux, it should work equally well if invoked via `cmd` or PowerShell.

Rather than using existing notification libraries, a message box was chosen
because of its simplicity to program and call.

# Installation

<details>
<summary>Click here to view installation details</summary>
The following steps are assumed to be run from within a Windows Subsytem for
Linux Bash environment with Microsoft Visual C Compiler (MSVC) executables on
the `PATH`. In particular, compilation is done with `cl.exe`, but would
probably work with Clang or MinGW if properly linked against `User32.lib`.

- Clone the repository.

  ```bash
  git clone git@github.com:jstrieb/msgbox-alert && cd msgbox-alert
  ```

- To compile the code and automatically add an alias to the current user's
  `~/.bashrc` file, run:

  ```bash
  make install
  ```

- By default, the program is aliased as `alert-win`. To use it, call

  ```bash
  alert-win This is a test
  ```

- To compile without adding an alias to the `~/.bashrc` file, simply call

  ```bash
  make
  ```
</details>

# Usage

To use, call the executable with the text to be printed as command line
arguments. If aliased, call the alias instead of the executable in the current
directory. For example:

```bash
./alert.exe This is a test
```

It is also designed to be run after long-running tasks have finished
completing.

```bash
sleep 180 && ./alert.exe Long-running task complete.
```
