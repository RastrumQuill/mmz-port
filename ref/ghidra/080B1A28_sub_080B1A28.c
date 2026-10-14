// sub_080B1A28 at 0x080B1A28 (thumb)

undefined4 sub_080B1A28(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,4);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080014E8(&DAT_085102e4,(DAT_020231ba - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085102f0,(DAT_02023145 - 6) * 0x20 + 0x200);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1800;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x180;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080B187C(param_1);
  return in_lr;
}

