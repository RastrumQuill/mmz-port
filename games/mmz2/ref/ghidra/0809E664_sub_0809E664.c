// sub_0809E664 at 0x0809E664 (thumb)

undefined4 sub_0809E664(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3907);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343c84,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x11);
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08343d74 + (uVar3 & 3) * 4);
    iVar2 = *(int *)(&DAT_08343cb4 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x11);
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08343d74 + (uVar3 & 3) * 4);
    iVar2 = -*(int *)(&DAT_08343cb4 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + *(int *)(&DAT_08343d84 + (uVar3 & 3) * 4);
  iVar5 = *(int *)(&DAT_08343d14 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x68) = iVar5;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
  *(int *)(param_1 + 0x60) = iVar5 << 4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = 0;
  uVar4 = 0x1000000;
  do {
    uVar3 = uVar3 + 1;
    sub_0809E5C4(param_1,1,uVar4 >> 0x18);
    uVar4 = uVar4 + 0x1000000;
  } while (uVar3 < 5);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809E630(param_1);
  return in_lr;
}

