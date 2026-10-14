// sub_0801CDB0 at 0x0801CDB0 (thumb)

undefined8 sub_0801CDB0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    sub_0801CE44(&DAT_020306b4);
  }
  else {
    iVar1 = sub_0801CE5C(&DAT_020306b4);
    if (iVar1 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_0801cddc;
    }
  }
  uVar2 = 0;
LAB_0801cddc:
  return CONCAT44(in_lr,uVar2);
}

