// sub_080ADCDC at 0x080ADCDC (thumb)

undefined4 sub_080ADCDC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_0800710C(DAT_020305f8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 8;
      *(undefined *)(iVar1 + 9) = 0x26;
      *(undefined4 *)(iVar1 + 0x14) = 0x80adf5d;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(char *)(iVar1 + 0x12) = (char)iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return in_lr;
}

