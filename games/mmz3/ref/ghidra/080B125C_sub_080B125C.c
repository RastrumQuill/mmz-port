// sub_080B125C at 0x080B125C (thumb)

undefined4 sub_080B125C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0x40;
    sVar2 = sub_080FE124(0x500);
    iVar3 = (int)sVar2 * -*(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = -iVar3;
    }
    *(int *)(param_1 + 0x68) = (int)sVar2 << 1;
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x13) * -0x140 + 0xa0;
    sub_08017700(param_1,0xd700);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(int *)(param_1 + 0x54) <= DAT_020302c0 + 0xd7ff) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (DAT_020302c0 + -0xd800 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

