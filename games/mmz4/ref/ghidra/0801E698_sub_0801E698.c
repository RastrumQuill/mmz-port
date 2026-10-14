// sub_0801E698 at 0x0801E698 (thumb)

undefined8 sub_0801E698(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x1c2000) {
    if (iVar2 < 0x17f000) {
      if (iVar2 < 0xff000) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (iVar2 < 0x195000) {
      uVar1 = 2;
    }
    else {
      uVar1 = 7;
    }
  }
  else {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

