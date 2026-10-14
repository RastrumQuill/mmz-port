// sub_080C04E8 at 0x080C04E8 (thumb)

undefined4 sub_080C04E8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_080C1FE0(param_1);
    bVar1 = *(byte *)(param_1 + 0x6e90);
    if (bVar1 < 99) {
      *(byte *)(param_1 + 0x6e90) = bVar1 + 1;
    }
    if (*(char *)(param_1 + 0x6e93) == '\0') {
      sub_08001EAC(0x77);
      uVar2 = 1;
      *(undefined *)(param_1 + 0x6e93) = 1;
LAB_080c056c:
      *(undefined *)(param_1 + 2) = uVar2;
    }
    else {
      cVar3 = sub_0801CEA4(param_1 + 0x6f24);
      if ((cVar3 != '\0') && (*(char *)(param_1 + 0x6e92) == '\0')) {
        sub_08001EAC(0x77);
        *(undefined *)(param_1 + 0x6e92) = 1;
        uVar2 = 4;
        goto LAB_080c056c;
      }
    }
    pbVar5 = (byte *)(param_1 + 0x6ea4);
    sub_0800F388(pbVar5);
    if (*(char *)(param_1 + 0x6e91) == '\x01') {
      *pbVar5 = *pbVar5 | 1;
    }
    if (*(char *)(param_1 + 0x6e91) == '\x02') {
      *pbVar5 = *pbVar5 | 2;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x6ef8);
    sub_0800F3E8(param_1 + 0x6ef0);
    *(undefined4 *)(param_1 + 0x6ef8) = uVar6;
    sub_0801CE3C(param_1 + 0x6f24);
    sub_0801CAC0(param_1 + 0x6f24);
    if (*(char *)(param_1 + 2) == '\0') {
      sub_080BF0A4(param_1,0xa00);
      break;
    }
    *(undefined2 *)(param_1 + 6) = 0;
  case 1:
  case 4:
    sVar4 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar4;
    DAT_03001ba0 = (undefined)sVar4;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (0x1f < sVar4) {
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080c04fc_caseD_2:
      if ((DAT_02004ca8 & 3) != 0) {
        sub_08001EAC(0x2a);
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
  case 5:
    goto switchD_080c04fc_caseD_2;
  case 3:
  case 6:
    sVar4 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar4;
    DAT_03001ba0 = (undefined)sVar4;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar4 == 0) {
      sub_080BF0A4(param_1,0xa00);
    }
  }
  if ((byte)(*(char *)(param_1 + 2) - 1U) < 3) {
    sub_080BC0AC(&DAT_082bb0ff,2,6);
  }
  if ((byte)(*(char *)(param_1 + 2) - 4U) < 3) {
    sub_080BC0AC(&DAT_082bb166,3,6);
  }
  return in_lr;
}

