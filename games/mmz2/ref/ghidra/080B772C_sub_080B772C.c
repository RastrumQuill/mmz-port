// sub_080B772C at 0x080B772C (thumb)

undefined4 sub_080B772C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  short *psVar5;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((*(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x11) & 3U) < 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    uVar3 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  psVar4 = (short *)(param_1 + 0x74);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (int)*psVar4;
  psVar5 = (short *)(param_1 + 0x76);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)*psVar5;
  *psVar4 = *psVar4 - *(short *)(param_1 + 0x7c);
  *psVar5 = *psVar5 - *(short *)(param_1 + 0x7e);
  psVar4 = (short *)(param_1 + 0x78);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)*psVar4;
  psVar5 = (short *)(param_1 + 0x7a);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)*psVar5;
  *psVar4 = *psVar4 - *(short *)(param_1 + 0x80);
  *psVar5 = *psVar5 - *(short *)(param_1 + 0x82);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

