// header.h : include file for standard system include files,
// or project specific include files
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <stdio.h>
extern FILE* pSTDIN;
extern FILE* pSTDOUT;
extern FILE* pSTDERR;
__inline static
void InitConsole()
{
	AllocConsole();
	pSTDIN = freopen("CONIN$", "rb", stdin);
	pSTDOUT = freopen("CONOUT$", "wb", stdout);
	pSTDERR = freopen("CONOUT$", "rb", stderr);
}
__inline static
void ExitConsole()
{
	getchar();

	if (pSTDERR)
	{
		fclose(pSTDERR);
	}
	if (pSTDOUT)
	{
		fclose(pSTDOUT);
	}
	if (pSTDIN)
	{
		fclose(pSTDIN);
	}
	FreeConsole();
}
