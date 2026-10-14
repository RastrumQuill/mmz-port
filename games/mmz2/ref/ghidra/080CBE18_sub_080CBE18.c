// sub_080CBE18 at 0x080CBE18 (thumb)

undefined4 sub_080CBE18(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f088);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x80cbe79;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

