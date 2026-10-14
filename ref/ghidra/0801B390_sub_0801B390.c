// sub_0801B390 at 0x0801B390 (thumb)

undefined8 sub_0801B390(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar5 = *(byte *)(param_1 + 0x130 + (uint)*(byte *)(param_1 + 0x12e));
  bVar4 = *(byte *)(param_1 + 0x130 + (*(byte *)(param_1 + 0x12e) - 1 & 0x3f)) & ~bVar5;
  bVar1 = sub_0801C4FC(param_1);
  if (bVar1 < 2) {
    uVar7 = 0;
    bVar1 = 0x10;
    uVar8 = 0;
  }
  else if (*(char *)(param_1 + 0x219) == '\x01') {
    if ((*(char *)(param_1 + 0x18a) == '\x03') && (*(char *)(param_1 + 0x18b) != '\x03')) {
      uVar7 = 1;
      bVar1 = 0x80;
      uVar8 = uVar7;
    }
    else {
      uVar7 = 0;
      bVar1 = 0x10;
      uVar8 = uVar7;
    }
  }
  else {
    bVar1 = 0x10;
    uVar8 = 0;
    if (*(char *)(param_1 + 0x219) == '\x02') {
      uVar7 = (uint)*(byte *)(param_1 + 0x19c);
    }
    else {
      uVar7 = (uint)(bVar5 >> 7);
    }
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x18a + uVar7);
  if (uVar6 == 3) {
    if (*(int *)(param_1 + 0xe8) == 0) {
      pbVar3 = (byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      goto LAB_0801b448;
    }
    uVar6 = 0xffffffff;
    bVar5 = 0;
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x12d);
LAB_0801b448:
    bVar5 = *pbVar3;
  }
  if ((bVar5 & bVar1) == 0) {
    if ((bVar1 & bVar4) == 0) {
      uVar6 = 0xffffffff;
      goto LAB_0801b47c;
    }
    uVar2 = sub_080186D8(param_1);
    if (uVar2 <= *(byte *)(param_1 + 0x122 + uVar8)) goto LAB_0801b47c;
    uVar6 = 0xffffffff;
  }
  else {
LAB_0801b47c:
    if (-1 < (int)uVar6) goto LAB_0801b4f6;
  }
  if (*(char *)(param_1 + 0x219) != '\x01') goto LAB_0801b4f6;
  if (uVar7 != 0) {
    bVar5 = 0x10;
  }
  else {
    bVar5 = 0x80;
  }
  uVar8 = (uint)(uVar7 == 0);
  uVar6 = (uint)*(byte *)(param_1 + 0x18a + uVar8);
  if (uVar6 == 3) {
    if (*(int *)(param_1 + 0xe8) == 0) {
      pbVar3 = (byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      goto LAB_0801b4cc;
    }
    uVar6 = 0xffffffff;
    bVar1 = 0;
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x12d);
LAB_0801b4cc:
    bVar1 = *pbVar3;
  }
  if (((bVar1 & bVar5) == 0) &&
     (((bVar4 & bVar5) == 0 ||
      (uVar7 = sub_080186D8(param_1), *(byte *)(param_1 + 0x122 + uVar8) < uVar7)))) {
    uVar6 = 0xffffffff;
  }
LAB_0801b4f6:
  return CONCAT44(in_lr,(int)(char)uVar6);
}

