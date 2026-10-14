// sub_08032E98 at 0x08032E98 (thumb)

undefined8 sub_08032E98(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x540;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 0x15) >> 2;
  }
  return CONCAT44(in_lr,iVar1);
}

