// sub_08095CC4 at 0x08095CC4 (thumb)

undefined4 sub_08095CC4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  local_1c[0] = 0xb4;
  local_1c[1] = 0xc4;
  local_1c[2] = 0xd4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb8) = local_1c[*(byte *)(param_1 + 0x11)];
  sub_0801CC9C(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,0x4504);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885d2c8,param_1 + 0x54,0x12);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08095D78(param_1);
  return in_lr;
}

