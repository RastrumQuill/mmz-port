// sub_080DC130 at 0x080DC130 (thumb)

undefined4 sub_080DC130(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x800;
  sub_08017700(param_1,0x9701);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DC184(param_1);
  return in_lr;
}

