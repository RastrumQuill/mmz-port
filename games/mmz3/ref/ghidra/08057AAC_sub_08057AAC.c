// sub_08057AAC at 0x08057AAC (thumb)

undefined8 sub_08057AAC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_020301a8 & 8) != 0)) {
    uVar1 = 0;
  }
  else {
    sub_0800471C(0x98);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    sub_08057D20(param_1);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

