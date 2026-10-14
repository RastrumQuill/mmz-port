// sub_080B7394 at 0x080B7394 (thumb)

undefined4 sub_080B7394(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xd201);
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0x13) == '\x02') {
      *(undefined *)(param_1 + 0xb4) = 1;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

