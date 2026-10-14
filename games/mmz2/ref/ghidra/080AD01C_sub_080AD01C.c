// sub_080AD01C at 0x080AD01C (thumb)

undefined8 sub_080AD01C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    iVar1 = sub_08006B84(DAT_0202f084);
  }
  else {
    iVar1 = sub_08006BF0(param_2);
  }
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ace55;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x2c) = param_2;
    *(bool *)(iVar1 + 0x10) = param_2 != 0;
  }
  return CONCAT44(in_lr,iVar1);
}

