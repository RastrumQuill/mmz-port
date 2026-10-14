// sub_08037EE8 at 0x08037EE8 (thumb)

undefined4 sub_08037EE8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0800561C(param_1 + 0x74,&DAT_082ad818);
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

