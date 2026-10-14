// sub_080365CC at 0x080365CC (thumb)

undefined8 sub_080365CC(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0802582C();
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x803660d;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

