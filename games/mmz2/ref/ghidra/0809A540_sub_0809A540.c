// sub_0809A540 at 0x0809A540 (thumb)

undefined4 sub_0809A540(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_083435a8 + (uint)*(byte *)(param_1 + 0x10) * 0x18);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(DAT_0202e130 + 0x54) -
      (*(int *)(param_1 + 0x54) + *(int *)(&DAT_08343668 + (uint)*(byte *)(param_1 + 0x10) * 4))) +
      0x5000U < 0xa001) {
    sub_08006E08(param_1 + 0x74,&DAT_083435a8 + (uint)*(byte *)(param_1 + 0x10) * 0x18);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_08343650);
  }
  if ((char)DAT_0202e030 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

