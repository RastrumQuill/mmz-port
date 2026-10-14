// sub_080BEE5C at 0x080BEE5C (thumb)

undefined4 sub_080BEE5C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bf089;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  }
  return in_lr;
}

