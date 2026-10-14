// sub_08032E6C at 0x08032E6C (thumb)

undefined8 sub_08032E6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x480;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 9) >> 1;
  }
  return CONCAT44(in_lr,iVar1);
}

