// Welch, Wright, & Morrow, 
// Real-time Digital Signal Processing, 2011
 
///////////////////////////////////////////////////////////////////////
// Filename: main.c
//
// Synopsis: Main program file for frame-based processing using EDMA
//
///////////////////////////////////////////////////////////////////////

#include "DSP_Config.h" 
#include "frames.h" 

int main()
{    

	// initialize EDMA controller 
	EDMA_Init();
	
	// initialize DSP for EDMA operation
  	DSP_Init_EDMA();

    // call to StartUp not needed here

	// main loop here, process buffer when ready 
  	while(1)
  	{
  	}
}


