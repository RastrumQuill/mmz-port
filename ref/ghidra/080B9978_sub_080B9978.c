// sub_080B9978 at 0x080B9978 (thumb)

undefined8 sub_080B9978(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023210);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b8ce9;
    *(undefined2 *)(iVar1 + 0x1c) = 0x200;
    *(undefined *)(iVar1 + 0x1e) = 4;
    *(undefined *)(iVar1 + 0x10) = 6;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

