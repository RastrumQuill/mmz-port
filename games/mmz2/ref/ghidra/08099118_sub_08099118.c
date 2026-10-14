// sub_08099118 at 0x08099118 (thumb)

undefined4 sub_08099118(int param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x812);
  sub_080128D4(param_1);
  bVar3 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083432fc,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8099561;
  uVar4 = *(byte *)(param_1 + 0xc0) + 0x80 & 0xff;
  sVar1 = (&DAT_080ef450)[uVar4 + 0x40 & 0xff];
  *(int *)(param_1 + 0x5c) = sVar1 * 3;
  sVar2 = (&DAT_080ef450)[uVar4];
  *(int *)(param_1 + 0x60) = sVar2 * 3;
  iVar5 = sVar1 * -3;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  *(int *)(param_1 + 100) = iVar5 >> 2;
  iVar5 = sVar2 * -3;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  *(int *)(param_1 + 0x68) = iVar5 >> 2;
  *(undefined *)(param_1 + 0x12) = 0x12;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  sub_08098ED4(*(undefined4 *)(param_1 + 0x28),param_1,8,1);
  sub_08098ED4(*(undefined4 *)(param_1 + 0x28),param_1,8,3);
  sub_08098ED4(*(undefined4 *)(param_1 + 0x28),param_1,8,5);
  sub_08098ED4(*(undefined4 *)(param_1 + 0x28),param_1,8,7);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_08098F50(param_1);
  return in_lr;
}

