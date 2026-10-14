// sub_080CDF84 at 0x080CDF84 (thumb)

undefined4 sub_080CDF84(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_0800710C(DAT_02030630);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x1e;
      *(undefined *)(iVar1 + 9) = 0xe;
      *(undefined4 *)(iVar1 + 0x14) = 0x80ce045;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 0;
      *(short *)(iVar1 + 0xb4) = (short)(iVar2 << 0xf);
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

