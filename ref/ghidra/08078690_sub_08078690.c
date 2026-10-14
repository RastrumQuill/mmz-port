// sub_08078690 at 0x08078690 (thumb)

undefined4
sub_08078690(undefined4 param_1,undefined4 *param_2,byte param_3,undefined4 param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x807880d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f92;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe9;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(int *)(iVar1 + 0x54) = (short)(&DAT_080c8e24)[param_3 + 0x40] * 3;
    *(int *)(iVar1 + 0x58) = (short)(&DAT_080c8e24)[param_3] * 3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(byte *)(iVar1 + 0x12) = param_3;
    *(undefined4 *)(iVar1 + 0xb8) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x11) = param_5;
  }
  return in_lr;
}

