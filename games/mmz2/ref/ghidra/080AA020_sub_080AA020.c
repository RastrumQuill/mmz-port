// sub_080AA020 at 0x080AA020 (thumb)

undefined4 sub_080AA020(int param_1)

{
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433778,(DAT_0202e69c - 0x350) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433784,(DAT_0202e49c - 7) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8600);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083455a0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080AA100(param_1);
  return in_lr;
}

