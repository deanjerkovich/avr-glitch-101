# avr-glitch-101
the most basic introduction to performing a power glitch attack

### Intro
The basic idea here is to set up some inexpensive hardware and watch what happens when the power supply into the AVR (on the Arduino) is intentionally interrupted. Some simple code that performs arithmetic is loaded on to the AVR and it communicates back to the host computer over serial. The ground wire to the AVR is running via a transistor which is switchable by an FPGA. The FPGA has a simple piece of verilog which drops an output to 0 for a small number of clock ticks every 20 million or so clock ticks (a bit over a second of time, given the 12MHz clock). The net effect is that the AVR loses power for very small factions of time, causing noticable disruptions in arithmetic and logic without triggering the brown-out detection or causing a full reset.

### Requirements
* An icestick FPGA (I got mine for $21 plus minimal shipping from [mouser](http://www.mouser.com/new/Lattice-Semiconductor/lattice-icestick-kit/))
* An Arduino Uno target board (see [sparkfun](https://www.sparkfun.com/products/11021)) and [IDE](https://www.arduino.cc/en/main/software)
* Some connecting wires and a transistor
* The [icestorm](http://www.clifford.at/icestorm/) open source FPGA toolchain (in a VM is fine)

### Wiring it up
See the [blog post](https://flawed.net.nz/2017/01/29/avr-glitch-modifying-code-execution-paths-using-only-voltage/).

### Results
Todo

