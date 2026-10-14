// sub_080A05EC at 0x080A05EC (thumb)

undefined4 sub_080A05EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

