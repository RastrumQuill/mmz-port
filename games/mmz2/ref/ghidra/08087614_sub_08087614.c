// sub_08087614 at 0x08087614 (thumb)

undefined4 sub_08087614(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5608);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083415f0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x11) + -0x40;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  uVar1 = sub_080093C4(*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0x5c) = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff] * -4;
  *(int *)(param_1 + 0x60) = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] * -4;
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0808753C(param_1);
  return in_lr;
}

