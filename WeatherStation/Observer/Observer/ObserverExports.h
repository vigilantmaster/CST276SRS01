#pragma once
#ifdef OBSERVER_EXPORTS
#	define OBSERVER_API __declspec(dllexport)
#else
#	define OBSERVER_API __declspec(dllimport)
#endif