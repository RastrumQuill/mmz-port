// sub_080774E0 at 0x080774E0 (thumb)

undefined4 sub_080774E0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080127E4(param_1,0x1601);
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&DAT_0833fc8c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8077f3d;
  *(undefined4 *)(param_1 + 0x9c) = 0x8077f69;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  }
  sub_08077590(param_1);
  return in_lr;
}

