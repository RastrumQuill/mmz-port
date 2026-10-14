// sub_08045D54 at 0x08045D54 (thumb)

undefined4 sub_08045D54(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  pbVar6 = (byte *)(param_1 + 0xcd);
  pcVar7 = (char *)(param_1 + 0xcc);
  do {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0xf;
    iVar5 = ((uint)(*(short *)(param_1 + 0xa4) < 0x30) + (uint)*(byte *)(param_1 + 0x11) * 2) * 0x10
    ;
    if (*pcVar7 != (&DAT_0835ee9c)[uVar4 + iVar5]) break;
  } while (1 < *pbVar6);
  if (*pcVar7 == (&DAT_0835ee9c)[uVar4 + iVar5]) {
    bVar2 = *pbVar6 + 1;
  }
  else {
    bVar2 = 0;
    *pcVar7 = (&DAT_0835ee9c)[uVar4 + iVar5];
  }
  *pbVar6 = bVar2;
  cVar1 = (&DAT_0835ee9c)[uVar4 + iVar5];
  if (cVar1 != '\x01') {
    *(char *)(param_1 + 0xd) = cVar1;
    cVar1 = (&DAT_0835ee9c)[uVar4 + iVar5];
    if (cVar1 == '\x05') {
      *(undefined *)(iVar3 + 0xd) = 6;
    }
    else {
      *(char *)(iVar3 + 0xd) = cVar1;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(iVar3 + 0xe) = 0;
  }
  return in_lr;
}

