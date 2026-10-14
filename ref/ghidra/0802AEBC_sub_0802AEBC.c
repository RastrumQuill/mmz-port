// sub_0802AEBC at 0x0802AEBC (thumb)

undefined4 sub_0802AEBC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = sub_0802B120(param_1,3);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x40;
    pcVar8 = (char *)(param_1 + 0xc4);
    cVar2 = *pcVar8;
    *pcVar8 = '0';
    if (cVar2 == '0') {
      *pcVar8 = '\0';
    }
  }
  sub_080297C0(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    break;
  case 1:
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 200) + (*(byte *)(param_1 + 0x12) & 1) * 0x100;
    uVar9 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)uVar9;
    if ((uVar9 & 0xff) != 0xff) {
      return in_lr;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + -1;
    return in_lr;
  case 2:
    *(undefined *)(param_1 + 0xe1) = 2;
    iVar5 = (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0xd8)) + -0x1000 >> 0xd;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else {
      iVar7 = *(byte *)(param_1 + 0xc3) - 1;
      if (iVar7 < iVar5) {
        iVar5 = iVar7;
      }
    }
    pbVar10 = (byte *)(param_1 + 0xc3);
    pbVar6 = (byte *)(param_1 + 0xc2);
    *pbVar6 = (byte)(iVar5 + 1);
    if (((-1 < (iVar5 + 1) * 0x1000000) && (bVar1 = *pbVar6, (int)(char)bVar1 < (int)(uint)*pbVar10)
        ) && (((int)(uint)*(byte *)(param_1 + 0xe2) >> (uint)bVar1 & 1U) == 0)) {
      *(byte *)(param_1 + 0xe0) = (byte)(1 << (uint)bVar1) | *(byte *)(param_1 + 0xe0);
      *(byte *)(param_1 + 0xe3) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe3);
    }
    bVar1 = *pbVar6;
    *pbVar6 = (byte)(bVar1 - 2);
    if (((-1 < (int)((bVar1 - 2) * 0x1000000)) &&
        (bVar1 = *pbVar6, (int)(char)bVar1 < (int)(uint)*pbVar10)) &&
       (((int)(uint)*(byte *)(param_1 + 0xe2) >> (uint)bVar1 & 1U) == 0)) {
      *(byte *)(param_1 + 0xe0) = (byte)(1 << (uint)bVar1) | *(byte *)(param_1 + 0xe0);
      *(byte *)(param_1 + 0xe3) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe3);
    }
    uVar9 = 0;
    if (*pbVar10 != 0) {
      do {
        *(byte *)(param_1 + 0xe3) = (byte)(1 << (uVar9 & 0xff)) | *(byte *)(param_1 + 0xe3);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uint)*pbVar10);
    }
    uVar3 = sub_08001EAC(0x90);
    *(undefined2 *)(param_1 + 0xc6) = uVar3;
    goto LAB_0802b0f2;
  case 3:
    iVar5 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar5 + -0x40;
    iVar7 = *(int *)(param_1 + 200) + -0x2000;
    if (iVar7 <= iVar5 + -0x80) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = iVar7;
    *(int *)(param_1 + 200) = iVar7;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08001EE8((int)*(short *)(param_1 + 0xc6));
    sub_08001EAC(0x14);
    *(short *)(param_1 + 0xc6) = -1;
    goto LAB_0802b0f2;
  case 4:
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 200) + (*(byte *)(param_1 + 0x12) & 1) * 0x100;
    uVar9 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)uVar9;
    if ((uVar9 & 0xff) != 0xff) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 200);
    break;
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe0) = 0;
    *(undefined *)(param_1 + 0xe3) = 0;
    break;
  case 6:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
  default:
    goto switchD_0802af0a_caseD_7;
  }
  *(undefined *)(param_1 + 0x12) = 0x20;
LAB_0802b0f2:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0802af0a_caseD_7:
  return in_lr;
}

