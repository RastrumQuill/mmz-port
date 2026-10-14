// sub_080CC1DC at 0x080CC1DC (thumb)

undefined4 sub_080CC1DC(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  do {
    iVar1 = sub_0800710C(DAT_02030630);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x1e;
      *(undefined *)(iVar1 + 9) = 7;
      *(undefined4 *)(iVar1 + 0x14) = 0x80cc2fd;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 0xc;
      *(char *)(iVar1 + 0x11) = (char)iVar3;
      iVar2 = param_4 - param_3;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7ff;
      }
      *(char *)(iVar1 + 0x13) = (char)(iVar2 >> 0xb);
      *(undefined4 *)(iVar1 + 0x54) = param_2;
      *(int *)(iVar1 + 0x58) = param_3;
      param_3 = param_3 + 0x1000;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return in_lr;
}

