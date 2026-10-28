# Brownian Motion: 3D particle simulation in C++

![Brownian Motion Simulation](https://github.com/vizmanos/Main/blob/main/Brownian%20Motion%20Visualization.gif)

A 3D simulation of Argon, Neon and Helium particles moving inside a
closed box, written in C++ with Qt and OpenGL.

To give a bit of context, this project was carried out during the course taught by Prof. Chappelier of EPFL, _Programmation Orientée Objet_ during the Spring Semester of 2024, long before AI was able to do it in a blink of an eye.

I work together with @Nolan Genaine who is now doing his MSc in Applied Mathematics at ETHZ.

## How it works
- The box (the "enceinte") is 100 × 100 × 100 units.
- It contains 300 Argon (red), 300 Neon (green) and 400 Helium (blue)
  particles.
- Every 20 ms, the program measures the time elapsed (`dt`) and moves
  every particle forward by that amount.
- [Explain the physics: how particles bounce on walls, whether they
  collide with each other, what the temperature changes, etc.]
- Optional: Uranium particles (white) show Brownian motion
  (random zig-zag movement). Uncomment `s.initialise<Uranium>(2);`
  in `glwidget.cc` to enable them.

## Controls
| Key | Action |
|---|---|
| Arrow keys | Rotate the view |
| W / S (or Page Up / Page Down) | Zoom in / out |
| A / D | Move left / right |
| R / F | Move down / up |
| Q / E | Tilt the view |
| Home | Reset the camera |
| Space | Pause / resume |
| O / L | Raise / lower the temperature |
| Enter | Restart the simulation |

## Download (macOS)
Get `main_gl.dmg` from the [Releases](https://github.com/vizmanos/simulation/releases) page.

## Build from source
Requires Qt 6 and the Xcode command line tools.
    qmake && make
Then run `open Qt_GL/main_gl.app`.

## Project structure
- `general/`: particles, box and system (no graphics).
- `Qt_GL/`: window, camera and OpenGL drawing.
