// sub_080BCA88 at 0x080BCA88 (thumb)

undefined8 sub_080BCA88(undefined4 *param_1,undefined param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x26;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bcaf5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined2 *)(iVar1 + 0x74) = param_3;
    *(undefined4 *)(iVar1 + 0x78) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

