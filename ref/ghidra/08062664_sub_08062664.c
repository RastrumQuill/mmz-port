// sub_08062664 at 0x08062664 (thumb)

undefined8 sub_08062664(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x25;
    *(undefined4 *)(iVar1 + 0x14) = 0x80626bd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022eea;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f55;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

