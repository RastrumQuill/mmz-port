// sub_0801C1D0 at 0x0801C1D0 (thumb)

undefined8 sub_0801C1D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 1) == '\0') {
    if (((uint)DAT_0202ec42 & *(uint *)(iVar2 + 4)) != 0) goto LAB_0801c1fc;
  }
  else if (((uint)DAT_0202ec42 & *(uint *)(iVar2 + 4)) == 0) {
LAB_0801c1fc:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_0801c204;
  }
  uVar1 = 0;
LAB_0801c204:
  return CONCAT44(in_lr,uVar1);
}

