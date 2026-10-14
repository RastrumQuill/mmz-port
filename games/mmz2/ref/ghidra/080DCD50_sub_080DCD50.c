// sub_080DCD50 at 0x080DCD50 (thumb)

undefined4 sub_080DCD50(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  uVar1 = *(undefined2 *)(param_1 + 0x78);
  sub_08012580(param_1);
  sub_080127E4(param_1,uVar1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080DCD9C(param_1);
  return in_lr;
}

