// sub_0805CB3C at 0x0805CB3C (thumb)

undefined4 sub_0805CB3C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa900);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833ce1c,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x805d64d;
  sub_0800FB70(param_1);
  iVar1 = *(int *)(param_1 + 0x54) + 0xc400;
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  DAT_0202e021 = 0;
  *(undefined *)(param_1 + 0xbf) = 0x40;
  *(undefined *)(param_1 + 0xda) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08002638(&DAT_08433368,(DAT_0202e634 - 0x290) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433374,(DAT_0202e434 - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_08433354,(DAT_0202e632 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433360,(DAT_0202e432 - 5) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0805CCC0(param_1);
  return in_lr;
}

