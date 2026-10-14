// sub_080D5A98 at 0x080D5A98 (thumb)

undefined8 sub_080D5A98(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 - 1U < 0x51) {
    if ((char)(&DAT_0834a1d4)[param_2 * 0xc] == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x24a + (char)(&DAT_0834a1d4)[param_2 * 0xc] * 2);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

