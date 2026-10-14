// sub_0804B0AC at 0x0804B0AC (thumb)

undefined4 sub_0804B0AC(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
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
  if ((*(char *)(param_1 + 0xe) == '\0') && ((DAT_0202ec42 & 1) != 0)) {
    sub_080127E4(param_1,0xa103);
    sub_080128D4(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  if (4 < *(byte *)(DAT_0202ebf0 + 1)) {
    pcVar7 = (char *)(param_1 + 0xbf);
    if (*pcVar7 == '\0') {
      if (*(short *)(param_1 + 0xa4) < 0x21) {
LAB_0804b16a:
        *(undefined *)(param_1 + 0xd) = 0x1a;
        *(undefined *)(param_1 + 0xe) = 0;
        *pcVar7 = *pcVar7 + '\x01';
        return in_lr;
      }
    }
    else if ((*pcVar7 == '\x01') && (*(short *)(param_1 + 0xa4) < 0x11)) goto LAB_0804b16a;
  }
  pbVar6 = (byte *)(param_1 + 0xbe);
  if ((*pbVar6 & 1) == 0) {
    uVar5 = ((uint)*pbVar6 << 0x18) >> 0x19;
  }
  else {
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 3;
  }
  switch(uVar5) {
  case 0:
    uVar4 = 7;
    break;
  case 1:
    uVar4 = 0xb;
    break;
  case 2:
    uVar4 = 0xd;
    break;
  case 3:
    uVar4 = 0x12;
    break;
  case 4:
    uVar4 = 0x1a;
    break;
  default:
    goto switchD_0804b1c0_caseD_5;
  }
  *(undefined *)(param_1 + 0xd) = uVar4;
switchD_0804b1c0_caseD_5:
  *(undefined *)(param_1 + 0xe) = 0;
  *pbVar6 = (char)(*pbVar6 + 1) + (char)((int)(*pbVar6 + 1) >> 3) * -8;
  return in_lr;
}

