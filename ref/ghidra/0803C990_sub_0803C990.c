// sub_0803C990 at 0x0803C990 (thumb)

undefined4 sub_0803C990(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  pcVar4 = (char *)(param_1 + 0xd2);
  if (*pcVar4 == '\0') {
    if ((*(short *)(param_1 + 0x8c) < (short)(ushort)(*(byte *)(param_1 + 0xd8) >> 1)) &&
       (4 < *(byte *)(DAT_02022b20 + 1))) {
      bVar2 = *(byte *)(param_1 + 0xcd);
      uVar7 = 0xc;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0xcd);
      uVar7 = 9;
    }
    uVar3 = sub_080C8B68(bVar2 + 1,uVar7);
    *(undefined *)(param_1 + 0xcd) = uVar3;
    switch(*(undefined *)(param_1 + 0xcd)) {
    case 0:
    case 3:
    case 6:
    case 9:
      *(undefined *)(param_1 + 0xd) = 4;
      break;
    case 1:
    case 4:
    case 7:
    case 10:
      *(undefined *)(param_1 + 0xd) = 7;
      break;
    case 2:
      *(undefined *)(param_1 + 0xd) = 8;
      break;
    case 5:
      *(undefined *)(param_1 + 0xd) = 0xd;
      break;
    case 8:
      *(undefined *)(param_1 + 0xd) = 0x15;
      uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
      *(byte *)(param_1 + 0xd0) = ((byte)(uVar6 * 2 >> 0x11) & 1) + 2;
      uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      *(byte *)(param_1 + 0xd1) = ((byte)(uVar6 * 2 >> 0x11) & 1) * '\x04' + '\x10';
      break;
    case 0xb:
      if (*pcVar4 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0x10;
        *pcVar4 = '\x01';
      }
    }
    goto switchD_0803ca8a_caseD_c;
  }
  pbVar5 = (byte *)(param_1 + 0xcd);
  switch(*pbVar5) {
  case 0:
    uVar3 = 4;
    break;
  case 1:
    uVar3 = 7;
    break;
  case 2:
    uVar3 = 8;
    break;
  case 3:
    uVar3 = 4;
    break;
  case 4:
    uVar3 = 7;
    break;
  case 5:
    uVar3 = 0xd;
    break;
  default:
    goto switchD_0803c9fa_caseD_6;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
switchD_0803c9fa_caseD_6:
  bVar2 = sub_080C8B68(*pbVar5 + 1,6);
  *pbVar5 = bVar2;
switchD_0803ca8a_caseD_c:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

