// sub_08025BEC at 0x08025BEC (thumb)

undefined8 sub_08025BEC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe1) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x100;
  }
  return CONCAT44(in_lr,uVar1);
}

