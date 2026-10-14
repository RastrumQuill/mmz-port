// sub_080EC9AC at 0x080EC9AC (thumb)

undefined4 sub_080EC9AC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_088663c0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  sub_0801CF00(param_1,0xcc01);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080EC90C(param_1);
  return in_lr;
}

