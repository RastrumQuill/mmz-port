// sub_080B1464 at 0x080B1464 (thumb)

undefined4 sub_080B1464(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_080E5194(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080E5194(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    sub_080E5194(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(3,0x26,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

