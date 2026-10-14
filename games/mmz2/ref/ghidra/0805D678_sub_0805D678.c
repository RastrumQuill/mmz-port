// sub_0805D678 at 0x0805D678 (thumb)

undefined4 sub_0805D678(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_084333a4,(DAT_0202e63a - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084333b0,(DAT_0202e43a - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_084333b8,(DAT_0202e63c - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084333c4,(DAT_0202e43c - 7) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xaa04);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833cedc,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x805f201;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbf) = 2;
  *(undefined *)(param_1 + 0xd8) = 1;
  iVar1 = *(int *)(param_1 + 0x54) + 0x4000;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08009774(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc0) = iVar1;
  uVar2 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  iVar1 = *(int *)(param_1 + 0xc0) + 0xb000;
  *(int *)(param_1 + 0x54) = iVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 200);
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0805D838(param_1);
  return in_lr;
}

