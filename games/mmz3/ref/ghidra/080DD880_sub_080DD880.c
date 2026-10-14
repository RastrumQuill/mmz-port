// sub_080DD880 at 0x080DD880 (thumb)

undefined4 sub_080DD880(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe80a);
  sub_080177F4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)(&DAT_0836de98 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(&DAT_0836dec0 + (uint)*(byte *)(param_1 + 0x11) * 4);
  sub_080DD84C(param_1);
  return in_lr;
}

