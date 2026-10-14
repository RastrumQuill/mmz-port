// sub_080A3A78 at 0x080A3A78 (thumb)

undefined4 sub_080A3A78(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0))
  {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

