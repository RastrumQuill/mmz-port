// sub_0809B948 at 0x0809B948 (thumb)

undefined4 sub_0809B948(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    iVar5 = *(int *)(param_1 + 0x58) + 0x80;
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar5 < 0x700) goto switchD_0809b96c_caseD_5;
    *(undefined4 *)(param_1 + 0x58) = 0x700;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_0809b96c_caseD_5;
    *(undefined *)(param_1 + 0x12) = 0x14;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_0809b96c_caseD_5;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(byte *)(iVar6 + 0xdd0) < 4) {
      if ((DAT_02002130 & 0x100) != 0) {
        *(int *)(param_1 + 0x58) = iVar4 + iVar5;
      }
      if ((DAT_02002130 & 0x200) != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      }
    }
    cVar1 = sub_0809BB90(param_1);
    if (cVar1 == '\0') goto switchD_0809b96c_caseD_5;
    if (cVar1 == '\x01') {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + 0x2000;
      iVar5 = *(int *)(param_1 + 0x60);
    }
    else {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + -0x2000;
      iVar5 = -*(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(byte *)(iVar6 + 0xdd0) < 4) {
      if ((DAT_02002130 & 0x100) != 0) {
        *(int *)(param_1 + 0x54) = iVar4 + iVar5;
      }
      if ((DAT_02002130 & 0x200) != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      }
    }
    if (iVar5 < 1) {
      if (*(int *)(param_1 + 0xc0) <= *(int *)(param_1 + 0x54)) goto switchD_0809b96c_caseD_5;
    }
    else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xc0)) goto switchD_0809b96c_caseD_5;
    pcVar2 = (char *)(iVar6 + 0xe04 + (uint)*(byte *)(param_1 + 0xbc));
    *pcVar2 = *pcVar2 + -1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
    cVar1 = '\x03';
    break;
  default:
    goto switchD_0809b96c_caseD_5;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_0809b96c_caseD_5:
  if (0x8000 < *(int *)(param_1 + 0x58)) {
    if (*(byte *)(iVar6 + 0xdd0) < 4) {
      iVar4 = *(int *)(param_1 + 0x54) >> 8;
      iVar5 = iVar4 + -0x18;
      if (iVar5 < 0) {
        iVar5 = iVar4 + 7;
      }
      if ((iVar5 >> 5 & 0xffU) == (uint)*(byte *)(param_1 + 0x11)) {
        pcVar2 = (char *)(iVar6 + 0xde9 + (iVar5 >> 5));
        *pcVar2 = *pcVar2 + '\x01';
        if ((*(byte *)(iVar6 + 0xdd0) < 4) &&
           (uVar3 = *(int *)(iVar6 + 0xdd4) + 10, *(uint *)(iVar6 + 0xdd4) = uVar3, 99999 < uVar3))
        {
          *(undefined4 *)(iVar6 + 0xdd4) = 99999;
        }
      }
      else {
        *(char *)(iVar6 + 0xe13) = *(char *)(iVar6 + 0xe13) + '\x01';
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

