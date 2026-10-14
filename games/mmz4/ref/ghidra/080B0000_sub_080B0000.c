// sub_080B0000 at 0x080B0000 (thumb)

undefined4 sub_080B0000(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885fd2c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080B0070(param_1);
  return in_lr;
}

