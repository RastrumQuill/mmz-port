// sub_080CE870 at 0x080CE870 (thumb)

undefined4 sub_080CE870(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(int *)(param_1 + 0x40) = param_1 + 0x5c;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x4000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CE840();
  return in_lr;
}

