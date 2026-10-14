// sub_080795C0 at 0x080795C0 (thumb)

undefined4 sub_080795C0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000,1,0);
  sub_08001EAC(0xe1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

