// ReadKeyInput at 0x08000F04 (thumb)

undefined4 ReadKeyInput(ushort *param_1,uint param_2)

{
  char cVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  param_1[1] = *param_1;
  if ((DAT_02004ca0 == 1) && (DAT_02004c80 == 1)) {
    if (DAT_02004c82 == param_2) {
      param_1[4] = 1;
    }
    else {
      param_1[4] = 2;
    }
    puVar2 = (ushort *)(&DAT_02004c8c + param_2 * 2);
  }
  else {
    if (param_2 != 0) {
      param_1[4] = 0;
      return in_lr;
    }
    param_1[4] = 1;
    puVar2 = &DAT_04000130;
  }
  *param_1 = ~*puVar2;
  uVar3 = 0;
  param_1[2] = (*param_1 ^ param_1[1]) & *param_1;
  param_1[3] = 0;
  do {
    uVar6 = (int)(uVar3 * 0x10000) >> 0x10;
    uVar4 = (int)(uint)*param_1 >> (uVar6 & 0xff) & 1;
    cVar1 = (char)uVar4;
    if (uVar4 != 0) {
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
      cVar1 = *(char *)((int)param_1 + uVar6 + 10) + -1;
    }
    *(char *)((int)param_1 + uVar6 + 10) = cVar1;
    uVar4 = uVar3 * 0x10000 + 0x10000;
    uVar3 = uVar4 >> 0x10;
  } while ((int)uVar4 >> 0x10 < 10);
  return in_lr;
}

