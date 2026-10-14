// sub_08079948 at 0x08079948 (thumb)

undefined4 sub_08079948(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801C560(1);
    sub_0801CF00(param_1,0xb700);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x8c00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (DAT_0202dad7 == '\x01') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

