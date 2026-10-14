// sub_080BB6D0 at 0x080BB6D0 (thumb)

undefined4 sub_080BB6D0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar2 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  sub_080127E4(param_1,0x7507);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  iVar3 = *(int *)(iVar6 + 0x5c) * 100;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar6 + 0x60);
  uVar4 = 0;
  cVar1 = *(char *)(iVar6 + 0xf);
  if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x06')) {
    uVar4 = 1;
  }
  *(undefined *)(param_1 + 0x13) = uVar4;
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BB660(param_1);
  return in_lr;
}

