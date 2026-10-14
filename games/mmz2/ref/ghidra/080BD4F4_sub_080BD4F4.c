// sub_080BD4F4 at 0x080BD4F4 (thumb)

undefined8 sub_080BD4F4(undefined param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x40;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bd541;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

