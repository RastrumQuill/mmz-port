// sub_0804D618 at 0x0804D618 (thumb)

undefined4 sub_0804D618(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa100);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  DAT_0202e03c = 0;
  sub_0803F9E4(param_1,&DAT_0833b6f4,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x804ea01;
  sub_080106D8(param_1);
  iVar1 = *(int *)(param_1 + 0x54) + 0xf000;
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xd2) = 0;
  *(undefined *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x54) + -0x11000;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0x54) + 0x8000;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xb8) + -0x3c00;
  *(undefined2 *)(param_1 + 0xd6) = 0xffff;
  sub_08002638(&DAT_084330fc,(DAT_0202e5f6 - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433108,(DAT_0202e3f6 - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_08433110,(DAT_0202e5f8 - 0x380) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_0843311c,(DAT_0202e3f8 - 7) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0804D7B4(param_1);
  return in_lr;
}

