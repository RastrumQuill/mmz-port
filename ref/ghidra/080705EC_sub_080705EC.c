// sub_080705EC at 0x080705EC (thumb)

undefined8 sub_080705EC(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x39;
    *(undefined4 *)(iVar1 + 0x14) = 0x807079d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f12;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f69;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined *)(iVar1 + 0x10) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

