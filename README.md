# sm-rand

A Sourcemod extension providing natives for generating random numbers using Rust's `rand` crate.

## Features

*   `native int GetRandomIntEx(int nmin, int nmax)`: Returns a random integer between `nmin` and `nmax` (inclusive). If `nmin` is greater than `nmax`, the values are automatically swapped.
*   `native float GetRandomFloatEx(float nmin, float nmax)`: Returns a random float between `nmin` and `nmax` (inclusive). If `nmin` is greater than `nmax`, the values are automatically swapped.

## Dependencies

*   Sourcemod 1.11 or later.

## Installation

1.  Download the latest release package (`rand-*.zip`) from the releases page.
2.  Extract the contents of the zip file into your server's `addons/sourcemod` directory.

## Usage

```pawn
#include <sourcemod>
#include <rand> // Make sure rand.inc is in your scripting/include directory

public void OnPluginStart()
{
    int randomInt = GetRandomIntEx(1, 100);
    PrintToServer("[sm-rand] Random Integer: %d", randomInt);

    float randomFloat = GetRandomFloatEx(0.0, 1.0);
    PrintToServer("[sm-rand] Random Float: %f", randomFloat);
}
```
