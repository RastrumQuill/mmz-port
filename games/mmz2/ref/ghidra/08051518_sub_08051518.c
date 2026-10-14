// sub_08051518 at 0x08051518 (thumb)

undefined4 sub_08051518(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  sub_08002638(&DAT_0843314c,(DAT_0202e5fe - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433158,(DAT_0202e3fe - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08433160,(DAT_0202e600 - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_0843316c,(DAT_0202e400 - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_08433e94,(DAT_0202e752 - 0x350) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433ea0,(DAT_0202e552 - 7) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xb4) = 2;
  *(undefined *)(param_1 + 0xb5) = 0;
  iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  piVar5 = (int *)(param_1 + 0xbc);
  *piVar5 = iVar3;
  sub_080093C4(*(undefined4 *)(DAT_0202e130 + 0x54),*(undefined4 *)(DAT_0202e130 + 0x58));
  uVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*piVar5 + -0x5000);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(int *)(param_1 + 0x58) = *piVar5 + -0x8000;
  *(undefined *)(param_1 + 0xb6) = 2;
  *(undefined *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0x5000;
  uVar4 = sub_080A2CF8(param_1,param_1 + 0x54,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined *)(param_1 + 0xc1) = 0;
  sub_0803F9E4(param_1,&DAT_0833c1c8,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8057939;
  sub_08051728(param_1);
  return in_lr;
}

