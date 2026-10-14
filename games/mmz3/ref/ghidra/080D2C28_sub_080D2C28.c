// sub_080D2C28 at 0x080D2C28 (thumb)

undefined4 sub_080D2C28(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836d428;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D03B8();
  return in_lr;
}

