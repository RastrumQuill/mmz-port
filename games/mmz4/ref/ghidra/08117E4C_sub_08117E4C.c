// sub_08117E4C at 0x08117E4C (thumb)

undefined4 sub_08117E4C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  ushort *puVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_lr;
  int local_24;
  
  iVar7 = *(int *)(param_1 + 0x63a8);
  *(undefined *)(param_1 + 0xdcc) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  sub_08001D30(&DAT_08b6c190,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c19c,0);
  iVar13 = param_1 + 0xed8;
  sub_080027B8(iVar13,&DAT_08b2c000,0x14,0,0);
  pbVar3 = DAT_0202e8e0;
  bVar1 = *DAT_0202e8e0;
  *(ushort *)(param_1 + 0xef0) = bVar1 + 0xc0 | 0x2000;
  *(ushort *)(param_1 + 0xf30) = bVar1 + 0xe0 | 0x2000;
  sVar5 = -(ushort)pbVar3[1];
  *(ushort *)(param_1 + 0xf70) = sVar5 + 0xd0U | 0x2000;
  *(ushort *)(param_1 + 0xfb0) = sVar5 + 0xf0U | 0x2000;
  uVar14 = *(undefined4 *)(pbVar3 + 8);
  sVar5 = sub_08128A24(uVar14,0x20f580);
  *(ushort *)(param_1 + 0xf76) = sVar5 + 0xd1U | 0x2000;
  uVar8 = sub_08128A24(uVar14,0x34bc0);
  sVar5 = sub_08128A9C(uVar8,10);
  *(ushort *)(param_1 + 0xf78) = sVar5 + 0xd1U | 0x2000;
  uVar8 = sub_08128A24(uVar14,0xe10);
  uVar8 = sub_08128A9C(uVar8,0x3c);
  sVar5 = sub_08128A24(uVar8,10);
  *(ushort *)(param_1 + 0xf7c) = sVar5 + 0xd1U | 0x2000;
  sVar5 = sub_08128A9C(uVar8,10);
  *(ushort *)(param_1 + 0xf7e) = sVar5 + 0xd1U | 0x2000;
  uVar8 = sub_08128A24(uVar14,0x3c);
  uVar8 = sub_08128A9C(uVar8,0x3c);
  sVar5 = sub_08128A24(uVar8,10);
  *(ushort *)(param_1 + 0xf82) = sVar5 + 0xd1U | 0x2000;
  sVar5 = sub_08128A9C(uVar8,10);
  *(ushort *)(param_1 + 0xf84) = sVar5 + 0xd1U | 0x2000;
  if (999 < *(ushort *)(iVar7 + 0xba)) {
    uVar6 = sub_08128A24(*(ushort *)(iVar7 + 0xba),1000);
    sVar5 = sub_08128A9C(uVar6,10);
    *(ushort *)(param_1 + 0xf8a) = sVar5 + 0xd1U | 0x2000;
  }
  if (99 < *(ushort *)(iVar7 + 0xba)) {
    uVar6 = sub_08128A24(*(ushort *)(iVar7 + 0xba),100);
    sVar5 = sub_08128A9C(uVar6,10);
    *(ushort *)(param_1 + 0xf8c) = sVar5 + 0xd1U | 0x2000;
  }
  if (9 < *(ushort *)(iVar7 + 0xba)) {
    uVar6 = sub_08128A24(*(ushort *)(iVar7 + 0xba),10);
    sVar5 = sub_08128A9C(uVar6,10);
    *(ushort *)(param_1 + 0xf8e) = sVar5 + 0xd1U | 0x2000;
  }
  sVar5 = sub_08128A9C(*(undefined2 *)(iVar7 + 0xba),10);
  *(ushort *)(param_1 + 0xf90) = sVar5 + 0xd1U | 0x2000;
  sub_08119494(param_1);
  cVar4 = sub_0802B614(iVar7);
  if (cVar4 == '\x14') {
    uVar12 = 0x54;
    uVar10 = 0x53;
    puVar9 = (ushort *)(param_1 + 0xfea);
    iVar13 = 1;
    do {
      *puVar9 = uVar10 | 0x2000;
      puVar9[1] = uVar12 | 0x2000;
      uVar12 = uVar12 + 0x20;
      uVar10 = uVar10 + 0x20;
      puVar9 = puVar9 + 0x20;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  else {
    cVar4 = sub_0802B614(iVar7);
    if (cVar4 == '\x18') {
      uVar12 = 0x54;
      uVar10 = 0x53;
      puVar9 = (ushort *)(param_1 + 0xfea);
      iVar15 = 1;
      do {
        *puVar9 = uVar10 | 0x2000;
        puVar9[1] = uVar10 | 0x2000;
        *(ushort *)(iVar13 + 0x116) = uVar12 | 0x2000;
        uVar12 = uVar12 + 0x20;
        uVar10 = uVar10 + 0x20;
        puVar9 = puVar9 + 0x20;
        iVar13 = iVar13 + 0x40;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
    else {
      cVar4 = sub_0802B614(iVar7);
      if (cVar4 == '\x1c') {
        uVar12 = 0x54;
        uVar10 = 0x53;
        puVar11 = (ushort *)(param_1 + 0xfea);
        iVar13 = 1;
        puVar9 = (ushort *)(param_1 + 0xfec);
        do {
          uVar2 = uVar10 | 0x2000;
          *puVar11 = uVar2;
          *puVar9 = uVar2;
          puVar9[1] = uVar2;
          puVar9[2] = uVar12 | 0x2000;
          uVar12 = uVar12 + 0x20;
          uVar10 = uVar10 + 0x20;
          puVar11 = puVar11 + 0x20;
          puVar9 = puVar9 + 0x20;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
      }
      else {
        cVar4 = sub_0802B614(iVar7);
        if (cVar4 == ' ') {
          uVar12 = 0x54;
          uVar10 = 0x53;
          puVar11 = (ushort *)(param_1 + 0xfea);
          iVar15 = 1;
          puVar9 = (ushort *)(param_1 + 0xfec);
          do {
            uVar2 = uVar10 | 0x2000;
            *puVar11 = uVar2;
            *puVar9 = uVar2;
            puVar9[1] = uVar2;
            *(ushort *)(iVar13 + 0x118) = uVar2;
            *(ushort *)(iVar13 + 0x11a) = uVar12 | 0x2000;
            uVar12 = uVar12 + 0x20;
            uVar10 = uVar10 + 0x20;
            puVar11 = puVar11 + 0x20;
            puVar9 = puVar9 + 0x20;
            iVar13 = iVar13 + 0x40;
            iVar15 = iVar15 + -1;
          } while (-1 < iVar15);
        }
      }
    }
  }
  local_24 = iVar7 + 0xbc;
  sub_08001D30(&DAT_08c44410,(DAT_0202e0a8 - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4441c,(DAT_0202dea8 - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44424,(DAT_0202e0aa - 0x264) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44430,(DAT_0202deaa - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44438,(DAT_0202e0ac - 0x2b4) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44444,(DAT_0202deac - 7) * 0x20 + 0x200);
  for (uVar16 = 0; iVar13 = sub_0802B614(iVar7), (int)uVar16 < (int)((uint)(iVar13 << 0x18) >> 0x1a)
      ; uVar16 = uVar16 + 1) {
    sub_08109BF4(param_1,uVar16 & 0xff,0);
  }
  sub_08109DC8(param_1,0,0);
  sub_08109DC8(param_1,1,0);
  cVar4 = sub_08119364(param_1);
  if (cVar4 != '\0') {
    sub_08109DC8(param_1,2,0);
  }
  cVar4 = sub_08119398(param_1);
  if (cVar4 != '\0') {
    sub_08109DC8(param_1,3,0);
  }
  sub_08109DC8(param_1,4,0);
  sub_08109FA8(param_1,0,0);
  sub_08109FA8(param_1,0,1);
  uVar16 = 0;
  do {
    if ((int)((uint)*(ushort *)(iVar7 + 0xca) & 1 << (uVar16 & 0xff)) >> (uVar16 & 0xff) != 0) {
      sub_08109FA8(param_1,2,uVar16 & 0xff);
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 8);
  uVar16 = 0;
  do {
    if (*(char *)(local_24 + uVar16) != -1) {
      sub_08109FA8(param_1,3,uVar16 & 0xff);
      sub_08109FA8(param_1,4,uVar16 & 0xff);
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 4);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  uVar16 = sub_08038928(iVar7);
  uVar16 = uVar16 & 0xff;
  if ((uVar16 != 0) && (uVar16 != 0xd)) {
    iVar7 = uVar16 + 0xce;
    sub_0800249C(iVar7,0);
    sub_080025D8(iVar7);
    sub_08002624(iVar7);
  }
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

