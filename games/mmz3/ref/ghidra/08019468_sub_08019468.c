// sub_08019468 at 0x08019468 (thumb)

undefined8 sub_08019468(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x21c001) {
    if (0x11d000 < iVar2) {
      uVar1 = 1;
      goto LAB_08019492;
    }
    if (iVar2 < 0x10e001) {
      uVar1 = 0;
      goto LAB_08019492;
    }
  }
  uVar1 = 7;
LAB_08019492:
  return CONCAT44(in_lr,uVar1);
}

