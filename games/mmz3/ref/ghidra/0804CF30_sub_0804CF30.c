// sub_0804CF30 at 0x0804CF30 (thumb)

undefined8 sub_0804CF30(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     (bVar1 = (byte)DAT_020301a8, (DAT_020301a8 & 8) != 0)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar1 & 8;
    sub_0804D1AC(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

