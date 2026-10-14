// sub_080AB844 at 0x080AB844 (thumb)

undefined4 sub_080AB844(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  iVar3 = (int)*(short *)((int)&DAT_08128c10 + ((uint)((0x10 - iVar3) * 0x4000000) >> 0x17));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  sVar1 = *(short *)((int)&DAT_08128c10 + ((uint)((iVar3 >> 2) << 0x18) >> 0x17));
  sVar2 = sVar1 * 3 + 0x100;
  *(short *)(param_1 + 0xc0) = sVar2;
  *(short *)(param_1 + 0xc2) = sVar2;
  *(char *)(param_1 + 0xbd) = (char)((int)sVar1 / 2) + -0x80;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

