// sub_0810B508 at 0x0810B508 (thumb)

undefined4 sub_0810B508(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x63a8) + 0xf0);
  if (*(byte *)(param_1 + 0x12) != *pbVar1) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*pbVar1 | 0x9300);
    *(byte *)(param_1 + 0x12) = *pbVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

