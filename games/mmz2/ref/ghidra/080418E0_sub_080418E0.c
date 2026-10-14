// sub_080418E0 at 0x080418E0 (thumb)

undefined4 sub_080418E0(int param_1)

{
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432e18,(DAT_0202e5ac - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432e24,(DAT_0202e3ac - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_08432e2c,(DAT_0202e5ae - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432e38,(DAT_0202e3ae - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08432e40,(DAT_0202e5b0 - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432e4c,(DAT_0202e3b0 - 6) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0xe00);
  sub_080128D4(param_1);
  sub_0803F9E4(param_1,&DAT_0833a550,0x40);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_1 + 0xa4);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xd5) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08041A20(param_1);
  return in_lr;
}

