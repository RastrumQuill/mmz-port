// sub_0806C1E0 at 0x0806C1E0 (thumb)

undefined8 sub_0806C1E0(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x806c23d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f04;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f62;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

