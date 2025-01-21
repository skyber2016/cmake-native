#pragma once
#ifdef _WIN32
#ifdef CORE_EXPORTS
#define DLL_API __declspec(dllexport)  // Xuất symbol khi build thư viện
#else
#define DLL_API __declspec(dllimport)  // Nhập symbol khi sử dụng thư viện
#endif
#else
#define DLL_API
#endif