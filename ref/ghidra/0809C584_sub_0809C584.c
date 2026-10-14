// sub_0809C584 at 0x0809C584 (thumb)

undefined8 sub_0809C584(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x57;
    *(undefined4 *)(iVar1 + 0x14) = 0x809c3c9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230be;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023117;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x54) = param_3;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

