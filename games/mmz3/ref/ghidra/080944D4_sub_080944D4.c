// sub_080944D4 at 0x080944D4 (thumb)

undefined4 sub_080944D4(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x3f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80945dd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 4;
    *(byte *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(int *)(iVar1 + 0x5c) = (int)*(short *)(&DAT_0836670c + (uint)param_3 * 4);
    *(int *)(iVar1 + 0x60) = (int)*(short *)(&DAT_0836670e + (uint)param_3 * 4);
    *(undefined4 *)(iVar1 + 100) = 0x180;
  }
  return in_lr;
}

