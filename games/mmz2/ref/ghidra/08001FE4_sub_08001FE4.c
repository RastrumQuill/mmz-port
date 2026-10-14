// sub_08001FE4 at 0x08001FE4 (thumb)

undefined4 sub_08001FE4(ushort *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  param_1[1] = *param_1;
  if ((DAT_02000ca2 & 4) == 0) {
    if (param_2 != 0) {
      param_1[4] = DAT_02000ca2 & 4;
      return in_lr;
    }
    param_1[4] = 1;
    puVar3 = &DAT_04000130;
  }
  else {
    if (DAT_02000ca4 == param_2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    param_1[4] = uVar2;
    puVar3 = &DAT_02000cc4 + param_2;
  }
  *param_1 = ~*puVar3;
  uVar4 = 0;
  param_1[2] = (param_1[1] ^ *param_1) & *param_1;
  param_1[3] = 0;
  do {
    uVar6 = (int)(uVar4 * 0x10000) >> 0x10;
    if (((int)(uint)*param_1 >> (uVar6 & 0xff) & 1U) == 0) {
      *(undefined *)((int)param_1 + uVar6 + 10) = 0;
    }
    else {
      pcVar5 = (char *)((int)param_1 + uVar6 + 10);
      if (*pcVar5 == '\0') {
        param_1[3] = (ushort)(1 << (uVar6 & 0xff)) | param_1[3];
        if (((int)(uint)param_1[2] >> (uVar6 & 0xff) & 1U) == 0) {
          cVar1 = *(char *)((int)param_1 + 0x15);
        }
        else {
          cVar1 = *(char *)(param_1 + 10);
        }
        *pcVar5 = cVar1;
      }
      pcVar5 = (char *)((int)param_1 + uVar6 + 10);
      *pcVar5 = *pcVar5 + -1;
    }
    uVar6 = uVar4 * 0x10000 + 0x10000;
    uVar4 = uVar6 >> 0x10;
  } while ((int)uVar6 >> 0x10 < 10);
  return in_lr;
}

