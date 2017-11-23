#ifndef BUFFER_H
#define BUFFER_H

#include <vector>
#include <fstream>

#include <iostream>
#include "structs.h"

class Buffer
{

private:

  int bufferPosition;

public:

  std::vector<BYTE> FileData;

  std::vector<BYTE> ReadFile(const char* Filename);

  std::vector<BYTE> GetSubset(int &Offset);

  void SetBufferPosition(int NewPosition);

  int GetBufferPosition();

  void FixChecksum(bool save, int atom_rom_checksum_offset);

  bool SetValueAtPosition(const std::wstring &text, int bits, int position, bool isFrequency);

  bool SetValueAtPosition(int value, int bits, int position, bool isFrequency);

  int GetValueAtPosition(int bits, int position, bool isFrequency);

};


#endif /* end of include guard: BUFFER_H */
