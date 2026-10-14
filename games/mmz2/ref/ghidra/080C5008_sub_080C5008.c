// sub_080C5008 at 0x080C5008 (thumb)

undefined4 sub_080C5008(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  DAT_0202e6a0 = 0x3f0;
  DAT_0202e4a0 = 7;
  sub_08002638(&DAT_084337a0,0x11e00);
  sub_08002AEC(&DAT_084337ac,(DAT_0202e4a0 - 9) * 0x20 + 0x200);
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

