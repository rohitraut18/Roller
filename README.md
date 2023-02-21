[![C++](https://github.com/rohitraut18/Roller/actions/workflows/actions.yml/badge.svg)](https://github.com/rohitraut18/Roller/actions/workflows/actions.yml)


# Roller

This repository provides a program that rolls a game die, such as the
six-sided dice used in traditional dice game.

# Usage

## Getting Started

Build the image from `Dockerfile` with the command:

`docker build -t cpp-container .`

Once built, run the image:

`docker run -it cpp-container`

...or run it interactively in a shell:

`docker run -it cpp-container sh`

...or run it with a bind mount to the current source code:

`docker run --mount type=bind,source="$(pwd)",target=/usr/src -it cpp-container`

## Manually running the program

Within docker's interactive shell (see above) first build the program:

`make`

Then run it, with an argument that provides the number of faces, such as:

`./Roller 6`

...for a six-sided die.

## Manually checking C++ style

To check for your program's adoption of the style guide, within the docker
container (see above), run **cpplint**:

`cpplint *.cpp *.h`
