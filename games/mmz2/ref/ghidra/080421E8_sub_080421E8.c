// sub_080421E8 at 0x080421E8 (thumb)

undefined4 sub_080421E8(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433020,(DAT_0202e5e0 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_0843302c,(DAT_0202e3e0 - 7) * 0x20 + 0x200);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
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
  sub_080127E4(param_1,0xa308);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb4) = 2;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0x1a000;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0x74000;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x1a000;
  iVar4 = sub_08009774(*(int *)(param_1 + 100) + 0xa000,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0xcc) = iVar4 + -0x2000;
  iVar4 = sub_08009774(*(int *)(param_1 + 100) + -0x2000,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0xd0) = iVar4 + -0x2000;
  sub_0803F9E4(param_1,&DAT_0833a600,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8045039;
  sub_0804235C(param_1);
  return in_lr;
}

