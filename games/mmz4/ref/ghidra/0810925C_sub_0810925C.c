// sub_0810925C at 0x0810925C (thumb)

undefined4 sub_0810925C(int param_1)

{
  undefined4 in_lr;
  
  sub_080DF514(param_1 + 0x54,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

