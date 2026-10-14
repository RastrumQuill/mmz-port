// sub_080BEEA4 at 0x080BEEA4 (thumb)

undefined4 sub_080BEEA4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = sub_0800710C(DAT_0203062c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x2f;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bf089;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(int *)(iVar1 + 0x2c) = iVar3;
      iVar3 = iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

