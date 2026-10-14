// sub_0809F32C at 0x0809F32C (thumb)

undefined4 sub_0809F32C(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_080070D8(DAT_020305f8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 8;
      *(undefined *)(iVar1 + 9) = 0xd;
      *(undefined4 *)(iVar1 + 0x14) = 0x809f575;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 5;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return in_lr;
}

