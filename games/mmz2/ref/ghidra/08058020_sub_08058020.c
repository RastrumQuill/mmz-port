// sub_08058020 at 0x08058020 (thumb)

undefined4 sub_08058020(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + -0x1800;
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x05')) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar4 = DAT_0202ed50 + 0x97ff;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar4 = DAT_0202ed50 + -0x9800;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      if (*(byte *)(param_1 + 0x10) < 2) {
        cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(undefined *)(param_1 + 0x12) = 1;
        sub_080B5C58(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xdc);
        if (*(char *)(param_1 + 0x10) == '\x05') {
          iVar4 = -0x5000;
        }
        else {
          iVar4 = 0x5000;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xdc) + iVar4;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xe0);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xe0) + -0x8c00;
        cVar1 = '\x05';
      }
LAB_08058486:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0xa727);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080B5BD4(param_1,param_1 + 0x54);
    sub_080B5C58(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      local_24 = *(short *)(&DAT_0833cb22 + uVar3 * 4) * 0x100 + *(int *)(param_1 + 0xdc);
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      local_24 = *(int *)(param_1 + 0xdc) + *(short *)(&DAT_0833cb22 + uVar3 * 4) * -0x100;
    }
    local_24 = local_24 - *(int *)(param_1 + 0x54);
    iVar6 = (*(short *)(&DAT_0833cb24 + uVar3 * 4) * 0x100 + *(int *)(param_1 + 0xe0)) -
            *(int *)(param_1 + 0x58);
    uVar3 = sub_080EEF7C(local_24 * local_24 + iVar6 * iVar6);
    uVar3 = uVar3 & 0xffff;
    iVar4 = sub_080EF150(local_24 * 0x100,uVar3);
    *(int *)(param_1 + 100) = iVar4;
    iVar6 = sub_080EF150(iVar6 * 0x100,uVar3);
    *(int *)(param_1 + 0x68) = iVar6;
    if (0x400 < uVar3) {
      uVar3 = 0x400;
    }
    iVar4 = iVar4 - *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar4 = *(int *)(param_1 + 0x5c) + (iVar4 >> 4);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar6 = iVar6 - *(int *)(param_1 + 0x60);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xf;
    }
    iVar6 = *(int *)(param_1 + 0x60) + (iVar6 >> 4);
    *(int *)(param_1 + 0x60) = iVar6;
    iVar4 = uVar3 * iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    iVar6 = uVar3 * iVar6;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar6 >> 8);
    cVar1 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar1 + '\b';
    if (cVar1 == -8) {
      cVar1 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x06')) {
        sub_080032EC(0xef);
      }
      if (*(char *)(param_1 + 0x12) == '\n') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
LAB_080583e4:
    sub_080128D4(param_1);
    break;
  case 4:
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    puVar5 = (uint *)(param_1 + 0xbc);
    if (*(char *)(param_1 + 0x12) == '\x02') {
      sub_080032EC(0x92);
      *puVar5 = *puVar5 | 8;
    }
    if (*(char *)(param_1 + 0x12) == '\x01') {
      uVar3 = *puVar5 | 0x10;
    }
    else {
      uVar3 = *puVar5 & 0xffffffef;
    }
    *puVar5 = uVar3;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cb0c + (uint)*(byte *)(param_1 + 0x12) * 4));
    *(char *)(param_1 + 0x13) =
         (char)*(undefined2 *)(&DAT_0833cb0e + (uint)*(byte *)(param_1 + 0x12) * 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    goto switchD_08058036_caseD_6;
  case 7:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    iVar4 = *(int *)(param_1 + 0x60) + 8;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x180 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x180;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar4 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x5000);
    if (iVar4 < 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      iVar4 = *(int *)(param_1 + 0x58) + iVar4;
LAB_080583e2:
      *(int *)(param_1 + 0x58) = iVar4;
    }
    goto LAB_080583e4;
  case 9:
    iVar4 = *(int *)(param_1 + 0x60) + -8;
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    goto LAB_080583e2;
  case 10:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cb1c + (uint)*(byte *)(param_1 + 0x12) * 2));
    if (*(char *)(param_1 + 0x12) == '\x01') {
      *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2400;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08058036_caseD_c:
    sub_080128D4(param_1);
    if ((1 < *(byte *)(param_1 + 0x12)) && ((DAT_0202ec42 & 1) == 0)) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
      return in_lr;
    }
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (2 < bVar2) {
      *(undefined *)(param_1 + 0x12) = 2;
      return in_lr;
    }
    cVar1 = '\v';
    goto LAB_08058486;
  case 0xc:
    goto switchD_08058036_caseD_c;
  default:
    break;
  }
  return in_lr;
switchD_08058036_caseD_6:
  sub_080128D4(param_1);
  if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x04') {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    cVar1 = '\x05';
  }
  goto LAB_08058486;
}

