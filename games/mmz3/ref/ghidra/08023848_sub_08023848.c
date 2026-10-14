// sub_08023848 at 0x08023848 (thumb)

undefined8 sub_08023848(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    sub_08024088(&DAT_02031c6c);
  }
  else {
    iVar1 = sub_08024194(&DAT_02031c6c);
    if (iVar1 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_08023874;
    }
  }
  uVar2 = 0;
LAB_08023874:
  return CONCAT44(in_lr,uVar2);
}

