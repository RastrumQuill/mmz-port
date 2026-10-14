// sub_080346B0 at 0x080346B0 (thumb)

undefined8 sub_080346B0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08034818(param_1,0x31);
  iVar2 = -((int)-(uVar1 & 0xff) >> 0x1f);
  if ((DAT_02002443 & 2) == 0) {
    if ((DAT_02002442 & 2) == 0) {
      if ((DAT_02002438 & 4) != 0) {
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

