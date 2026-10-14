// sub_080CD7D4 at 0x080CD7D4 (thumb)

undefined4 sub_080CD7D4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083495e0,param_1 + 0x54,0x20);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80cda35;
  sub_080CD828(param_1);
  return in_lr;
}

