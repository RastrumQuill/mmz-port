// sub_0809DE50 at 0x0809DE50 (thumb)

undefined4 sub_0809DE50(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C930(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0809C980(param_1);
  return in_lr;
}

