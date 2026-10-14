// sub_080D0668 at 0x080D0668 (thumb)

undefined4 sub_080D0668(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 10) = bVar2 | 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = bVar2 | 6;
  sub_08005760(param_1 + 0x74,&DAT_08863a10,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = DAT_0202dbf0;
  *(int *)(param_1 + 0x54) =
       *(int *)(DAT_0202dbf0 + 0x54) +
       *(int *)(&DAT_08863a08 + ((int)-(*(byte *)(DAT_0202dbf0 + 10) & 0x10) >> 0x1f & 4)) * 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x1400;
  *(undefined *)(param_1 + 0x12) = 0x14;
  return in_lr;
}

