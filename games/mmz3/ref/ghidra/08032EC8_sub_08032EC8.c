// sub_08032EC8 at 0x08032EC8 (thumb)

undefined8 sub_08032EC8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x100;
  }
  else {
    iVar1 = 0x100 - (uint)*(byte *)(param_1 + 0x11d);
  }
  return CONCAT44(in_lr,iVar1);
}

