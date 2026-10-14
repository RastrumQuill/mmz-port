// sub_080A1AE8 at 0x080A1AE8 (thumb)

undefined4 sub_080A1AE8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    sub_080E10C8(param_1 + 0x54,(*(uint *)(param_1 + 0x8c) & 0x10000) == 0,0);
  }
  else {
    sub_080E10C8(param_1 + 0x54,2,0);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(2,0xe,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

