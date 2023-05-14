#include "IPCStation.h"
using namespace foxintango;

IPCStation::IPCStation(){
}

IPCStation::~IPCStation(){
}

void* IPCStation::alloc(const unsigned int& size){
    return 0;
}
int IPCStation::release(const void* address){
    return 0;
}