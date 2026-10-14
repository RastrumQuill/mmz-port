// sub_080BDF2C at 0x080BDF2C (thumb)

undefined8 sub_080BDF2C(undefined param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bdf75;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

