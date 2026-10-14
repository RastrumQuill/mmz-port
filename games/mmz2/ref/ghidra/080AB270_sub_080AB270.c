// sub_080AB270 at 0x080AB270 (thumb)

undefined4 sub_080AB270(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8b03);
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083457c4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar4 = -0x1600;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar4 = 0x1600;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar4;
  iVar2 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1f;
  }
  iVar2 = iVar2 >> 5;
  *(int *)(param_1 + 0x5c) = iVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xffffff00;
    if (iVar2 < -0xff) goto LAB_080ab348;
  }
  else {
    if (0xff < iVar2) goto LAB_080ab348;
    uVar3 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
LAB_080ab348:
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + -0x2800;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080AB210(param_1);
  return in_lr;
}

