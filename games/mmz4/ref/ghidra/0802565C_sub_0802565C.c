// sub_0802565C at 0x0802565C (thumb)

longlong sub_0802565C(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
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
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar8 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar8;
  if (cVar2 == '\0') {
    uVar3 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    if (DAT_0202e912 == '\0') {
      DAT_0202e8bd = DAT_0202e8bd & 0xc3;
      DAT_0202e91a = 0;
      DAT_0202e918 = uVar3;
      sub_080275F0(&DAT_0202e920,&DAT_08849d90);
      sub_0801F63C(1);
      *pcVar8 = '\x01';
      uVar3 = DAT_0202e918;
      goto switchD_080257f4_caseD_5;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        if (((int)(uint)(&DAT_0202e8b4)[(int)(DAT_0202ea98 + 0x4a) >> 3] >>
             (DAT_0202ea98 + 0x4a & 7) & 1U) != 0) {
          DAT_0202e91a = DAT_0202ea98 + 1;
        }
        DAT_0202e918 = uVar3;
        sub_080275F0(&DAT_0202e920,*(undefined4 *)(&DAT_0884a4d0 + (uint)DAT_0202e91a * 4));
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        *pcVar8 = '\x02';
        uVar3 = DAT_0202e918;
        goto switchD_080257f4_caseD_5;
      }
      if (DAT_0202e912 == '\x03') {
        DAT_0202e918 = uVar3;
        sub_080275F0(&DAT_0202e920,*(undefined4 *)(&DAT_0884a4d0 + (uint)DAT_0202e91a * 4));
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        *pcVar8 = '\x05';
        uVar3 = DAT_0202e918;
        goto switchD_080257f4_caseD_5;
      }
      if (DAT_0202e912 != '\x04') {
        if (DAT_0202e912 == '\x05') {
          DAT_0202e918 = (DAT_0202e918 | 5) & 0xfffe;
          *pcVar8 = '\b';
          uVar3 = DAT_0202e918;
        }
        goto switchD_080257f4_caseD_5;
      }
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      DAT_0202e918 = uVar3;
      sub_080275F0(&DAT_0202e920,&DAT_0884a1b8);
      goto LAB_08025c08;
    }
    DAT_0202e918 = uVar3;
    sub_080275F0(&DAT_0202e920,&DAT_08849e50);
    sub_0801F63C(2);
LAB_080257ce:
    *pcVar8 = '\x02';
    uVar3 = DAT_0202e918;
    goto switchD_080257f4_caseD_5;
  }
  if (cVar2 == '\x01') {
    sub_0801F63C(2);
    DAT_0202ea98 = 0;
    goto LAB_080257ce;
  }
  uVar3 = DAT_0202e918;
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      sub_0801F63C(2);
      *pcVar8 = '\x04';
      uVar3 = DAT_0202e918;
      goto switchD_080257f4_caseD_5;
    }
    if ((((cVar2 != '\x04') || (*(int *)(iVar4 + 0x54) < 0xd2001)) ||
        (0xe0fff < *(int *)(iVar4 + 0x54))) ||
       ((*(int *)(iVar4 + 0x58) < 0x5a001 || (0x63fff < *(int *)(iVar4 + 0x58))))) {
      if ((((*(char *)(param_1 + 0x17c) == '\x05') &&
           ((0xd2000 < *(int *)(iVar4 + 0x54) && (*(int *)(iVar4 + 0x54) < 0xe1000)))) &&
          (0x5a000 < *(int *)(iVar4 + 0x58))) && (*(int *)(iVar4 + 0x58) < 0x64000)) {
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        sub_080275F0(&DAT_0202e920,&DAT_0884a128);
        sub_0801F63C(4);
        *(char *)(param_1 + 0x17c) = '\x06';
        uVar3 = DAT_0202e918;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x17c);
        if (cVar2 == '\x06') {
          sub_0801F63C(3);
          cVar2 = '\a';
        }
        else {
          if ((cVar2 != '\a') || ((DAT_0202e918 & 0x10) == 0)) goto switchD_080257f4_caseD_5;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_0884a260);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
          sub_0801F63C(5);
          cVar2 = '\b';
        }
        *(char *)(param_1 + 0x17c) = cVar2;
        uVar3 = DAT_0202e918;
      }
      goto switchD_080257f4_caseD_5;
    }
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    sub_080275F0(&DAT_0202e920,&DAT_0884a068);
    sub_0801F63C(4);
