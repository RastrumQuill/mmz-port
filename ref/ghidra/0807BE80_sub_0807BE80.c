// sub_0807BE80 at 0x0807BE80 (thumb)

undefined8 sub_0807BE80(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x807bed5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fa6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff3;
    *(undefined *)(iVar1 + 0x10) = 8;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

