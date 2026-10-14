// sub_080DA7F4 at 0x080DA7F4 (thumb)

undefined8 sub_080DA7F4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    iVar1 = sub_08006B50(DAT_0202f094);
  }
  else {
    iVar1 = sub_08006BF0(param_2);
  }
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d9cc1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(undefined *)(iVar1 + 0x12) = 0;
    }
    else {
      *(int *)(iVar1 + 0x28) = param_2;
      *(int *)(param_2 + 0x2c) = iVar1;
      *(char *)(iVar1 + 0x12) = *(char *)(param_2 + 0x12) + '\x01';
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

