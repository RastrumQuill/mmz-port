// sub_080CB1B0 at 0x080CB1B0 (thumb)

undefined8 sub_080CB1B0(int param_1,short param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x12) = 0x40;
  bVar1 = false;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0xb4) + 0x3800;
    if (param_3 <= iVar2) goto LAB_080cb1f8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) + -0x3800;
    if (iVar2 <= param_3) goto LAB_080cb1f8;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  bVar1 = true;
LAB_080cb1f8:
  if ((param_2 == 0) || (bVar1)) {
    uVar3 = 0;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

