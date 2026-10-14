// sub_080BAA30 at 0x080BAA30 (thumb)

undefined4 sub_080BAA30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = sub_08005428(DAT_02023210);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 3;
      *(undefined4 *)(iVar1 + 0x14) = 0x80ba7f5;
      *(undefined2 *)(iVar1 + 0x1c) = 0x3a0;
      *(undefined *)(iVar1 + 0x1e) = 7;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
    }
  } while ((iVar2 != 0) && (iVar1 != 0));
  return in_lr;
}

