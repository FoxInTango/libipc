#ifndef _IPC_STATION_H_foxintango
#define _IPC_STATION_H_foxintango

#include <libmm/libmm.h>
#include <libcpp/libcpp.h>

namespaceBegin(foxintango)
class foxintangoAPI IPCStation :public mm::Allocator{
public:
    IPCStation();
    ~IPCStation();
    // local://
public:
    virtual void* alloc(const unsigned int& size);
    virtual int release(const void* address);
public:
    template <typename T> T* alloc() { T* t = alloc(sizeof(T)); return  new(t)T(); }
};
namespaceEnd
#endif // !_IPC_STATION_H_foxintango
