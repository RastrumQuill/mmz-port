// sub_080D8AD8 at 0x080D8AD8 (thumb)

undefined4 sub_080D8AD8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 6;
    sub_0800736C(param_1 + 0x74,&UNK_0836d8d4 + (uint)*(byte *)(param_1 + 0x11) * 0x18,
                 param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D8B40(param_1);
  return in_lr;
}

