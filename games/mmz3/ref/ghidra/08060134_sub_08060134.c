// sub_08060134 at 0x08060134 (thumb)

undefined4 sub_08060134(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08007390(param_1 + 0x74,&DAT_08361ab8);
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

