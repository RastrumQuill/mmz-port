// sub_080DF620 at 0x080DF620 (thumb)

undefined4 sub_080DF620(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836e0e4,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 0x201;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DF6BC(param_1);
  return in_lr;
}

