// sub_08068DE4 at 0x08068DE4 (thumb)

undefined4 sub_08068DE4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0x12) = ('\x04' - *(char *)(param_1 + 0x10)) * '\x10';
    *(undefined *)(param_1 + 0x13) = (&DAT_0833e06e)[*(byte *)(param_1 + 0x10)];
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                         iVar2 + (uint)*(byte *)(param_1 + 0x13) * 0x100);
    if (sVar1 != 0) {
      iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x13) * 0x100);
      *(uint *)(param_1 + 0x58) = iVar2 + (uint)*(byte *)(param_1 + 0x13) * -0x100;
      sub_080AC60C(1,param_1 + 0x54);
      sub_080032EC(0x10d);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

