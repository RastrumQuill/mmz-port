// sub_080E5268 at 0x080E5268 (thumb)

undefined4 sub_080E5268(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x7250);
    if (bVar1 < 99) {
      *(byte *)(param_1 + 0x7250) = bVar1 + 1;
    }
    if (*(char *)(param_1 + 0x7253) == '\0') {
      sub_080032EC(6);
      uVar3 = 1;
      *(undefined *)(param_1 + 0x7253) = 1;
LAB_080e52e2:
      *(undefined *)(param_1 + 2) = uVar3;
    }
    else if (((DAT_0202ebb4 & 1) != 0) && (*(char *)(param_1 + 0x7252) == '\0')) {
      sub_080032EC(6);
      *(undefined *)(param_1 + 0x7252) = 1;
      uVar3 = 4;
      goto LAB_080e52e2;
    }
    pbVar7 = (byte *)(param_1 + 0x7264);
    sub_080140D0(pbVar7);
    if (*(char *)(param_1 + 0x7251) == '\x01') {
      *pbVar7 = *pbVar7 | 1;
    }
    if ((DAT_0202ebba & 0x80) != 0) {
      *(byte *)(param_1 + 0x726a) = *(byte *)(param_1 + 0x726a) | 0x80;
    }
    bVar1 = DAT_0202ebbb;
    if ((DAT_0202ebbb & 0x10) != 0) {
      *(byte *)(param_1 + 0x726b) = *(byte *)(param_1 + 0x726b) | 0x10;
    }
    if ((bVar1 & 0x40) != 0) {
      *(byte *)(param_1 + 0x726b) = *(byte *)(param_1 + 0x726b) | 0x40;
    }
    if ((bVar1 & 0x80) != 0) {
      *(byte *)(param_1 + 0x726b) = *(byte *)(param_1 + 0x726b) | 0x80;
    }
    sub_08013FFC(1,pbVar7);
    uVar8 = *(undefined4 *)(param_1 + 0x72e0);
    sub_08014130(param_1 + 0x72d4);
    *(undefined4 *)(param_1 + 0x72e0) = uVar8;
    pcVar2 = DAT_0202ebf0;
    iVar6 = sub_080D65B8(param_1 + 0x736c);
    if (iVar6 * 2 + 2U < 10) {
      cVar4 = sub_080D65B8(param_1 + 0x736c);
      cVar4 = cVar4 * '\x02' + '\x02';
    }
    else {
      cVar4 = '\t';
    }
    *pcVar2 = cVar4;
    iVar6 = param_1 + 0x7324;
    sub_0801E79C(*(undefined4 *)(param_1 + 0x75b8),iVar6);
    sub_08031188(iVar6);
    sub_0801E708(*(undefined4 *)(param_1 + 0x75b8),0,iVar6);
    if (*(char *)(param_1 + 2) == '\0') {
      sub_080E0E64(param_1,0xb00);
      break;
    }
    *(undefined2 *)(param_1 + 6) = 0;
  case 1:
  case 4:
    sVar5 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar5;
    DAT_03002ec0 = (undefined)sVar5;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < sVar5) {
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080e527c_caseD_2:
      if ((DAT_02000d14 & 3) != 0) {
        sub_080032EC(2);
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
  case 5:
    goto switchD_080e527c_caseD_2;
  case 3:
  case 6:
    sVar5 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar5;
    DAT_03002ec0 = (undefined)sVar5;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar5 == 0) {
      sub_080E0E64(param_1,0xb00);
    }
  }
  if ((byte)(*(char *)(param_1 + 2) - 1U) < 3) {
    sub_080DE510(&DAT_0834e873,2,6);
  }
  if ((byte)(*(char *)(param_1 + 2) - 4U) < 3) {
    sub_080DE510(&DAT_0834e8d7,2,3);
  }
  return in_lr;
}

