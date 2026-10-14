// sub_0807957C at 0x0807957C (thumb)

undefined4 sub_0807957C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),0,0);
  sub_08001EAC(0xe1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

