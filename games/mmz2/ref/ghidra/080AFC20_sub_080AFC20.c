// sub_080AFC20 at 0x080AFC20 (thumb)

undefined8 sub_080AFC20(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x80afa25;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x5c) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

