// sub_08088B14 at 0x08088B14 (thumb)

undefined8 sub_08088B14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08088C2C(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar1 = sub_08088D58(param_1,*(undefined4 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    if (-1 < *(int *)(param_1 + 0x60)) {
      uVar2 = 1;
      goto LAB_08088b4a;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar2 = 0;
LAB_08088b4a:
  return CONCAT44(in_lr,uVar2);
}

