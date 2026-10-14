// sub_080D56F4 at 0x080D56F4 (thumb)

undefined8 sub_080D56F4(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 3;
  piVar2 = (int *)(param_1 + 0x2b4);
  do {
    piVar2 = piVar2 + -1;
    iVar3 = iVar3 + -1;
    if (*piVar2 == param_2) {
      uVar1 = 1;
      goto LAB_080d5712;
    }
  } while (iVar3 != 0);
  uVar1 = 0;
LAB_080d5712:
  return CONCAT44(in_lr,uVar1);
}

