// sub_080293C4 at 0x080293C4 (thumb)

undefined8 sub_080293C4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    sub_08029BB4(&DAT_020303dc);
  }
  else {
    iVar1 = sub_08029BEC(&DAT_020303dc);
    if (iVar1 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      if (iVar3 != 0) {
        sub_0802B7A4(iVar3);
      }
      uVar2 = 1;
      goto LAB_08029406;
    }
  }
  uVar2 = 0;
LAB_08029406:
  return CONCAT44(in_lr,uVar2);
}

