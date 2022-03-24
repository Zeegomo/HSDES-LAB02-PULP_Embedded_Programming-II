# HSDES-LAB02: Embedded Programming on PULP - Part II

The goals of this lab session are:
1) Low-level SW profiling and analys of code performance. 
2) Profiling Tools (System Traces and [VCD](https://en.wikipedia.org/wiki/Value_change_dump) Traces)
3) Introduction to PMSIS low-level SW libraries
4) PMISIS BSP: dealing with external RAM devices using uDMA and the peripherals (i.e. HyperBus)
5) Double Buffering optimization exploiting the uDMA

A final assignment is described [here](https://github.com/EEESlab/HSDES-LAB02-PULP_MCU_Performance/blob/main/lab_assignment/README.md)


## Getting Started
Open a shell and clone the repository with the sample code. 
Remember also to source the PULP-SDK configuration script. 
~~~~~shell
source /pulp/sourceme.sh
cd <working_dir>
git clone https://github.com/EEESlab/HSDES-LAB02-PULP_Embedded_Programming-II.git
~~~~~

### References
* [PULP Datasheet](https://github.com/pulp-platform/pulp/blob/master/doc/datasheet.pdf)
* [GVSOC](https://greenwaves-technologies.com/manuals/BUILD/GVSOC/html/index.html)
* [PMISIS APIs](https://greenwaves-technologies.com/manuals/BUILD/PMSIS_API/html/index.html)
* [PMISIS BSP](https://greenwaves-technologies.com/manuals/BUILD/PMSIS_BSP/html/index.html)
* [System Traces](https://gvsoc.readthedocs.io/en/latest/system_traces.html)

