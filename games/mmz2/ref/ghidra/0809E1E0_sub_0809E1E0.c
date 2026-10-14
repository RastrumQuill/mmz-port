// sub_0809E1E0 at 0x0809E1E0 (thumb)

undefined4 sub_0809E1E0(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x290a);
  sub_080128D4(param_1);
  uVar4 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  iVar1 = DAT_0202e130;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202e130 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  uVar3 = sub_080093C4();
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809E11C(param_1);
  return in_lr;
}

