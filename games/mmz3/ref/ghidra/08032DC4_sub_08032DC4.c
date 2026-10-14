// sub_08032DC4 at 0x08032DC4 (thumb)

undefined8 sub_08032DC4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x500;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 5;
  }
  return CONCAT44(in_lr,iVar1);
}

