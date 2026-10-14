// sub_08034668 at 0x08034668 (thumb)

undefined8 sub_08034668(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08034818(param_1,0x30);
  iVar2 = -((int)-(uVar1 & 0xff) >> 0x1f);
  if ((DAT_02002440 & 0x10) == 0) {
    if ((DAT_0200243b & 0x20) == 0) {
      if ((DAT_0200243b & 4) != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    else {
      iVar2 = iVar2 + 2;
    }
  }
  else {
    iVar2 = iVar2 + 3;
  }
  return CONCAT44(in_lr,iVar2);
}

