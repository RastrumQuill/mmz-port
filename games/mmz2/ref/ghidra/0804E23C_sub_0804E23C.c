// sub_0804E23C at 0x0804E23C (thumb)

undefined4 sub_0804E23C(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  pbVar2 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar2] * 8;
  *pbVar2 = *pbVar2 + 1;
  if (*(int *)(param_1 + 0x5c) < 0x200) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 8;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 < *(int *)(param_1 + 0xc4) + -0x7800) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar1;
    if (*(int *)(param_1 + 200) + 0x7800 < iVar1) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

