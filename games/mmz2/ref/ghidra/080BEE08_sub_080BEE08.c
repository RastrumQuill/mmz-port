// sub_080BEE08 at 0x080BEE08 (thumb)

undefined8 sub_080BEE08(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x46;
    *(undefined4 *)(iVar1 + 0x14) = 0x80be9c9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x13) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

