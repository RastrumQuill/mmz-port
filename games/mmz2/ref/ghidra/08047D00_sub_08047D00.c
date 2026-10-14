// sub_08047D00 at 0x08047D00 (thumb)

undefined4 sub_08047D00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433174,(DAT_0202e602 - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433180,(DAT_0202e402 - 7) * 0x20 + 0x200);
  sub_08002638(&DAT_084331c4,(DAT_0202e60a - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084331d0,(DAT_0202e40a - 6) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa523);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833ad0c,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8049685;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x54) + 0xf000;
  iVar1 = *(int *)(param_1 + 0x54) + 0xd000;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xc0) + 0x7800;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xb8) + -0x4000;
  uVar2 = sub_080496C8(param_1,0,0);
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined2 *)(param_1 + 0xde) = 0xffff;
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08047E9C(param_1);
  return in_lr;
}

