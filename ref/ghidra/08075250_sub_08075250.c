// sub_08075250 at 0x08075250 (thumb)

undefined8 sub_08075250(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x40;
    *(undefined4 *)(iVar1 + 0x14) = 0x80752a9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f20;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f70;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

