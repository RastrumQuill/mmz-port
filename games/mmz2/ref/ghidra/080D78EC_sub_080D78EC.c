// sub_080D78EC at 0x080D78EC (thumb)

undefined8 sub_080D78EC(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080D62A8();
  iVar2 = sub_08006B84(DAT_0202f090);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x10;
    *(undefined *)(iVar2 + 9) = 4;
    *(undefined4 *)(iVar2 + 0x14) = 0x80d7485;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x2c) = uVar1;
    sub_080D5654(param_1,iVar2);
  }
  return CONCAT44(in_lr,iVar2);
}

