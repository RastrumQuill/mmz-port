// sub_080C6FA4 at 0x080C6FA4 (thumb)

undefined4 sub_080C6FA4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar5 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 6;
  puVar3 = (undefined4 *)(param_1 + 0x54);
  iVar4 = 1;
  do {
    puVar3[2] = *puVar3;
    puVar3[3] = puVar3[1];
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  sub_0801CC9C(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  sub_0801CF00(param_1,0x640a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088629b4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = bVar1 - 1;
  if (uVar5 != 0) {
    sub_080C6E3C(param_1,param_1 + 0x54,uVar5 & 0xff);
  }
  sub_080C7084(param_1);
  return in_lr;
}

