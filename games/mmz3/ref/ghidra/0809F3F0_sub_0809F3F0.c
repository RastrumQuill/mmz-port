// sub_0809F3F0 at 0x0809F3F0 (thumb)

undefined4 sub_0809F3F0(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x809f575;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(int *)(iVar1 + 100) = param_1;
    *(undefined4 *)(iVar1 + 0x68) = param_2;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(uint *)(iVar1 + 0x54) = param_1 + ((uVar2 * 0x20 >> 0x15) - 0x400);
    *(undefined4 *)(iVar1 + 0x58) = param_2;
  }
  return in_lr;
}

