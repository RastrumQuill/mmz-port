// sub_080E5E70 at 0x080E5E70 (thumb)

undefined4 sub_080E5E70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar1 + 0xdd0) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x12) != *(char *)(iVar1 + 0xdcc)) {
      if (*(char *)(param_1 + 0x10) == *(char *)(iVar1 + 0xdcc)) {
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7ce + (uint)*(byte *)(param_1 + 0x10) * 4));
      }
      else {
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7cc + (uint)*(byte *)(param_1 + 0x10) * 4));
      }
      *(undefined *)(param_1 + 0x12) = *(undefined *)(iVar1 + 0xdcc);
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    if (0x100 < (ushort)DAT_020023d0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

