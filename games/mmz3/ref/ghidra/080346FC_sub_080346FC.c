// sub_080346FC at 0x080346FC (thumb)

undefined8 sub_080346FC(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08034818(param_1,0x32);
  iVar2 = -((int)-(uVar1 & 0xff) >> 0x1f);
  if ((DAT_02002441 & 0x20) == 0) {
    if ((DAT_0200243d & 0x80) == 0) {
      if ((DAT_0200243a & 2) != 0) {
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

