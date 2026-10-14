// sub_08079780 at 0x08079780 (thumb)

undefined4 sub_08079780(int param_1)

{
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b1de4,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2,0x80);
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2,0xa0);
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2,0xc0);
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2,0xe0);
  sub_08079640(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_080796AC(param_1);
  return in_lr;
}

