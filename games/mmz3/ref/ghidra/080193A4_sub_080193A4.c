// sub_080193A4 at 0x080193A4 (thumb)

undefined8 sub_080193A4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x1ab001) {
    if (iVar2 < 0xf0000) {
      uVar1 = 0;
      goto LAB_080193d2;
    }
    if (0xfefff < iVar2) {
      uVar1 = 1;
      goto LAB_080193d2;
    }
  }
  uVar1 = 7;
LAB_080193d2:
  return CONCAT44(in_lr,uVar1);
}

