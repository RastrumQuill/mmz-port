// sub_08025D10 at 0x08025D10 (thumb)

longlong sub_08025D10(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint in_lr;
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_2c = param_1;
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    if (DAT_0202e912 == '\0') {
      DAT_0202e8bd = DAT_0202e8bd & 0xc3;
      DAT_02035889 = DAT_02035889 & 0xc3;
      DAT_0202e91a = 0;
      sub_080275F0(&DAT_0202e920,&DAT_0884a3c8);
      sub_0801F63C(2);
      DAT_0202ea98 = 0;
      cVar3 = '\x02';
    }
    else {
      if (DAT_0202e912 == '\x02') {
        if (((int)(uint)(&DAT_0202e8b4)[(int)(DAT_0202ea98 + 0x4a) >> 3] >>
             (DAT_0202ea98 + 0x4a & 7) & 1U) != 0) {
          DAT_0202e91a = DAT_0202ea98 + 1;
        }
        sub_080275F0(&DAT_0202e920,*(undefined4 *)(&DAT_0884a4d0 + (uint)DAT_0202e91a * 4));
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        *pcVar4 = '\x02';
        goto switchD_08025e48_caseD_5;
      }
      if (DAT_0202e912 != '\x03') goto switchD_08025e48_caseD_5;
      sub_080275F0(&DAT_0202e920,*(undefined4 *)(&DAT_0884a4d0 + (uint)DAT_0202e91a * 4));
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      cVar3 = '\x04';
    }
    *pcVar4 = cVar3;
    goto switchD_08025e48_caseD_5;
  }
  if (cVar3 != '\x02') {
    if (cVar3 == '\x03') {
      sub_0801F63C(3);
      *pcVar4 = '\x04';
    }
    else if ((((cVar3 == '\x04') && (0xd2000 < *(int *)(iVar6 + 0x54))) &&
             (*(int *)(iVar6 + 0x54) < 0xe1000)) &&
            ((0x5a000 < *(int *)(iVar6 + 0x58) && (*(int *)(iVar6 + 0x58) < 0x64000)))) {
      sub_080275F0(&DAT_0202e920,&DAT_0884a440);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
      *pcVar4 = '\x06';
    }
    goto switchD_08025e48_caseD_5;
  }
  switch(*(undefined *)(param_1 + 0x17d)) {
  case 0:
    if (((DAT_0202e8bd & 4) != 0) || (bVar1 = DAT_0202e8bd & 4, 0x9fff < *(int *)(iVar6 + 0x58))) {
      if (((DAT_0202e8bd & 8) == 0) && (0xb4000 < *(int *)(iVar6 + 0x58))) {
        DAT_0202ea98 = 1;
        bVar1 = DAT_0202ea98;
      }
      else if (((DAT_0202e8bd & 0x10) == 0) && (*(int *)(iVar6 + 0x54) < 0x1e000)) {
        DAT_0202ea98 = 2;
        bVar1 = DAT_0202ea98;
      }
      else {
        if (((DAT_0202e8bd & 0x20) != 0) || (*(int *)(iVar6 + 0x54) < 0x195001)) {
          if ((DAT_0202e8bd & 0x3c) == 0x3c) {
            *(undefined *)(param_1 + 0x17d) = 3;
            DAT_0202ea9a = 0x1e;
          }
          goto switchD_08025e48_caseD_5;
        }
        DAT_0202ea98 = 3;
        bVar1 = DAT_0202ea98;
      }
    }
    DAT_0202ea98 = bVar1;
    *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x17d) + '\x01';
  case 1:
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    uVar5 = 0;
    do {
      *(undefined4 *)(&DAT_0202ea98 + (uVar5 + 1) * 4) = 0;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
    *(undefined2 *)(param_1 + 0x17e) = 0;
    if (DAT_0202ea98 == 1) {
      DAT_0202ea9a = -0x3c;
    }
    else {
      DAT_0202ea9a = 0;
    }
    pcVar4 = (char *)(param_1 + 0x17d);
    break;
  case 2:
    if (DAT_0202ea9a < 0x3c) {
      DAT_0202ea9a = DAT_0202ea9a + 1;
    }
    else {
      puVar9 = (ushort *)(param_1 + 0x17e);
      if (*puVar9 < 1000) {
        local_4c[0] = 0xd4000;
        local_4c[1] = 0x2000;
        local_4c[2] = 0xd4000;
        local_4c[3] = 0xb6000;
        uStack_3c = 0x11000;
        uStack_38 = 0x5c000;
        local_34 = 0x197000;
        uStack_30 = 0x5c000;
        local_28 = local_4c[(uint)DAT_0202ea98 * 2];
        local_24 = local_4c[(uint)DAT_0202ea98 * 2 + 1];
        if (*(int *)(&DAT_0202ea98 + (*puVar9 + 1) * 4) == 0) {
          uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          uVar8 = uVar5 & 0x7fffffff;
          DAT_0202dc38 = uVar8;
          iVar6 = sub_08128A9C(uVar5 * 2 >> 0x11,0x5800);
          iVar7 = local_28 + iVar6 * 2;
          uVar5 = uVar8 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar5 & 0x7fffffff;
          iVar6 = sub_08128A9C(uVar5 * 2 >> 0x11,0x3000);
          iVar6 = sub_080847C8(iVar7,local_24 + iVar6,~*puVar9 & 1);
          *(int *)(&DAT_0202ea98 + (*puVar9 + 1) * 4) = iVar6;
          if (iVar6 != 0) {
            DAT_0202ea9a = 0;
            uVar2 = *puVar9;
            *puVar9 = uVar2 + 1;
            if (7 < (ushort)(uVar2 + 1)) {
              *puVar9 = 0;
            }
          }
        }
      }
    }
    uVar5 = 0;
    do {
      iVar6 = *(int *)(&DAT_0202ea98 + (uVar5 + 1) * 4);
      if ((iVar6 != 0) && ((bVar1 = *(byte *)(iVar6 + 0xc), 2 < bVar1 || (1 < bVar1)))) {
        *(int *)(&DAT_0202ea98 + (uVar5 + 1) * 4) = 0;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
    if (((int)(uint)(&DAT_0202e8b4)[*(ushort *)(&DAT_0883f6f8 + (uint)DAT_0202ea98 * 2) >> 3] >>
         (*(ushort *)(&DAT_0883f6f8 + (uint)DAT_0202ea98 * 2) & 7) & 1U) == 0)
    goto switchD_08025e48_caseD_5;
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    DAT_0202ea9a = 0x3c;
    pcVar4 = (char *)(local_2c + 0x17d);
    break;
  case 3:
    if (DAT_0202ea9a != 0) {
      DAT_0202ea9a = DAT_0202ea9a + -1;
      goto switchD_08025e48_caseD_5;
    }
    pcVar4 = (char *)(param_1 + 0x17d);
    break;
  case 4:
    DAT_0202e91a = DAT_0202ea98 + 1;
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    *(undefined *)(param_1 + 0x17d) = 0;
    if ((DAT_0202e8bd & 0x3c) == 0x3c) {
      *(undefined *)(param_1 + 0x17c) = 3;
    }
  default:
    goto switchD_08025e48_caseD_5;
  }
  *pcVar4 = *pcVar4 + '\x01';
switchD_08025e48_caseD_5:
  return (ulonglong)in_lr << 0x20;
}

