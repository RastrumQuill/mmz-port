// sub_08001B40 at 0x08001B40 (thumb)

undefined4 sub_08001B40(void)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 in_lr;
  char local_28 [4];
  int local_24;
  
  uVar5 = 0;
  do {
    local_24 = uVar5 << 0x10;
    iVar7 = local_24 >> 0x10;
    sVar1 = (&DAT_04000120)[iVar7];
    if (sVar1 != -1) {
      pbVar10 = &DAT_08312320 + iVar7;
      DAT_02000ca1 = DAT_02000ca1 | *pbVar10;
      if (sVar1 != 0xfff) {
        uVar3 = sub_08001AE0(sVar1,local_28);
        uVar5 = (int)((uint)uVar3 << 0x10) >> 0x10;
        if (-1 < (int)uVar5) {
          uVar6 = (int)((uint)uVar3 << 0x10) >> 0x18;
          if ((local_28[0] == '\x01') && ((DAT_02000ca2 & 2) != 0)) {
            if ((uVar5 & 0xf00) == 0x800) {
              (&DAT_02000d00)[iVar7] = 0;
              *(char *)(&DAT_02000cec)[iVar7] = (char)uVar3;
              DAT_02000cdd = DAT_02000cdd | *pbVar10;
              DAT_02000cde = DAT_02000cde | *pbVar10;
            }
            uVar5 = (uint)(ushort)(&DAT_02000d00)[iVar7];
            if ((uVar5 != 0) && ((uVar6 & 7) == (uVar5 & 7))) {
              if (uVar5 < DAT_02000d0a) {
                *(char *)((&DAT_02000cec)[iVar7] + (uint)(ushort)(&DAT_02000d00)[iVar7]) =
                     (char)uVar3;
              }
              DAT_02000cdd = DAT_02000cdd | *pbVar10;
              pbVar8 = &DAT_02000cde;
              bVar2 = *pbVar10;
              bVar4 = DAT_02000cde;
LAB_08001de8:
              *pbVar8 = bVar4 | bVar2;
            }
          }
          else if ((local_28[0] == '\x02') && ((DAT_02000ca2 & 4) != 0)) {
            if ((DAT_02000ca4 != '\0') && (local_24 == 0)) {
              uVar9 = DAT_02000cd4 + 1;
              if (((uVar9 & 7) == (uVar6 & 7)) &&
                 (((uint)DAT_02000cd4 == (uint)DAT_02000cd6 && (DAT_02000cab == 0x1f)))) {
                DAT_02000cd4 = (ushort)uVar9;
                DAT_02000ca9 = DAT_02000ca9 | 0x10;
                DAT_02000cbc = DAT_02000cb4;
                DAT_02000cab = 0;
              }
              if (((DAT_02000cd4 & 7) == (uVar6 & 7)) && ((uVar5 & 0xff) != 0)) {
                if ((uVar5 & 0x800) == 0) {
                  DAT_02000cab = DAT_02000cab | 2;
                  DAT_02000cac = uVar3;
                }
                else {
                  DAT_02000cb4 = uVar3 & 0x7ff;
                  DAT_02000cab = DAT_02000cab | 1;
                }
              }
              if ((DAT_02000cab == 3) && (DAT_02000cac == DAT_02000cb4)) {
                DAT_02000cab = 0x1f;
              }
            }
            if ((DAT_02000ca4 == '\0') && (local_24 >> 0x10 == 1)) {
              if ((DAT_02000cd4 & 7) == (uVar6 & 7)) {
                if (((uVar5 & 0xff) == 0) && (DAT_02000cab == 0x1f)) {
                  DAT_02000cd4 = DAT_02000cd4 + 1;
                  DAT_02000ca9 = DAT_02000ca9 | 0x20;
                  DAT_02000cbe = DAT_02000cb6;
                  DAT_02000cab = 0;
                }
                else if ((uVar5 & 0x800) == 0) {
                  DAT_02000cab = DAT_02000cab | 2;
                  DAT_02000cae = uVar3;
                }
                else {
                  DAT_02000cb6 = uVar3 & 0x7ff;
                  DAT_02000cab = DAT_02000cab | 1;
                }
              }
              if ((DAT_02000cab == 3) && (DAT_02000cae == DAT_02000cb6)) {
                DAT_02000cab = 0x1f;
              }
            }
          }
          else if ((DAT_02000ce0 != '\0') &&
                  (uVar3 = DAT_04000128, (uVar5 & (byte)(&DAT_08312320)[(uVar3 & 0x30) >> 4]) != 0))
          {
            pbVar8 = &DAT_02000cdf;
            bVar2 = (&DAT_08312320)[local_24 >> 0x10];
            bVar4 = DAT_02000cdf;
            goto LAB_08001de8;
          }
        }
      }
    }
    uVar5 = local_24 + 0x10000U >> 0x10;
    if (1 < (int)(local_24 + 0x10000U) >> 0x10) {
      return in_lr;
    }
  } while( true );
}

