// sub_080A8F84 at 0x080A8F84 (thumb)

undefined4 sub_080A8F84(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (*(byte *)(param_1 + 0x10) < bVar1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

