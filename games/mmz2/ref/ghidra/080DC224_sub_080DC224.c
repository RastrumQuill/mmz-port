// sub_080DC224 at 0x080DC224 (thumb)

undefined4 sub_080DC224(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bdd4 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC26C(param_1);
  return in_lr;
}

