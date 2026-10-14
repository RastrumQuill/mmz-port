// sub_080D5DE0 at 0x080D5DE0 (thumb)

undefined8 sub_080D5DE0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x14;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d5ea9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

