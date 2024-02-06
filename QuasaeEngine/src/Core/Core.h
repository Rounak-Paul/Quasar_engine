/*
-------------------------------------------------------------------------------
Application	:		Quasar Engine

Author		:		Rounak Paul
Email		:		paulrounak1999@gmail.com
Date		:		7th Feb 2024

Description	:		Quasar Core classes exposed to User. Set class as 
					QUASAR_API and include in this file to give access to user 
					space.
-------------------------------------------------------------------------------
*/

#pragma once

#ifdef QS_BUILD_DLL 
	#define QUASAR_API __declspec(dllexport) 
#else 
	#define QUASAR_API __declspec(dllimport) 
#endif
