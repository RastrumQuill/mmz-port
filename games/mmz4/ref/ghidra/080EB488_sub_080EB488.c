// sub_080EB488 at 0x080EB488 (thumb)

undefined4 sub_080EB488(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202eda0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80eb501;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(int *)(iVar1 + 0x28) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0xbd) = (char)*(undefined2 *)(param_1 + 0xa4);
    *(byte *)(iVar1 + 0xbe) = *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return in_lr;
}

