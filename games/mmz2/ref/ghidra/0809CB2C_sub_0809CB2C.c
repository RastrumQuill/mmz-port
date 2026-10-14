// sub_0809CB2C at 0x0809CB2C (thumb)

undefined4 sub_0809CB2C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0x22) = 1;
    sub_08012580(param_1);
    sub_080127E4(param_1,0x2800);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x400;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08012580(param_1);
    sub_080127E4(param_1,0x2805);
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * 0x1000 + -0x800;
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0xb4) = 3;
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&UNK_08343924 + (uint)*(byte *)(param_1 + 0x10) * 0x30,param_1 + 0x54,
               4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0809CBFC(param_1);
  return in_lr;
}

