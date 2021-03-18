#include "FakeConsole.h"

#include "../Platform/Windows/FakeWindowsConsole.h"
#include "../Platform/Unix/FakeUnixConsole.h"

Ref<FakeConsole> FakeConsole::Create()
	{
#ifdef PLATFORM_WINDOWS
	return CreateRef<FakeWindowsConsole>();
#elif PLATFORM_LINUX
	return CreateRef<FakeUnixConsole>();
#elif PLATFORM_MAC
	return CreateRef<FakeUnixConsole>();
#endif
	}

