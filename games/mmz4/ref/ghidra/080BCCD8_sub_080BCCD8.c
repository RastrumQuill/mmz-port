// sub_080BCCD8 at 0x080BCCD8 (thumb)

undefined4 sub_080BCCD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x77;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bcd41;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar1 + 0x11) = (char)param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_3;
  }
  return in_lr;
}

