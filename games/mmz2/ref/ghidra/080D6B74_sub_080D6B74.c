// sub_080D6B74 at 0x080D6B74 (thumb)

undefined8 sub_080D6B74(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_1 & 0xff) - 1 < 0x51) {
    iVar2 = 0;
    do {
      iVar2 = sub_080D5194(1,iVar2);
      if (iVar2 == 0) {
        uVar1 = 0;
        goto LAB_080d6ba0;
      }
    } while ((uint)*(byte *)(iVar2 + 0x10) != (param_1 & 0xff));
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
LAB_080d6ba0:
  return CONCAT44(in_lr,uVar1);
}

