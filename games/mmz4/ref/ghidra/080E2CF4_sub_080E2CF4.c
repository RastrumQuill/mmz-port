// sub_080E2CF4 at 0x080E2CF4 (thumb)

undefined4 sub_080E2CF4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865724 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0x74) = 1;
  sub_080E2D60(param_1);
  return in_lr;
}

