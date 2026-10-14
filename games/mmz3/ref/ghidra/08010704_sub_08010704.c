// sub_08010704 at 0x08010704 (thumb)

undefined4 sub_08010704(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x74c;
    *(undefined4 *)(param_1 + 0x50) = 0x58;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

