// sub_080C180C at 0x080C180C (thumb)

undefined4 sub_080C180C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x3e00);
  sub_0801CFF0(param_1);
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
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar3 << 4);
  bVar1 = *(byte *)(iVar5 + 10) >> 5;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar3 << 5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08861e20,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar2 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
    *(int *)(param_1 + 0x5c) = -*(int *)(&DAT_08861e68 + (uint)*(byte *)(param_1 + 0x11) * 4);
    uVar3 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(byte *)(iVar5 + 10) & 0x20) == 0) goto LAB_080c1944;
    iVar5 = -*(int *)(&DAT_08861e98 + uVar3 * 4);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(&DAT_08861e68 + (uint)*(byte *)(param_1 + 0x11) * 4);
    uVar3 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(byte *)(iVar5 + 10) & 0x20) == 0) goto LAB_080c1944;
    iVar5 = *(int *)(&DAT_08861e98 + uVar3 * 4);
  }
  *(int *)(param_1 + 100) = iVar5;
LAB_080c1944:
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(&DAT_08861e80 + uVar3 * 4);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1100;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(&DAT_08861e98 + uVar3 * 4);
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1100;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C17AC(param_1);
  return in_lr;
}

