// sub_0809C120 at 0x0809C120 (thumb)

undefined8 sub_0809C120(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0xc;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0x55;
      *(undefined4 *)(iVar1 + 0x14) = 0x809bf95;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_020230ba;
      *(undefined *)(iVar1 + 0x1e) = DAT_02023115;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(char *)(iVar1 + 0x10) = (char)iVar2;
    }
  } while ((iVar2 != 0) && (iVar1 != 0));
  return CONCAT44(in_lr,iVar1);
}

