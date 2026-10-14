// sub_080B48C8 at 0x080B48C8 (thumb)

undefined8 sub_080B48C8(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(short *)(DAT_0202f084 + 10) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08006B84(DAT_0202f084);
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b4961;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    iVar1 = sub_08006B84(DAT_0202f084);
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b4961;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

