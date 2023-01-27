cmake_minimum_required(VERSION 3.24)
project(OnlineTicketSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineTicketSystem main.cpp user.h show.h showSeat.h ticket.h creditCardValidation.h)
