// sub_0811876C at 0x0811876C (thumb)

undefined4 sub_0811876C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x63a8);
  switch(*(undefined *)(param_1 + 0xdf7)) {
  case 0:
    break;
  case 1:
    goto switchD_08118792_caseD_1;
  case 2:
    goto switchD_08118792_caseD_2;
  case 3:
    goto switchD_08118792_caseD_3;
  case 4:
    uVar5 = (uint)DAT_02000764;
    if ((DAT_02000764 & 1) == 0) {
      bVar2 = (byte)DAT_02000764;
      if ((DAT_02000764 & 2) == 0) {
        if (*(char *)(param_1 + 0xdcd) == '\0') {
          iVar3 = *(int *)(param_1 + 0xdec);
          *(undefined4 *)(iVar3 + 0x74) = 0x3800;
          *(undefined4 *)(iVar3 + 0x78) = 0x3800;
          if ((DAT_02000766 & 0x80) == 0) {
            if ((DAT_02000766 & 0x10) != 0) {
              sub_08002B10(1);
              *(undefined *)(param_1 + 0xdcd) = 2;
            }
            goto switchD_08118792_caseD_6;
          }
LAB_081189b6:
          sub_08002B10(1);
          *(undefined *)(param_1 + 0xdcd) = 1;
        }
        else {
          if (*(char *)(param_1 + 0xdcd) == '\x01') {
            iVar3 = *(int *)(param_1 + 0xdec);
            *(undefined4 *)(iVar3 + 0x74) = 0x3800;
            *(undefined4 *)(iVar3 + 0x78) = 0x4800;
            if ((DAT_02000766 & 0x40) == 0) {
              if ((DAT_02000766 & 0x10) != 0) {
                sub_08002B10(1);
                *(undefined *)(param_1 + 0xdcd) = 2;
              }
              goto switchD_08118792_caseD_6;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0xdec);
            *(undefined4 *)(iVar3 + 0x74) = 0x5000;
            *(undefined4 *)(iVar3 + 0x78) = 0x4000;
            if ((DAT_02000766 & 0x40) == 0) {
              if ((DAT_02000766 & 0xa0) == 0) goto switchD_08118792_caseD_6;
              goto LAB_081189b6;
            }
          }
          sub_08002B10(1);
          *(byte *)(param_1 + 0xdcd) = bVar2 & 2;
        }
        goto switchD_08118792_caseD_6;
      }
      iVar3 = *(int *)(param_1 + 0xdec);
      *(uint *)(iVar3 + 0x74) = uVar5 & 1;
      *(uint *)(iVar3 + 0x78) = uVar5 & 1;
      uVar4 = 3;
      goto LAB_0811890c;
    }
    iVar3 = *(int *)(param_1 + 0xdec);
    *(undefined4 *)(iVar3 + 0x74) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
    if ((*(char *)(param_1 + 0xdcd) == '\x02') && (2 < *(byte *)(iVar7 + 0xc1))) {
      *(byte *)(param_1 + 0xdcd) = *(byte *)(iVar7 + 0xc1);
LAB_081188d0:
      *(undefined *)(iVar7 + 0xc1) = *(undefined *)(iVar7 + 0xc0);
    }
    else if (*(char *)(iVar7 + 0xc1) == *(char *)(param_1 + 0xdcd)) goto LAB_081188d0;
    *(undefined *)(iVar7 + 0xc0) = *(undefined *)(param_1 + 0xdcd);
    sub_08002B10(2);
    goto LAB_08118914;
  case 5:
    *(undefined *)(param_1 + 0xe04) = 1;
    cVar1 = *(char *)(param_1 + 0xdcf) + -1;
    *(char *)(param_1 + 0xdcf) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 3) = 0;
      *(undefined *)(param_1 + 0xdf7) = 0;
    }
  default:
    goto switchD_08118792_caseD_6;
  }
  *(char *)(param_1 + 0xdf7) = *(char *)(param_1 + 0xdf7) + '\x01';
switchD_08118792_caseD_1:
  pbVar6 = (byte *)(param_1 + 0xdf7);
  if (*(byte *)(iVar7 + 0xc0) < 3) {
    *pbVar6 = *pbVar6 + 1;
switchD_08118792_caseD_2:
    *(undefined *)(param_1 + 0xdcd) = *(undefined *)(iVar7 + 0xc0);
    *(undefined *)(param_1 + 0xdcf) = 0;
    sub_08109FA8(param_1,1,0);
    sub_08109FA8(param_1,1,1);
    sub_08109FA8(param_1,1,2);
    *(char *)(param_1 + 0xdf7) = *(char *)(param_1 + 0xdf7) + '\x01';
switchD_08118792_caseD_3:
    *(undefined *)(param_1 + 0xe04) = 1;
    cVar1 = *(char *)(param_1 + 0xdcf) + '\x01';
    *(char *)(param_1 + 0xdcf) = cVar1;
    if (cVar1 != '\b') goto switchD_08118792_caseD_6;
  }
  else {
    bVar2 = (byte)DAT_02000764 & 1;
    if ((DAT_02000764 & 1) == 0) {
      if ((DAT_02000764 & 2) != 0) {
        sub_08002B10(3);
        *(byte *)(param_1 + 3) = bVar2;
        *pbVar6 = bVar2;
        return in_lr;
      }
      sub_0810D214(&DAT_0886a932,1,0x10);
      goto switchD_08118792_caseD_6;
    }
    uVar4 = 2;
    *(undefined *)(iVar7 + 0xc0) = 2;
    *(undefined *)(iVar7 + 0xfa) = 2;
    *(undefined *)(iVar7 + 0xc3) = 0;
LAB_0811890c:
    sub_08002B10(uVar4);
  }
LAB_08118914:
  *(char *)(param_1 + 0xdf7) = *(char *)(param_1 + 0xdf7) + '\x01';
switchD_08118792_caseD_6:
  if (*(char *)(param_1 + 0xdf7) != '\x01') {
    if (((*(char *)(param_1 + 0xdcd) == '\x02') && (bVar2 = *(byte *)(iVar7 + 0xc1), 2 < bVar2)) ||
       (bVar2 = *(byte *)(iVar7 + 0xc0), 2 < bVar2)) {
      iVar7 = sub_08119410(iVar7,bVar2);
      sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + ((uint)(iVar7 << 0x10) >> 0xf)),
                   1,0x10);
      sub_0810D214("!)%432",1,0x12);
    }
    else {
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(param_1 + 0xdcd) + 0x6e],1,0x10
                  );
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(param_1 + 0xdcd) + 0x71],1,0x12
                  );
    }
  }
  return in_lr;
}

