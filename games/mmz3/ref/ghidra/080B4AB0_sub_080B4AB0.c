// sub_080B4AB0 at 0x080B4AB0 (thumb)

undefined8 sub_080B4AB0(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0xb;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b4b0d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = *param_2;
    *(undefined4 *)(iVar1 + 0x78) = param_2[1];
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x78) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

