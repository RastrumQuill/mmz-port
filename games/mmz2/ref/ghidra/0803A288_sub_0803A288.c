// sub_0803A288 at 0x0803A288 (thumb)

undefined4 sub_0803A288(int param_1)

{
  undefined2 uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083375bc + (uint)*(byte *)(param_1 + 0x10) * 4));
  uVar1 = 0x18;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0x1fc);
  if (*pbVar2 == 4) {
    uVar1 = 0x58;
  }
  *(undefined2 *)(param_1 + 100) = uVar1;
  *(undefined *)(param_1 + 0x67) = (&DAT_083359fe)[*pbVar2];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08336594,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803a91d;
  sub_0803AA00(param_1,*(undefined *)(param_1 + 0x68),(int)*(char *)(param_1 + 0x71));
  *(undefined *)(param_1 + 0x6b) = 0;
  sub_080032EC(0x15);
  sub_0803A408(param_1);
  return in_lr;
}

