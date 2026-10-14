// sub_08038714 at 0x08038714 (thumb)

undefined8 sub_08038714(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08038750(param_1);
  if ((*(byte *)(param_1 + 0x176) < 3) || (*(char *)(param_1 + 0x2b6) != '\x01')) {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

