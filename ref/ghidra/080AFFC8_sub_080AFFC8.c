// sub_080AFFC8 at 0x080AFFC8 (thumb)

undefined4 sub_080AFFC8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  sub_0809C980(param_1);
  return in_lr;
}

