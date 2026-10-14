// sub_080713B8 at 0x080713B8 (thumb)

undefined4 sub_080713B8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    cVar1 = '\b';
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

