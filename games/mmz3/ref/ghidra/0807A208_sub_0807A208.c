// sub_0807A208 at 0x0807A208 (thumb)

undefined4 sub_0807A208(undefined4 param_1,undefined4 param_2,int param_3,undefined param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x1b;
    *(undefined4 *)(iVar1 + 0x14) = 0x807a31d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(int *)(iVar1 + 0x58) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x12) = param_4;
  }
  iVar3 = 0;
  do {
    iVar2 = sub_0800710C(DAT_020305e8);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x18;
      *(undefined *)(iVar2 + 9) = 0x1b;
      *(undefined4 *)(iVar2 + 0x14) = 0x807a31d;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = 1;
      *(undefined4 *)(iVar2 + 0x54) = param_2;
      *(int *)(iVar2 + 0x58) = (short)(&DAT_08363f04)[iVar3] + param_3;
      *(int *)(iVar2 + 0x28) = iVar1;
      *(undefined *)(iVar2 + 0x12) = param_4;
      *(char *)(iVar2 + 0x13) = (char)iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return in_lr;
}

