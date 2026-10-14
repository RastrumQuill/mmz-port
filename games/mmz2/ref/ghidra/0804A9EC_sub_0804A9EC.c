// sub_0804A9EC at 0x0804A9EC (thumb)

undefined4 sub_0804A9EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433034,(DAT_0202e5e2 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433040,(DAT_0202e3e2 - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_08433048,(DAT_0202e5e4 - 0x350) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433054,(DAT_0202e3e4 - 7) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa100);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833b538,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x804cc99;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0x54) + 0xf000;
  iVar1 = *(int *)(param_1 + 0xc4) + 0xd000;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xcc) = iVar1 + -0x4000;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0804AB60(param_1);
  return in_lr;
}

