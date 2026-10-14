// sub_0809D610 at 0x0809D610 (thumb)

undefined4 sub_0809D610(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0xbd) == '\0') {
    sub_080127E4(param_1,0x1d0e);
  }
  else {
    if (*(char *)(param_1 + 0xbd) == '\x01') {
      uVar5 = 0x1d11;
    }
    else {
      uVar5 = 0x1d12;
    }
    sub_080127E4(param_1,uVar5);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343b00,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = *(byte *)(param_1 + 0xbc);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0xf;
  iVar4 = ((uint)*(byte *)(param_1 + 0xbc) * 9 + (uint)*(byte *)(param_1 + 0x11) * 3) * 2;
  bVar1 = (&DAT_0833a28d)[iVar4];
  iVar3 = iVar3 + 0xb4;
  piVar6 = (int *)(iVar3 + ((byte)(&DAT_0833a28c)[iVar4] + 4) * 4);
  iVar4 = *(int *)(*piVar6 + 0x54);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar7 = *(int *)(*piVar6 + 0x58);
  *(int *)(param_1 + 0x58) = iVar7 + 0x1400;
  piVar6 = (int *)(iVar3 + (bVar1 + 4) * 4);
  iVar4 = *(int *)(*piVar6 + 0x54) - iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 4;
  iVar7 = *(int *)(*piVar6 + 0x58) - iVar7;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xf;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 4;
  sub_0809D53C(param_1);
  return in_lr;
}

