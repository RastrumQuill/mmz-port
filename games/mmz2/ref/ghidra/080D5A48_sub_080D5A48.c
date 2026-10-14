// sub_080D5A48 at 0x080D5A48 (thumb)

undefined8 sub_080D5A48(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 - 1U < 0x51) {
    iVar2 = (int)(char)(&DAT_0834a1d4)[param_2 * 0xc];
    if (iVar2 == -1) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)((byte)(&DAT_0834a634)[iVar2] <= *(byte *)(param_1 + 0x48 + iVar2));
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

