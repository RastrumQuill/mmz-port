// sub_080B598C at 0x080B598C (thumb)

undefined8 sub_080B598C(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_1 & 0xff) - 1 < 0x4e) {
    iVar2 = 0;
    do {
      iVar2 = sub_080B3F2C(1,iVar2);
      if (iVar2 == 0) {
        uVar1 = 0;
        goto LAB_080b59b8;
      }
    } while ((uint)*(byte *)(iVar2 + 0x10) != (param_1 & 0xff));
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
LAB_080b59b8:
  return CONCAT44(in_lr,uVar1);
}

