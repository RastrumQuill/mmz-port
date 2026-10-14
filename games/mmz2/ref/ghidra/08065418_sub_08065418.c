// sub_08065418 at 0x08065418 (thumb)

undefined4 sub_08065418(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad16);
    sub_08006E08(param_1 + 0x74,&DAT_0833d778);
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar5 = 0x100;
    }
    else {
      uVar5 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar4 = sub_08008CFC();
  if (sVar4 != 0) {
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

