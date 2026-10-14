// sub_080A2428 at 0x080A2428 (thumb)

undefined4 sub_080A2428(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

