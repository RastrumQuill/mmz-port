// sub_080645C8 at 0x080645C8 (thumb)

undefined4 sub_080645C8(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar5 = DAT_0202e130;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  pbVar7 = (byte *)(param_1 + 0xbd);
  if ((*pbVar7 & 1) == 0) {
    uVar4 = (uint)(*pbVar7 >> 1);
  }
  else {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar4 = sub_080EF330(uVar4 * 2 >> 0x11,7);
    uVar4 = uVar4 & 0xff;
  }
  cVar2 = (&DAT_0833d8c8)[uVar4];
  *(char *)(param_1 + 0xd) = cVar2;
  if ((cVar2 == '\x0f') || (cVar2 == '\x1c')) {
    if ((*(int *)(param_1 + 0xd0) == 0) && (*(char *)(param_1 + 0xd8) == '\0')) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        iVar5 = *(int *)(param_1 + 0x54) - iVar5;
      }
      else {
        iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        iVar5 = iVar5 - *(int *)(param_1 + 0x54);
      }
      if (iVar5 < 0x4000) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\x05') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = iVar5 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = *(int *)(param_1 + 0x54) - iVar5;
    }
    if (iVar5 < 0x3000) {
      *(undefined *)(param_1 + 0xd) = 7;
    }
  }
  if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
    bVar3 = *pbVar7;
    uVar6 = 0xe;
  }
  else {
    bVar3 = *pbVar7;
    uVar6 = 0xf;
  }
  bVar3 = sub_080EF1E8(bVar3 + 1,uVar6);
  *pbVar7 = bVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

