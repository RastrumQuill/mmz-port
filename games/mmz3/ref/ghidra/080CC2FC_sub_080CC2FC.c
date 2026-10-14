// sub_080CC2FC at 0x080CC2FC (thumb)

undefined4 sub_080CC2FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\f') {
    *(undefined *)(param_1 + 0xd) = 5;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836c774,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80cc2dd;
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + -0xe00;
    *(int *)(param_1 + 0xb8) = iVar1 + -0xe00;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836c7a4;
    *(undefined2 *)(param_1 + 0x26) = 0x811;
    sub_080CC010(param_1);
  }
  sub_080CC3AC(param_1);
  return in_lr;
}

