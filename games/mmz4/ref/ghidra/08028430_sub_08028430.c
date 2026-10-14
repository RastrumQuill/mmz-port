// sub_08028430 at 0x08028430 (thumb)

undefined8 sub_08028430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 1) == '\0') {
    if (((uint)DAT_0202e922 & *(uint *)(iVar2 + 4)) != 0) goto LAB_0802845c;
  }
  else if (((uint)DAT_0202e922 & *(uint *)(iVar2 + 4)) == 0) {
LAB_0802845c:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_08028464;
  }
  uVar1 = 0;
LAB_08028464:
  return CONCAT44(in_lr,uVar1);
}

