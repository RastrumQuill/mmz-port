// sub_080930CC at 0x080930CC (thumb)

undefined4 sub_080930CC(int param_1,undefined param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x3d;
    *(undefined4 *)(iVar1 + 0x14) = 0x8093149;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(uint *)(iVar1 + 0x58) = iVar2 + (param_3 & 0xff) * -0x1000 + -0x1c00;
    *(undefined *)(iVar1 + 0x12) = param_2;
    *(int *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

