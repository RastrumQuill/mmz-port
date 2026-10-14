// sub_0809774C at 0x0809774C (thumb)

undefined4 sub_0809774C(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x5000);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    pcVar3 = (char *)(param_1 + 0xbd);
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x7f) {
      *pcVar3 = cVar1 + -4;
      if ((byte)(cVar1 - 4U) < 0x40) {
LAB_080977c0:
        *pcVar3 = '@';
      }
    }
    else {
      *pcVar3 = cVar1 + '\x04';
      if (0x40 < (byte)(cVar1 + 4U)) goto LAB_080977c0;
    }
    if (*pcVar3 != '@') goto switchD_08097778_caseD_5;
    sub_0801CF00(param_1,0x5005);
    break;
  case 1:
    if ((*(char *)(param_1 + 0x71) < '\x02') || ('\x01' < *(char *)(param_1 + 0x72)))
    goto switchD_08097778_caseD_5;
    bVar2 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar4 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08097778_caseD_5;
    sub_0801CF00(param_1,0x5000);
    break;
  case 3:
    pbVar5 = (byte *)(param_1 + 0xbd);
    bVar2 = *pbVar5;
    *pbVar5 = bVar2 + 4;
    if ((byte)(bVar2 + 4) < 0x75) goto switchD_08097778_caseD_5;
    *pbVar5 = 0x74;
    break;
  case 4:
    pbVar5 = (byte *)(param_1 + 0xbd);
    bVar2 = *pbVar5;
    *pbVar5 = bVar2 - 2;
    if ((byte)(bVar2 - 2) < 0x70) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *pbVar5 = 0x70;
    }
  default:
    goto switchD_08097778_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08097778_caseD_5:
  sub_0801CFF0(param_1);
  return in_lr;
}

