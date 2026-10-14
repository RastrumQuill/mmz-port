// sub_08094554 at 0x08094554 (thumb)

undefined4 sub_08094554(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
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
    *(undefined *)(iVar1 + 0x10) = 5;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    iVar2 = (param_3 & 0xff) * 4;
    *(int *)(iVar1 + 0x5c) = (int)*(short *)(&DAT_0836670c + iVar2) / 2;
    *(int *)(iVar1 + 0x60) = (int)*(short *)(&DAT_0836670e + iVar2) / 2;
  }
  return in_lr;
}

