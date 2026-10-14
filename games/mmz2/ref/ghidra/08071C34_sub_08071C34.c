// sub_08071C34 at 0x08071C34 (thumb)

undefined4 sub_08071C34(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1a03);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(byte *)(param_1 + 0x13) = *(byte *)(iVar6 + 10) >> 4 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833ef48,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0833f008;
  *(undefined2 *)(param_1 + 0x26) = 0x801;
  *(undefined4 *)(param_1 + 0x98) = 0x807232d;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar4 = -0x2a00;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar4 = 0x2a00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar4;
  uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar6 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08071D48(param_1);
  return in_lr;
}

