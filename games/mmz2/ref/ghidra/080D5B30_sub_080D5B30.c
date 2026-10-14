// sub_080D5B30 at 0x080D5B30 (thumb)

undefined8 sub_080D5B30(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 - 1U < 0x51) {
    iVar2 = (int)(char)(&DAT_0834a1d4)[param_2 * 0xc];
    if (iVar2 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)
                     ((uint)(byte)(&DAT_0834a634)[iVar2] * 2 + *(int *)(&DAT_0834a5e8 + iVar2 * 4) +
                     -2);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

