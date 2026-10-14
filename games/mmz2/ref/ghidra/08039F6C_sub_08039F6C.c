// sub_08039F6C at 0x08039F6C (thumb)

undefined8 sub_08039F6C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08039F4C();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 0x66);
  }
  return CONCAT44(in_lr,iVar1);
}

