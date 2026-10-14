// sub_080108D0 at 0x080108D0 (thumb)

undefined4 sub_080108D0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 in_lr;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38 [2];
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  local_30 = uVar2 & 0xffff;
  bVar13 = false;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] = (ushort)uVar6 | 0x4046;
    local_38[0] = 0;
    sub_080FE110(local_38,(uVar6 & 0x1f00) * 8 + 0x6000000,0x1000400);
    uVar6 = local_30 & 0xff;
    sub_08004340(uVar6,&DAT_085222a0,0x6a,0,0);
    sub_08004340(uVar6,&DAT_085222a0,0x6b,0x10,0);
    sub_080043C4(((ushort)(&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000800,
                 &DAT_085222a0,0x6c,0,0);
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = 0xff;
    DAT_0200241e = DAT_0200241e & 0xf7 | 6;
    uVar2 = 0;
    do {
      uVar6 = (int)(uVar2 << 0x10) >> 0x10;
      (&DAT_0202f4a8)[(uVar6 & 3) + (((int)(uVar2 << 0x10) >> 0x12) + 4) * 4] = 0;
      *(undefined4 *)(&DAT_0202f4a8 + (uVar6 + 7) * 4) = 0;
      *(undefined4 *)(&DAT_0202f4a8 + (uVar6 + 0x15) * 4) = 0;
      uVar2 = uVar6 + 1 & 0xffff;
    } while ((int)((uVar6 + 1) * 0x10000) >> 0x10 < 10);
    uVar2 = 0;
    do {
      *(undefined4 *)(&DAT_0202f4a8 + ((short)uVar2 + 0x11) * 4) = 0;
      uVar6 = (int)(short)uVar2 + 1;
      uVar2 = uVar6 & 0xffff;
    } while ((int)(uVar6 * 0x10000) >> 0x10 < 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x34) * 0x100 + *(int *)(param_1 + 0x2c);
  local_2c = *(int *)(param_1 + 0x38) * 0x100 + *(int *)(param_1 + 0x30);
  uVar2 = 0;
  local_24 = local_30 << 8;
  do {
    iVar7 = uVar2 * 0x10000;
    uVar2 = iVar7 >> 0x10;
    if ((&DAT_0202f4a8)[(uVar2 & 3) + ((iVar7 >> 0x12) + 4) * 4] == '\0') {
      piVar10 = (int *)(&DAT_0202f4a8 + (uVar2 + 7) * 4);
      if (*piVar10 != 0) {
        sub_0801ACF8(1,&DAT_020302c0);
        iVar4 = *piVar10;
        *piVar10 = iVar4 + -0x40;
        bVar13 = true;
        if (iVar4 + -0x40 == 0) {
          sub_0801ACF8(3,&DAT_020302c0);
          sub_0800471C(0xe2);
        }
      }
    }
    else {
      piVar10 = (int *)(&DAT_0202f4a8 + (uVar2 + 7) * 4);
      if (*piVar10 < 0x4000) {
        sub_0801ACF8(1,&DAT_020302c0);
        iVar4 = *piVar10;
        *piVar10 = iVar4 + 0x80;
        bVar13 = true;
        if (0x3fff < iVar4 + 0x80) {
          *piVar10 = 0x4000;
          sub_0801ACF8(3,&DAT_020302c0);
          sub_0800471C(0xe2);
        }
      }
    }
    uVar2 = iVar7 + 0x10000U >> 0x10;
  } while ((int)(iVar7 + 0x10000U) >> 0x10 < 10);
  if (bVar13) {
    iVar7 = sub_080047C0(0x10d);
    if (iVar7 == 0) {
      sub_0800471C(0x10d);
    }
    sub_080047D8(0x10d);
  }
  else {
    iVar7 = sub_080047C0(0x10d);
    if (iVar7 != 0) {
      sub_08004768(0x10d);
    }
  }
  uVar2 = 0;
  local_28 = iVar3 + 0xf000;
  do {
    iVar7 = (int)(short)uVar2;
    local_48 = (&DAT_0833c90c)[iVar7 * 4];
    local_44 = (&DAT_0833c910)[iVar7 * 4];
    local_40 = (&DAT_0833c914)[iVar7 * 4];
    local_3c = (&DAT_0833c918)[iVar7 * 4];
    cVar1 = (&DAT_0833c9ad)[iVar7 * 2];
    if (cVar1 == '\0') {
      local_44 = local_44 - *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
      local_3c = local_3c - *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
    }
    else if (cVar1 == '\x01') {
      local_44 = local_44 + *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
      local_3c = local_3c + *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
    }
    else {
      if (cVar1 == '\x02') {
        iVar4 = -*(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
        iVar7 = -*(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
      }
      else {
        if (cVar1 != '\x03') goto LAB_08010bb8;
        iVar4 = *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
        iVar7 = *(int *)(&DAT_0202f4a8 + (iVar7 + 7) * 4);
      }
      local_48 = local_48 + iVar4;
      local_40 = local_40 + iVar7;
    }
LAB_08010bb8:
    if (((((local_48 < local_28) && (iVar3 < local_40)) && (local_44 < local_2c + 0xa000)) &&
        (local_2c < local_3c)) ||
       (uVar6 = uVar2 * 0x10000 + 0x10000, uVar2 = uVar6 >> 0x10, 9 < (int)uVar6 >> 0x10)) {
      iVar7 = uVar2 * 0x10000;
      if (iVar7 >> 0x10 == 10) {
        DAT_020023c0 = DAT_020023c0 & ~(ushort)local_24;
      }
      else {
        *(ushort *)(&DAT_020023cc + (local_30 >> 4)) =
             (short)((uint)(iVar3 - local_48) >> 8) +
             (ushort)(byte)(&UNK_0833c9ac)[(iVar7 >> 0x10) * 2] * 0x80;
        *(short *)((int)&DAT_020023cc + (local_30 >> 4) * 4 + 2) =
             (short)((uint)(local_2c - local_44) >> 8);
        uVar6 = (local_48 - iVar3) * 0x100;
        uVar2 = (local_44 - local_2c) * 0x100;
        uVar11 = uVar2 >> 0x10;
        iVar3 = (local_40 - iVar3) * 0x100;
        uVar5 = (ushort)((uint)iVar3 >> 0x10);
        iVar4 = (local_3c - local_2c) * 0x100;
        uVar9 = (ushort)((uint)iVar4 >> 0x10);
        uVar12 = uVar6 >> 0x10;
        iVar8 = (int)uVar6 >> 0x10;
        if (iVar8 < 0) {
          uVar12 = 0;
        }
        else if (0xef < iVar8) {
          uVar12 = 0xef;
        }
        iVar8 = (int)uVar2 >> 0x10;
        if (iVar8 < 0) {
          uVar11 = 0;
        }
        else if (0x9f < iVar8) {
          uVar11 = 0x9f;
        }
        iVar3 = iVar3 >> 0x10;
        if (iVar3 < 1) {
          uVar5 = 1;
        }
        else if (0xf0 < iVar3) {
          uVar5 = 0xf0;
        }
        iVar4 = iVar4 >> 0x10;
        if (iVar4 < 1) {
          uVar9 = 1;
        }
        else if (0xa0 < iVar4) {
          uVar9 = 0xa0;
        }
        DAT_02002416 = uVar5 & 0xff | (ushort)((uVar12 << 0x10) >> 8);
        DAT_0200241a = uVar9 & 0xff | (ushort)((uVar11 << 0x10) >> 8);
        sub_0800A788(iVar7 + 0x80000000U >> 0x10,0x2001,&local_48,
                     &UNK_0833c9c0 + (uint)(byte)(&UNK_0833c9ac)[iVar7 >> 0xf] * 8);
        DAT_020023c0 = (ushort)local_24 | DAT_020023c0;
      }
      uVar2 = 0;
      do {
        iVar3 = (int)(short)uVar2;
        if (*(int *)(&DAT_0202f4a8 + (iVar3 + 0x11) * 4) == 0) {
          iVar7 = sub_080DE5E0(&DAT_0833c9d8 + iVar3 * 8);
          *(int *)(&DAT_0202f4a8 + (iVar3 + 0x11) * 4) = iVar7;
        }
        uVar2 = iVar3 + 1U & 0xffff;
      } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 4);
      uVar2 = 0;
      do {
        iVar3 = (int)(short)uVar2;
        if (*(int *)(&DAT_0202f4a8 + (iVar3 + 0x15) * 4) == 0) {
          iVar7 = sub_080DE63C(uVar2 & 0xff,&DAT_0833c9f8 + iVar3 * 8);
          *(int *)(&DAT_0202f4a8 + (iVar3 + 0x15) * 4) = iVar7;
        }
        uVar2 = iVar3 + 1U & 0xffff;
      } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 10);
      return in_lr;
    }
  } while( true );
}

