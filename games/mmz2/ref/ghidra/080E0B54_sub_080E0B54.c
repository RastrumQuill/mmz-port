// sub_080E0B54 at 0x080E0B54 (thumb)

undefined4 sub_080E0B54(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined *)(param_1 + 0x236) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return in_lr;
  }
  if ((DAT_02000d14 & 4) != 0) {
    *(byte *)(param_1 + 0x237) = *(byte *)(param_1 + 0x237) ^ 1;
  }
  if (*(char *)(param_1 + 0x237) != '\0') {
    sub_080DE510(&DAT_0834c9e4 +
                 (ushort)(&DAT_0834c47c)
                         [(byte)(&DAT_0835e353)[*(char *)(param_1 + 0x235) * 4] + 0x29e],2,0x12);
  }
  bVar2 = (byte)DAT_02000d14;
  if ((DAT_02000d14 & 8) != 0) {
    cVar3 = '\x05';
    goto LAB_080e0d1e;
  }
  if ((&DAT_0835e352)[*(char *)(param_1 + 0x235) * 4] != '\0') {
    if ((DAT_02000d10 & 0x40) != 0) {
      pbVar5 = (byte *)(param_1 + 0x236);
      bVar1 = *pbVar5;
      *pbVar5 = bVar1 - 1;
      if ((byte)(&DAT_0835e352)[*(char *)(param_1 + 0x235) * 4] < (byte)(bVar1 - 1)) {
        *pbVar5 = bVar2 & 8;
      }
    }
    if ((DAT_02000d10 & 0x80) != 0) {
      pbVar5 = (byte *)(param_1 + 0x236);
      bVar2 = *pbVar5;
      *pbVar5 = bVar2 + 1;
      if ((byte)(&DAT_0835e352)[*(char *)(param_1 + 0x235) * 4] < (byte)(bVar2 + 1)) {
        *pbVar5 = (&DAT_0835e352)[*(char *)(param_1 + 0x235) * 4];
      }
    }
  }
  DAT_02000fa0._2_2_ = (ushort)*(byte *)(param_1 + 0x236);
  bVar4 = false;
  if ((DAT_02000d14 & 0x100) == 0) {
    if ((DAT_02000d14 & 0x200) != 0) {
      bVar4 = true;
      pbVar5 = (byte *)(param_1 + 0x235);
      bVar2 = *pbVar5;
      *pbVar5 = (byte)(bVar2 - 1);
      if ((int)((bVar2 - 1) * 0x1000000) < 0) {
        *pbVar5 = 0x18;
      }
      if (((&DAT_0835e351)[(char)*pbVar5 * 4] & 0x80) != 0) {
        cVar3 = *pbVar5 - 1;
        goto LAB_080e0d0c;
      }
    }
  }
  else {
    bVar4 = true;
    pcVar6 = (char *)(param_1 + 0x235);
    if (((&DAT_0835e351)[*pcVar6 * 4] & 0x80) != 0) {
      *pcVar6 = *pcVar6 + '\x01';
    }
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + '\x01';
    if ('\x18' < (char)(cVar3 + '\x01')) {
      cVar3 = '\0';
LAB_080e0d0c:
      bVar4 = true;
      *(char *)(param_1 + 0x235) = cVar3;
    }
  }
  if (!bVar4) {
    return in_lr;
  }
  sub_080032EC(0xfd);
  cVar3 = *(char *)(param_1 + 5) + '\x01';
LAB_080e0d1e:
  *(char *)(param_1 + 5) = cVar3;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0;
  return in_lr;
}

