// sub_080CD79C at 0x080CD79C (thumb)

undefined4 sub_080CD79C(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = sub_0800710C(DAT_02030630);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x1e;
      *(undefined *)(iVar1 + 9) = 0xc;
      *(undefined4 *)(iVar1 + 0x14) = 0x80cd925;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
      *(undefined *)(iVar1 + 0x13) = param_2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(int *)(iVar1 + 0x2c) = iVar3;
      iVar3 = iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

