// sub_08037150 at 0x08037150 (thumb)

undefined8 sub_08037150(int param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar6 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  bVar2 = *(byte *)(param_1 + 0x198 + (*(byte *)(param_1 + 0x195) - 1 & 0x3f)) & ~bVar6;
  bVar3 = sub_08037C20(param_1);
  if (bVar3 < 2) {
    uVar8 = 0;
    bVar3 = 0x10;
  }
  else if (*(char *)(param_1 + 0x1f5) == '\x01') {
    if ((*(char *)(param_1 + 0x212) == '\x03') && (*(char *)(param_1 + 0x213) != '\x03')) {
      uVar8 = 1;
      bVar3 = 0x80;
    }
    else {
      uVar8 = 0;
      bVar3 = 0x10;
    }
  }
  else {
    bVar3 = 0x10;
    if (*(char *)(param_1 + 0x1f5) == '\x02') {
      uVar8 = (uint)*(byte *)(param_1 + 0x214);
    }
    else {
      uVar8 = (uint)(bVar6 >> 7);
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x212 + uVar8);
  if (uVar7 == 3) {
    if (*(int *)(param_1 + 0x2a0) == 0) {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) == 0) {
        pbVar4 = (byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
        goto LAB_08037246;
      }
    }
    uVar7 = 0xffffffff;
    bVar6 = 0;
  }
  else {
    pbVar4 = (byte *)(param_1 + 0x196);
LAB_08037246:
    bVar6 = *pbVar4;
  }
  if ((bVar6 & bVar3) == 0) {
    if ((bVar3 & bVar2) == 0) {
      uVar7 = 0xffffffff;
      goto LAB_08037276;
    }
    uVar5 = sub_08035494(param_1);
    if (uVar5 <= *(byte *)(param_1 + 0x188 + uVar8)) goto LAB_08037276;
    uVar7 = 0xffffffff;
  }
  else {
LAB_08037276:
    if (-1 < (int)uVar7) goto LAB_08037328;
  }
  if (*(char *)(param_1 + 0x1f5) != '\x01') goto LAB_08037328;
  if (uVar8 != 0) {
    bVar6 = 0x10;
  }
  else {
    bVar6 = 0x80;
  }
  uVar8 = (uint)(uVar8 == 0);
  uVar7 = (uint)*(byte *)(param_1 + 0x212 + uVar8);
  if (uVar7 == 3) {
    if (*(int *)(param_1 + 0x2a0) == 0) {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) == 0) {
        pbVar4 = (byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
        goto LAB_080372fe;
      }
    }
    uVar7 = 0xffffffff;
    bVar3 = 0;
  }
  else {
    pbVar4 = (byte *)(param_1 + 0x196);
LAB_080372fe:
    bVar3 = *pbVar4;
  }
  if (((bVar3 & bVar6) == 0) &&
     (((bVar2 & bVar6) == 0 ||
      (uVar5 = sub_08035494(param_1), *(byte *)(param_1 + 0x188 + uVar8) < uVar5)))) {
    uVar7 = 0xffffffff;
  }
LAB_08037328:
  return CONCAT44(in_lr,(int)(char)uVar7);
}

