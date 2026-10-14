// sub_080BD760 at 0x080BD760 (thumb)

undefined4 sub_080BD760(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xc700);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_08002D68(*(char *)(param_1 + 0x10) + 'Z',0x2a0);
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BD7DC(param_1);
  return in_lr;
}

