Using the ONLP Scaffold Generator
---------------------------------

Step 1: Create platform directory for new system
     mkdir platforms/system-manufacturer/arch/ONIE-ID
Step 2: Go to system directory and run 
     onlpgen.sh ONIE-ID short-name (i.e. model number, AS5512, LY2R)

Example:

A new platform called x86_64-onl-on8812-x48 is being added

    mkdir -p platforms/onl/x86_64/x86_64-onl-1gb-x48
    cd platforms/onl/x86_64/x86_64-onl-on8812-x48
    onlpgen.sh x86_64-onl-on8812-x48 on8812
