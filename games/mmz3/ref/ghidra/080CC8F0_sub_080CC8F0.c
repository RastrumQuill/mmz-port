// sub_080CC8F0 at 0x080CC8F0 (thumb)

undefined4 sub_080CC8F0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836c7d8)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836c7d0;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  *(undefined4 *)(param_1 + 0xb4) = 0x2800;
  sub_080CC958(param_1);
  return in_lr;
}

