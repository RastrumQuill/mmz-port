// sub_08045EE4 at 0x08045EE4 (thumb)

undefined8 sub_08045EE4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(short *)(param_1 + 0xa4) < 1)) {
    sub_0800471C(0x119);
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    bVar1 = false;
    if (((byte)(*(char *)(param_1 + 0xd) - 8U) < 3) || (*(char *)(param_1 + 0xd) == '\x10')) {
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(iVar3 + 9) * 4) + 8);
    *(bool *)(param_1 + 0xd) = !bVar1;
    *(bool *)(iVar3 + 0xd) = !bVar1;
    sub_080462BC(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

