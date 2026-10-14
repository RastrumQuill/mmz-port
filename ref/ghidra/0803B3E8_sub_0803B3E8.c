// sub_0803B3E8 at 0x0803B3E8 (thumb)

undefined4 sub_0803B3E8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

