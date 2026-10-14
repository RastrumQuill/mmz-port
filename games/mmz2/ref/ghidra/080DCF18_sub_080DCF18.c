// sub_080DCF18 at 0x080DCF18 (thumb)

void sub_080DCF18(undefined param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = sub_08006B84(DAT_0202f094);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80dccf1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_1;
    *(undefined4 *)(iVar1 + 0x28) = param_2;
    *(undefined *)(iVar1 + 0x12) = param_3;
  }
  return;
}

