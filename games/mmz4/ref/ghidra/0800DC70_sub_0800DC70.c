// sub_0800DC70 at 0x0800DC70 (thumb)

undefined4 sub_0800DC70(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar8 = 0x9f;
  puVar2 = (uint *)sub_08000A70(0x280);
  if (puVar2 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    iVar7 = ((*(int *)(param_1 + 0x38) + -0x3c0 >> 4) + 0x20) * 0x10000 >> 0x10;
    DAT_03001704 = puVar2;
    if (0x56 < iVar7 + 0x9f) {
      puVar4 = puVar2 + 0x9f;
      do {
        *puVar4 = iVar7 << 0x10 | (uint)(iVar3 << 0xd) >> 0x10;
        puVar4 = puVar4 + -1;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) break;
      } while (0x56 < iVar7 + iVar8);
    }
    sVar6 = (short)iVar8;
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar3 = 0;
    if ((-1 < sVar6) &&
       (iVar7 = (int)(short)((short)(*(int *)(param_1 + 0x38) + -0x140 >> 4) + 0x18), iVar7 < 0x25))
    {
      puVar4 = puVar2;
      do {
        *puVar4 = iVar7 << 0x10 | (uint)(uVar1 >> 4) + (iVar8 >> 2) & 0xffff;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        if (sVar6 < iVar3) break;
      } while (iVar7 + iVar3 < 0x25);
    }
    uVar9 = (uint)(*(ushort *)(param_1 + 0x6a) >> 4) + (*(int *)(param_1 + 0x34) >> 3) & 0xffff;
    iVar8 = (int)sVar6;
    if (iVar3 <= iVar8) {
      iVar7 = ((*(int *)(param_1 + 0x38) + -0x140 >> 5) + 0x18) * 0x10000 >> 0x10;
      if (iVar7 + iVar3 < 0x25) {
        uVar5 = iVar3 * -0x10000 + 0x250000;
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = uVar5 | uVar9;
          uVar5 = uVar5 - 0x10000;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) goto LAB_0800dde0;
          puVar4 = puVar4 + 1;
        } while (iVar7 + iVar3 < 0x25);
      }
      if ((iVar3 <= iVar8) && (iVar7 + iVar3 < 0x35)) {
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = iVar7 << 0x10 | uVar9;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) break;
        } while (iVar7 + iVar3 < 0x35);
      }
    }
LAB_0800dde0:
    uVar9 = (uint)(*(ushort *)(param_1 + 0x6c) >> 4) + (*(int *)(param_1 + 0x34) >> 5) & 0xffff;
    if (iVar3 <= iVar8) {
      iVar7 = ((*(int *)(param_1 + 0x38) + -0x140 >> 6) + 0x18) * 0x10000 >> 0x10;
      if (iVar7 + iVar3 < 0x35) {
        uVar5 = iVar3 * -0x10000 + 0x350000;
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = uVar5 | uVar9;
          uVar5 = uVar5 - 0x10000;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) goto LAB_0800de72;
          puVar4 = puVar4 + 1;
        } while (iVar7 + iVar3 < 0x35);
      }
      if ((iVar3 <= iVar8) && (iVar7 + iVar3 < 0x3c)) {
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = iVar7 << 0x10 | uVar9;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) break;
        } while (iVar7 + iVar3 < 0x3c);
      }
    }
LAB_0800de72:
    uVar9 = (uint)(*(ushort *)(param_1 + 0x6e) >> 4) + (*(int *)(param_1 + 0x34) >> 6) & 0xffff;
    if (iVar3 <= iVar8) {
      iVar7 = ((*(int *)(param_1 + 0x38) + -0x140 >> 7) + 0x18) * 0x10000 >> 0x10;
      if (iVar7 + iVar3 < 0x3c) {
        uVar5 = iVar3 * -0x10000 + 0x3c0000;
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = uVar5 | uVar9;
          uVar5 = uVar5 - 0x10000;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) goto LAB_0800df04;
          puVar4 = puVar4 + 1;
        } while (iVar7 + iVar3 < 0x3c);
      }
      if ((iVar3 <= iVar8) && (iVar7 + iVar3 < 0x44)) {
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = iVar7 << 0x10 | uVar9;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) break;
        } while (iVar7 + iVar3 < 0x44);
      }
    }
LAB_0800df04:
    uVar9 = (uint)(*(ushort *)(param_1 + 0x70) >> 4) + (*(int *)(param_1 + 0x34) >> 7) & 0xffff;
    if (iVar3 <= iVar8) {
      iVar7 = ((*(int *)(param_1 + 0x38) + -0x140 >> 8) + 0x18) * 0x10000 >> 0x10;
      if (iVar7 + iVar3 < 0x44) {
        uVar5 = iVar3 * -0x10000 + 0x440000;
        puVar4 = puVar2 + iVar3;
        do {
          *puVar4 = uVar5 | uVar9;
          uVar5 = uVar5 - 0x10000;
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) {
            return in_lr;
          }
          puVar4 = puVar4 + 1;
        } while (iVar7 + iVar3 < 0x44);
      }
      if (iVar3 <= iVar8) {
        if (iVar7 + iVar3 < 0x54) {
          puVar4 = puVar2 + iVar3;
          do {
            *puVar4 = iVar7 << 0x10 | uVar9;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + 1;
            if (iVar8 < iVar3) {
              return in_lr;
            }
          } while (iVar7 + iVar3 < 0x54);
        }
        if (iVar3 <= iVar8) {
          uVar9 = iVar3 * -0x10000 + 0x570000;
          puVar2 = puVar2 + iVar3;
          do {
            *puVar2 = uVar9;
            puVar2 = puVar2 + 1;
            uVar9 = uVar9 - 0x10000;
            iVar3 = iVar3 + 1;
          } while (iVar3 <= iVar8);
        }
      }
    }
  }
  return in_lr;
}

