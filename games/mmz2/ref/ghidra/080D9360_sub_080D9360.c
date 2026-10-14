// sub_080D9360 at 0x080D9360 (thumb)

undefined8 sub_080D9360(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((param_2 == 0) || (1 < *(byte *)(param_2 + 0xc))) {
LAB_080d93a4:
    uVar1 = 0;
  }
  else {
    iVar4 = 3;
    piVar3 = (int *)(*(int *)(param_1 + 0x28) + 0x2b4);
    do {
      piVar3 = piVar3 + -1;
      iVar4 = iVar4 + -1;
      iVar2 = *piVar3;
      if ((((iVar2 != 0) && (iVar2 != param_1)) && (*(char *)(iVar2 + 9) == '\n')) &&
         ((*(char *)(iVar2 + 0xd) == '\x01' && (*(int *)(iVar2 + 200) == param_2))))
      goto LAB_080d93a4;
    } while (iVar4 != 0);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

