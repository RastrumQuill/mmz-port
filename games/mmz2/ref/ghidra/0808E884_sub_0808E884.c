// sub_0808E884 at 0x0808E884 (thumb)

undefined4 sub_0808E884(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080127E4(param_1,0x2205);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  }
  else {
    sub_080127E4(param_1,0x2204);
    *(undefined *)(param_1 + 0x25) = 0x19;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083420a0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0xb4) = *(int *)(iVar1 + 0x54) + 0x400;
  iVar1 = sub_080093C4(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + -0x2b00;
  sub_080A9B44(param_1,0,*(undefined *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0808E970(param_1);
  return in_lr;
}

