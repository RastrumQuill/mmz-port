// sub_080BE318 at 0x080BE318 (thumb)

undefined4 sub_080BE318(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x9c01);
  sub_080128D4(param_1);
  bVar2 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  uVar3 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar5 = -((uVar4 * 2 >> 0x11 & 0xff) + 0x100);
  }
  else {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar5 = (uVar4 * 2 >> 0x11 & 0xff) + 0x100;
  }
  DAT_0202e188 = uVar4 & 0x7fffffff;
  *(int *)(param_1 + 0x5c) = iVar5;
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x60) = ((uVar4 * 2 >> 0x11 & 7) + 0x10) * -0x40;
  *(undefined *)(param_1 + 0x13) = 0xfd;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  uVar1 = (undefined)(uVar4 * 2 >> 0x11);
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BE218(param_1);
  return in_lr;
}

