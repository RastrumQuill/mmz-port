// sub_08019644 at 0x08019644 (thumb)

undefined8 sub_08019644(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x12c001) {
    if (iVar2 < 0xff001) {
      if (iVar2 < 0xd2001) {
        uVar1 = 0;
      }
      else {
        uVar1 = 6;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

