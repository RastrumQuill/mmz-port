// sub_080C6050 at 0x080C6050 (thumb)

undefined4 sub_080C6050(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c611d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 5;
    *(undefined *)(iVar1 + 0x11) = param_2;
  }
  return in_lr;
}

