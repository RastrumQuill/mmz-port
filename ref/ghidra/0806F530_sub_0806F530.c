// sub_0806F530 at 0x0806F530 (thumb)

undefined8 sub_0806F530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x38;
    *(undefined4 *)(iVar1 + 0x14) = 0x806f6a9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f10;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f68;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

