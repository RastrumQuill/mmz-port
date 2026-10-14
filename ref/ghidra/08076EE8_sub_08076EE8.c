// sub_08076EE8 at 0x08076EE8 (thumb)

undefined8 sub_08076EE8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x8076f8d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f86;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0xb8) = param_2;
    *(undefined4 *)(iVar1 + 0xbc) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

