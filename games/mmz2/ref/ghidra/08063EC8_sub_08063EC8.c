// sub_08063EC8 at 0x08063EC8 (thumb)

undefined4 sub_08063EC8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xad00);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833d778,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8065529;
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = sub_08009774(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x800);
  *(int *)(param_1 + 0xc4) = iVar1 + 0xc00;
  iVar1 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  *(int *)(param_1 + 200) = iVar1 + -0xc00;
  iVar3 = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xcc) = iVar3 + ((iVar1 + -0xc00) - iVar3) / 2;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar2 = sub_080BCC7C(param_1,2,0);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08063FBC(param_1);
  return in_lr;
}

