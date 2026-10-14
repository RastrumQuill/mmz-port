// sub_08032DEC at 0x08032DEC (thumb)

undefined8 sub_08032DEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x400;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 4;
  }
  return CONCAT44(in_lr,iVar1);
}

