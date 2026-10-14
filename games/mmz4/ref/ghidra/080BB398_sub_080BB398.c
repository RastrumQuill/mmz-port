// sub_080BB398 at 0x080BB398 (thumb)

undefined4 sub_080BB398(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08001D30(&DAT_08c44e38,(DAT_0202e1ac - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44e44,(DAT_0202dfac - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c451f8,(DAT_0202e20c - 0x3a9) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c45204,(DAT_0202e00c - 9) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(undefined *)(param_1 + 0x22) = 1;
  *(undefined *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088610f0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080BB4C8(param_1);
  return in_lr;
}

