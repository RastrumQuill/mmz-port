// sub_080941B8 at 0x080941B8 (thumb)

undefined8 sub_080941B8(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x809425d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202306e;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ef;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

