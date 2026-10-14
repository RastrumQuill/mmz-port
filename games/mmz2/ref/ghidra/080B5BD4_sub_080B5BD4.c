// sub_080B5BD4 at 0x080B5BD4 (thumb)

undefined4 sub_080B5BD4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = 0x1000;
  iVar4 = 3;
  iVar3 = param_1;
  do {
    iVar2 = sub_08006B50(DAT_0202f084);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 1;
      *(undefined *)(iVar2 + 9) = 0x21;
      *(undefined4 *)(iVar2 + 0x14) = 0x80b5cb1;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(undefined *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x54) = *param_2;
      *(undefined4 *)(iVar2 + 0x58) = param_2[1];
      *(int *)(iVar2 + 0x2c) = iVar3;
      *(int *)(iVar2 + 0x28) = param_1;
      *(undefined4 *)(iVar2 + 100) = uVar1;
      uVar1 = 0xc00;
      iVar3 = iVar2;
    }
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}

