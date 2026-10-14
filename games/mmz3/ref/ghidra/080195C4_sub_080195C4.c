// sub_080195C4 at 0x080195C4 (thumb)

undefined8 sub_080195C4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0x348001) {
    if (0x20d000 < iVar2) {
      uVar1 = 1;
      goto LAB_080195f6;
    }
    if ((iVar2 < 0x1fe001) && (0x25800 < iVar2)) {
      uVar1 = 0;
      goto LAB_080195f6;
    }
  }
  uVar1 = 7;
LAB_080195f6:
  return CONCAT44(in_lr,uVar1);
}

