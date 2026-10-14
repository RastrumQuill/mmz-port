// sub_08009B5C at 0x08009B5C (thumb)

undefined4 sub_08009B5C(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = 0x9f;
  puVar1 = (uint *)sub_08000A70(0x280);
  if (puVar1 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar2 = *(int *)(param_1 + 0x34);
    iVar6 = ((*(int *)(param_1 + 0x38) + -0x5a0 >> 3) + 0x13) * 0x10000 >> 0x10;
    DAT_03001704 = puVar1;
    if (0x80 < iVar6 + 0x9f) {
      puVar3 = puVar1 + 0x9f;
      do {
        *puVar3 = iVar6 << 0x10 | (uint)(iVar2 << 0xf) >> 0x10;
        puVar3 = puVar3 + -1;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) break;
      } while (0x80 < iVar6 + iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (-1 < iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x5a0 >> 4) + 0x1c) * 0x10000 >> 0x10;
      if (0x80 < iVar6 + iVar8) {
        uVar7 = iVar8 * -0x10000 + 0x800000;
        puVar3 = puVar1 + iVar8;
        do {
          *puVar3 = uVar7;
          uVar7 = uVar7 + 0x10000;
          puVar3 = puVar3 + -1;
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) goto LAB_08009c48;
        } while (0x80 < iVar6 + iVar8);
      }
      if ((-1 < iVar8) && (0x77 < iVar6 + iVar8)) {
        puVar3 = puVar1 + iVar8;
        do {
          *puVar3 = iVar6 << 0x10 | (uint)(iVar2 << 0xe) >> 0x10;
          puVar3 = puVar3 + -1;
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) break;
        } while (0x77 < iVar6 + iVar8);
      }
    }
LAB_08009c48:
    iVar2 = *(int *)(param_1 + 0x34);
    if (-1 < iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x5a0 >> 5) + 0x20) * 0x10000 >> 0x10;
      if (0x77 < iVar6 + iVar8) {
        uVar7 = iVar8 * -0x10000 + 0x770000;
        puVar3 = puVar1 + iVar8;
        do {
          *puVar3 = uVar7;
          uVar7 = uVar7 + 0x10000;
          puVar3 = puVar3 + -1;
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) goto LAB_08009cba;
        } while (0x77 < iVar6 + iVar8);
      }
      if ((-1 < iVar8) && (0x70 < iVar6 + iVar8)) {
        puVar3 = puVar1 + iVar8;
        do {
          *puVar3 = iVar6 << 0x10 | (uint)(iVar2 << 0xd) >> 0x10;
          puVar3 = puVar3 + -1;
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) break;
        } while (0x70 < iVar6 + iVar8);
      }
    }
LAB_08009cba:
    sVar5 = (short)iVar8;
    uVar7 = *(uint *)(param_1 + 0x68);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar2 = 0;
    if ((-1 < sVar5) &&
       (iVar6 = (int)(short)((short)(*(int *)(param_1 + 0x38) + -0x500 >> 4) + 0x18), iVar6 < 0x27))
    {
      puVar3 = puVar1;
      do {
        *puVar3 = iVar6 << 0x10 | (uVar7 >> 1) + (iVar8 >> 2) & 0xffff;
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
        if (sVar5 < iVar2) break;
      } while (iVar6 + iVar2 < 0x27);
    }
    uVar7 = (*(uint *)(param_1 + 0x68) >> 2) + (*(int *)(param_1 + 0x34) >> 3) & 0xffff;
    iVar8 = (int)sVar5;
    if (iVar2 <= iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x500 >> 5) + 0x18) * 0x10000 >> 0x10;
      if (iVar6 + iVar2 < 0x27) {
        uVar4 = iVar2 * -0x10000 + 0x270000;
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = uVar4 | uVar7;
          uVar4 = uVar4 - 0x10000;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) goto LAB_08009d96;
          puVar3 = puVar3 + 1;
        } while (iVar6 + iVar2 < 0x27);
      }
      if ((iVar2 <= iVar8) && (iVar6 + iVar2 < 0x35)) {
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = iVar6 << 0x10 | uVar7;
          puVar3 = puVar3 + 1;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) break;
        } while (iVar6 + iVar2 < 0x35);
      }
    }
LAB_08009d96:
    uVar7 = (*(uint *)(param_1 + 0x68) >> 3) + (*(int *)(param_1 + 0x34) >> 4) & 0xffff;
    if (iVar2 <= iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x500 >> 6) + 0x18) * 0x10000 >> 0x10;
      if (iVar6 + iVar2 < 0x35) {
        uVar4 = iVar2 * -0x10000 + 0x350000;
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = uVar4 | uVar7;
          uVar4 = uVar4 - 0x10000;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) goto LAB_08009e26;
          puVar3 = puVar3 + 1;
        } while (iVar6 + iVar2 < 0x35);
      }
      if ((iVar2 <= iVar8) && (iVar6 + iVar2 < 0x40)) {
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = iVar6 << 0x10 | uVar7;
          puVar3 = puVar3 + 1;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) break;
        } while (iVar6 + iVar2 < 0x40);
      }
    }
LAB_08009e26:
    uVar7 = (*(uint *)(param_1 + 0x68) >> 4) + (*(int *)(param_1 + 0x34) >> 5) & 0xffff;
    if (iVar2 <= iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x500 >> 7) + 0x18) * 0x10000 >> 0x10;
      if (iVar6 + iVar2 < 0x40) {
        uVar4 = iVar2 * -0x10000 + 0x400000;
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = uVar4 | uVar7;
          uVar4 = uVar4 - 0x10000;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) goto LAB_08009ed6;
          puVar3 = puVar3 + 1;
        } while (iVar6 + iVar2 < 0x40);
      }
      if ((iVar2 <= iVar8) && (iVar6 + iVar2 < 0x48)) {
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = iVar6 << 0x10 | uVar7;
          puVar3 = puVar3 + 1;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) break;
        } while (iVar6 + iVar2 < 0x48);
      }
    }
LAB_08009ed6:
    uVar7 = (*(uint *)(param_1 + 0x68) >> 5) + (*(int *)(param_1 + 0x34) >> 6) & 0xffff;
    if (iVar2 <= iVar8) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x500 >> 8) + 0x18) * 0x10000 >> 0x10;
      if (iVar6 + iVar2 < 0x48) {
        uVar4 = iVar2 * -0x10000 + 0x480000;
        puVar3 = puVar1 + iVar2;
        do {
          *puVar3 = uVar4 | uVar7;
          uVar4 = uVar4 - 0x10000;
          iVar2 = iVar2 + 1;
          if (iVar8 < iVar2) {
            return in_lr;
          }
          puVar3 = puVar3 + 1;
        } while (iVar6 + iVar2 < 0x48);
      }
      if (iVar2 <= iVar8) {
        if (iVar6 + iVar2 < 0x54) {
          puVar3 = puVar1 + iVar2;
          do {
            *puVar3 = iVar6 << 0x10 | uVar7;
            puVar3 = puVar3 + 1;
            iVar2 = iVar2 + 1;
            if (iVar8 < iVar2) {
              return in_lr;
            }
          } while (iVar6 + iVar2 < 0x54);
        }
        if (iVar2 <= iVar8) {
          uVar7 = iVar2 * -0x10000 + 0x720000;
          puVar1 = puVar1 + iVar2;
          do {
            *puVar1 = uVar7;
            puVar1 = puVar1 + 1;
            uVar7 = uVar7 - 0x10000;
            iVar2 = iVar2 + 1;
          } while (iVar2 <= iVar8);
        }
      }
    }
  }
  return in_lr;
}

