// sub_0807872C at 0x0807872C (thumb)

undefined4 sub_0807872C(undefined4 param_1,undefined4 *param_2,byte param_3)

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
    *(uint *)(iVar1 + 0x54) = (uint)param_3 * 0x600 + -0x300;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(byte *)(iVar1 + 0x12) = param_3;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

