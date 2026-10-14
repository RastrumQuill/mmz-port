// sub_08061084 at 0x08061084 (thumb)

undefined8 sub_08061084(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xcb) == param_2) {
    if (*(char *)(param_1 + 0xca) != '\0') {
      uVar1 = 1;
      goto LAB_080610b6;
    }
    *(char *)(param_1 + 0xca) = '\x01';
  }
  else {
    *(undefined *)(param_1 + 0xca) = 0;
    *(char *)(param_1 + 0xcb) = param_2;
  }
  uVar1 = 0;
LAB_080610b6:
  return CONCAT44(in_lr,uVar1);
}

