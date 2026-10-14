// sub_08059D34 at 0x08059D34 (thumb)

undefined4 sub_08059D34(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
    sub_0802311C(*(undefined4 *)(param_1 + 200),1,*(byte *)(DAT_0202e130 + 10) >> 4 & 1,0);
  }
  return in_lr;
}

