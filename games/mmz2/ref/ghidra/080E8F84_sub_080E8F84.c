// sub_080E8F84 at 0x080E8F84 (thumb)

undefined8 sub_080E8F84(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x73) == '\x03') {
    *(undefined *)(param_1 + 1) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    sub_08037A9C(uVar1);
    sub_080D5790(uVar1);
  }
  return CONCAT44(in_lr,2);
}

