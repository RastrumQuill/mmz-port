// sub_0809E364 at 0x0809E364 (thumb)

undefined4 sub_0809E364(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    sub_08005760(param_1 + 0x74,&DAT_0885e130,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    sub_0801CF00(param_1,0x6e0a);
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    sub_08005760(param_1 + 0x74,&DAT_0885e160,param_1 + 0x54,3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar2 = FUN_081288bc(*(int *)(&DAT_081295ec + (uint)*(byte *)(param_1 + 0x11) * 4) << 8,0x14);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    sub_0801CF00(param_1,0x6e0c);
  }
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0xb4) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0xb4) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined4 *)(param_1 + 0x98) = 0x809e5a1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  sub_0809E47C(param_1);
  return in_lr;
}