LAB_08025c08:
    *pcVar8 = '\x06';
    uVar3 = DAT_0202e918;
    goto switchD_080257f4_caseD_5;
  }
  switch(*(undefined *)(param_1 + 0x17d)) {
  case 0:
    if (((DAT_0202e8bd & 4) != 0) || (bVar1 = DAT_0202e8bd & 4, 0x9fff < *(int *)(iVar4 + 0x58))) {
      if (((DAT_0202e8bd & 8) == 0) && (0xb4000 < *(int *)(iVar4 + 0x58))) {
        DAT_0202ea98 = 1;
        bVar1 = DAT_0202ea98;
      }
      else if (((DAT_0202e8bd & 0x10) == 0) && (*(int *)(iVar4 + 0x54) < 0x1e000)) {
        DAT_0202ea98 = 2;
        bVar1 = DAT_0202ea98;
      }
      else {
        if (((DAT_0202e8bd & 0x20) != 0) || (*(int *)(iVar4 + 0x54) < 0x195001)) {
          if ((DAT_0202e8bd & 0x3c) == 0x3c) {
            *(undefined *)(param_1 + 0x17d) = 3;
            DAT_0202ea9a = 0x1e;
            uVar3 = DAT_0202e918;
          }
          goto switchD_080257f4_caseD_5;
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
      DAT_0202ea9a = -0x1e;
    }
    else {
      DAT_0202ea9a = 0;
    }
    pcVar8 = (char *)(param_1 + 0x17d);
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
          uVar7 = uVar5 & 0x7fffffff;
          DAT_0202dc38 = uVar7;
          iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x5800);
          iVar6 = local_28 + iVar4 * 2;
          uVar5 = uVar7 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar5 & 0x7fffffff;
          iVar4 = sub_08128A9C(uVar5 * 2 >> 0x11,0x3000);
          iVar4 = sub_080847C8(iVar6,local_24 + iVar4,~*puVar9 & 1);
          *(int *)(&DAT_0202ea98 + (*puVar9 + 1) * 4) = iVar4;
          if (iVar4 != 0) {
            DAT_0202ea9a = 0;
            uVar3 = *puVar9;
            *puVar9 = uVar3 + 1;
            if (7 < (ushort)(uVar3 + 1)) {
              *puVar9 = 0;
            }
          }
        }
      }
    }
    uVar5 = 0;
    do {
      iVar4 = *(int *)(&DAT_0202ea98 + (uVar5 + 1) * 4);
      if ((iVar4 != 0) && ((bVar1 = *(byte *)(iVar4 + 0xc), 2 < bVar1 || (1 < bVar1)))) {
        *(int *)(&DAT_0202ea98 + (uVar5 + 1) * 4) = 0;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
    uVar3 = DAT_0202e918;
    if (((int)(uint)(&DAT_0202e8b4)[*(ushort *)(&DAT_0883f6f8 + (uint)DAT_0202ea98 * 2) >> 3] >>
         (*(ushort *)(&DAT_0883f6f8 + (uint)DAT_0202ea98 * 2) & 7) & 1U) == 0)
    goto switchD_080257f4_caseD_5;
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    DAT_0202ea9a = 0x3c;
    pcVar8 = (char *)(local_2c + 0x17d);
    break;
  case 3:
    if (DAT_0202ea9a != 0) {
      DAT_0202ea9a = DAT_0202ea9a + -1;
      goto switchD_080257f4_caseD_5;
    }
    pcVar8 = (char *)(param_1 + 0x17d);
    break;
  case 4:
    DAT_0202e91a = DAT_0202ea98 + 1;
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    *(undefined *)(param_1 + 0x17d) = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      if (((int)(uint)(&DAT_0202e8b4)[(int)(uVar5 + 0x4a) >> 3] >> (uVar5 + 0x4a & 7) & 1U) != 0) {
        uVar7 = uVar7 + 1 & 0xff;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    sub_0810DEE0(uVar7 + 0x1000,0x5a);
    uVar3 = DAT_0202e918;
    if ((DAT_0202e8bd & 0x3c) == 0x3c) {
      *(undefined *)(local_2c + 0x17c) = 3;
      uVar3 = DAT_0202e918;
    }
  default:
    goto switchD_080257f4_caseD_5;
  }
  *pcVar8 = *pcVar8 + '\x01';
  uVar3 = DAT_0202e918;
switchD_080257f4_caseD_5:
  DAT_0202e918 = uVar3;
  return (ulonglong)in_lr << 0x20;
}

