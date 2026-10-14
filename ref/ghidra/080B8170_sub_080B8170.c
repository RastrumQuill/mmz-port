// sub_080B8170 at 0x080B8170 (thumb)

undefined8 sub_080B8170(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((param_2 == 0) || (1 < *(byte *)(param_2 + 0xc))) {
LAB_080b81b0:
    uVar2 = 0;
  }
  else {
    iVar4 = 3;
    piVar3 = (int *)(*(int *)(param_1 + 0x20) + 0xfc);
    do {
      piVar3 = piVar3 + -1;
      iVar4 = iVar4 + -1;
      iVar1 = *piVar3;
      if ((((iVar1 != 0) && (iVar1 != param_1)) && (*(char *)(iVar1 + 9) == '\n')) &&
         ((*(char *)(iVar1 + 0xd) == '\x01' && (*(int *)(iVar1 + 0xd0) == param_2))))
      goto LAB_080b81b0;
    } while (iVar4 != 0);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

