// sub_080B5C58 at 0x080B5C58 (thumb)

undefined4 sub_080B5C58(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08006B50(DAT_0202f084);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x21;
      *(undefined4 *)(iVar1 + 0x14) = 0x80b5cb1;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return in_lr;
}

