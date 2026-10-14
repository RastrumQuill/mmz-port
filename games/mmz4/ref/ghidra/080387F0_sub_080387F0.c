// sub_080387F0 at 0x080387F0 (thumb)

undefined8 sub_080387F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x500;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 5;
  }
  return CONCAT44(in_lr,iVar1);
}

