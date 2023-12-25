<div align="center">

<a href="https://github.com/corsum/rhaddon"><img src="branding\logo-white.png" width="17%"></img></a>
> :warning: Current version of **Rhaddon** is **UNFINISHED** & read-only due to its early development.
### High-level procedural programming language 
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.8216963.svg)](https://doi.org/10.5281/zenodo.8216963)
![STATUS](https://img.shields.io/badge/Status-Pre_Alpha-blue)
![C](https://img.shields.io/badge/Made_with-C-blue)
</div>

 ## Rhaddon - Introduction
 **Rhaddon** is a C-like high-level, open-source procedural programming language, it is mainly intended for users who value execution speed and minimalism. For better use it contains built-in garbage collector with automatic memory management to prevent segmentation fault or other similiar issues.

## Installation
See <a href="https://github.com/corsum/rhaddon/blob/main/INSTALLATION.md">INSTALLATION.md</a>

## Basic syntax
**main.rh**
```
>>> #include <main.rhm>
>>> int main(void){
>>>   scons -- "Hello World!";
>>>   return 0;
}
```
### Compile existing code
```c
$ rhad -cm main main.rh
```
### Run compiled code
```c
$ rhad -r main
```

## Contributors
![GitHub Contributors Image](https://contrib.rocks/image?repo=corsum/rhaddon)

## Contact
- Twitter: [@popeqkacper](https://twitter.com/popeqkacper) 
- Reddit : [kacperaan](https://reddit.com/u/kacperaan)
- Author: [Kacper Popek](https://github.com/kacperaan)

## License
<a href="LICENSE">GNU General Public License v3.0</a>

## Wiki
<a href="https://github.com/corsum/rhaddon/wiki">Rhaddon Wiki</a>
