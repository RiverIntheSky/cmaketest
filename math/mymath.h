#ifdef __cplusplus
extern "C" {
#endif
    
#if defined(_WIN32)
    //  Microsoft
#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)
#elif __GNUC__ >= 4
    //  GCC
#define EXPORT __attribute__((visibility("default")))
#define IMPORT
#else
#define EXPORT
#define IMPORT
#pragma warning Unknown dynamic link import/export semantics.
#endif
    
EXPORT extern int add(int a, int b);
    
#ifdef __cplusplus
}
#endif
