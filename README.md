# C Calculator
A really simple calculator app made with c.

## Using the calculator
Assuming you don't already have GCC and Make, and you are using Windows, open PowerShell and paste the following command in:
```Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))``` This will install Chocolatey on your computer. Then run ```choco install make mingw``` to install Make and GCC. Finally clone this repository, open the project folder and run ```make```.
