//
// Created by andrea on 14-Jun-19.
//

#ifndef GOPHERWIN_WINDOWS_SOCKET_H
#define GOPHERWIN_WINDOWS_SOCKET_H

//int windows_socket_runner();

#include "definitions.h"
int windows_socket_runner(struct Configs *configs);
DWORD WINAPI w_sendFile(PVOID args);
DWORD WINAPI handle_request(void *params);
#endif //GOPHERWIN_WINDOWS_SOCKET_H
