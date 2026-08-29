# Lab 01 — NOR Gate Design & Simulation in Cadence
 
## Objective
Design a two-input CMOS NOR gate at the transistor level in Cadence Virtuoso, create a symbol view, build a testbench with pulse sources on the inputs, and verify correct logical behavior through transient simulation using the Spectre simulator.
 
## Tools
- Cadence Virtuoso Schematic Editor XL
- Cadence Virtuoso Symbol Editor
- Cadence ADE Assembler / ADE Explorer
- Spectre Simulator
- 45nm CMOS technology library (g45p1svt PMOS, g45n1svt NMOS)
## Circuit
CMOS NOR gate implemented with two PMOS transistors in series (pull-up network) and two NMOS transistors in parallel (pull-down network).
 
See `schematics/` for:
- Transistor-level schematic
- Symbol view
- Testbench schematic
## Simulation
Transient analysis (0–400ps) run in ADE Assembler with Spectre. Voltage nodes Va, Vb, and Vout were probed.
 
See `waveforms/` for the transient response plot.
 
## Result
 
| Va | Vb | Vout |
|----|----|------|
| 0  | 0  | 1    |
| 0  | 1  | 0    |
| 1  | 0  | 0    |
| 1  | 1  | 0    |
 
Output matches expected NOR logic — HIGH only when both inputs are LOW. Objective achieved with 0 simulation errors/warnings.
 
## Report
Full report: `CSE_450_Lab_Report_NOR_Gate.pdf`
