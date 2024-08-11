#pragma once
#include <cstdint>
#include <array>
#include "olc_6502.h"

class Bus
{
public:
    Bus();
    ~Bus();
public:
    olc_6502 cpu;

    std::array<uint8_t, 64 * 1024> ram; // Fake RAM

public: 
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};