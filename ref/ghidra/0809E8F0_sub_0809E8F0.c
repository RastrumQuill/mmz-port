// sub_0809E8F0 at 0x0809E8F0 (thumb)

undefined8 sub_0809E8F0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x809e9e5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202317c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023126;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

