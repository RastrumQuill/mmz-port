// sub_0803FA1C at 0x0803FA1C (thumb)

undefined4 sub_0803FA1C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432d50,(DAT_0202e598 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d5c,(DAT_0202e398 - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_08432d64,(DAT_0202e59a - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d70,(DAT_0202e39a - 5) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x400);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833a1d0,0x20);
  *(undefined *)(param_1 + 0xbd) = 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x1400;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xe1) = 0;
  *(undefined *)(param_1 + 0xe2) = 0;
  *(undefined *)(param_1 + 0xe3) = 2;
  sub_080689BC(param_1,2,0x19);
  uVar2 = sub_080694AC(param_1,0,0);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  sub_080689BC(param_1,0,0x18);
  uVar2 = sub_08068C44(param_1,0,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  sub_080689BC(param_1,3,0x18);
  uVar2 = sub_080689BC(param_1,1,0x18);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0803FBB8(param_1);
  return in_lr;
}

