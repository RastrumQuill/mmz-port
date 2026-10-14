// sub_080B8CA0 at 0x080B8CA0 (thumb)

undefined8 sub_080B8CA0(undefined4 *param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x19;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b8d45;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined4 *)(iVar1 + 0x28) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

