// sub_080BF528 at 0x080BF528 (thumb)

undefined4 sub_080BF528(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar1 = 0x100 - *(short *)((int)&DAT_08128c10 +
                            (((uint)*(byte *)(param_1 + 0x12) * -2 + 0x80) * 0x1000000 >> 0x17));
  *(short *)(param_1 + 0x50) = (short)iVar1;
  iVar1 = iVar1 * -0x2000;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (iVar1 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

