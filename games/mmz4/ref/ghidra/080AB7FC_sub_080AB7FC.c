// sub_080AB7FC at 0x080AB7FC (thumb)

undefined4 sub_080AB7FC(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)sVar1;
  *(ushort *)(param_1 + 0xc2) = (ushort)((8 - sVar1) * 0x100) >> 3;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

