// sub_080A1ECC at 0x080A1ECC (thumb)

undefined8 sub_080A1ECC(undefined4 *param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1f29;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined4 *)(iVar1 + 100) = *param_2;
    *(undefined4 *)(iVar1 + 0x68) = param_2[1];
  }
  return CONCAT44(in_lr,iVar1);
}

