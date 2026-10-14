// sub_080BA2E8 at 0x080BA2E8 (thumb)

undefined4 sub_080BA2E8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = sub_08005428(DAT_02023210);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b9bf9;
    *(undefined2 *)(iVar1 + 0x1c) = 0x280;
    *(undefined *)(iVar1 + 0x1e) = 5;
    *(char *)(iVar1 + 0x10) = (char)iVar2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  } while (iVar2 != 0);
  return in_lr;
}

