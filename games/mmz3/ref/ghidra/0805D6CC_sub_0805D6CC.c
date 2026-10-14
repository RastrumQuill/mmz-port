// sub_0805D6CC at 0x0805D6CC (thumb)

undefined8 sub_0805D6CC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     (uVar2 = (uint)DAT_020301a8, (DAT_020301a8 & 8) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xbc);
    if (uVar3 != 0) {
      *(undefined *)(uVar3 + 0x11) = 1;
      *(uint *)(param_1 + 0xbc) = uVar2 & 8;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    sub_0805D900(param_1);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

