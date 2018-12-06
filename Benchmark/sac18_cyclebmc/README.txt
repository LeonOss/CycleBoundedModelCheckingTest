This directory contains the benchmark instances, scripts and executables used
in the experimental evaluation for the paper

    Cycle-Bounded Model Checking of PLC Software
          via Dynamic Large-Block Encoding

submitted to the Software Verification and Testing track at the 33rd
ACM/SIGAPP Symposium on Applied Computing.

The directory structure are as follows:
bin/ 
    contains the binaries and licenses of the tools used in the evaluation.
    For the evaluation, we used the following stable releases:
    - CPAchecker 1.6.1
    - ESBMC 4.5.0
    - NuSMV 2.6.0

programs/st/ 
    contains the benchmarks written in the PLC programming language ST and
    the specifications, in a format suitable for the Arcade.PLC frontend

scripts/ 
    contains scripts for running the benchmarks

results/ 
    is the output directory containing results of running the benchmarks

programs/cpachecker/ 
    contains the benchmark instances translated to C, in a format suitable
    for CPAchecker.
    These files can be re-generated from the ST files in programs/st/
    by running the script "run-experiments.sh" with TRANSLATE_PROGRAMS=yes.

programs/esbmc/ 
    contains the benchmark instances translated to C, in a format suitable
    for ESBMC.
    These files can be re-generated from the ST files in programs/st/
    by running the script "run-experiments.sh" with TRANSLATE_PROGRAMS=yes.

programs/nusmv/ 
    contains the benchmark instances translated to SMV, in a format suitable
    for NuSMV.
    These files can be re-generated from the ST files in programs/st/
    by running the script "run-experiments.sh" with TRANSLATE_PROGRAMS=yes.


For reproducing the results of the paper, the script "run-experiments.sh"
should be run from the directory containing this file.

Finally, please note that: THE EXECUTABLES PROVIDED HERE ARE AVAILABLE SOLELY
FOR THE PURPOSE OF REPRODUCING THE EXPERIMENTS OF THE ABOVE PAPER. ANY OTHER
USE OF THEM IS NOT ALLOWED WITHOUT AN EXPLICIT PERMISSION FROM THE AUTHORS.
