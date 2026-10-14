// sub_080F6CB8 at 0x080F6CB8 (thumb)

undefined4 sub_080F6CB8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) & 0xfc;
  uVar6 = 0;
  do {
    *(undefined *)(param_1 + 0xdfc + uVar6) = 0xff;
    iVar2 = DAT_0203063c;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 6);
  uVar6 = (uint)*(byte *)(param_1 + 0xe02) - (uint)*(byte *)(param_1 + 0xe05) & 0xff;
  uVar3 = (uint)(byte)(&DAT_0838bb98)[*(byte *)(param_1 + 0xe04)];
  uVar8 = 0;
  switch(*(undefined *)(param_1 + 0xe03)) {
  case 0:
  case 1:
    uVar7 = 0;
    if ((&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)] != '\0') {
      do {
        iVar5 = uVar7 + uVar3;
        bVar1 = *(byte *)(int *)(iVar2 + iVar5);
        if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
            ((uVar4 = (uint)(byte)(&DAT_0836e30c)[iVar5 * 4], (int)(uVar4 * 0x2000000) < 0 ||
             (((uVar4 << 0x1a) >> 0x1d == 1 && ((bVar1 & 4) != 0)))))) &&
           ((uVar4 & 7) == (uint)(*(int *)(iVar2 + iVar5) << 0x1b) >> 0x1e)) {
          if (uVar8 < uVar6) {
            *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 1;
          }
          else {
            if (5 < (int)(uVar8 - uVar6)) goto LAB_080f6e7c;
            *(char *)(param_1 + 0xdfc + (uVar8 - uVar6)) = (char)iVar5;
          }
          uVar8 = uVar8 + 1 & 0xff;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)(&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)]);
    }
    break;
  case 2:
    uVar7 = 0;
    if ((&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)] != '\0') {
      do {
        iVar5 = uVar7 + uVar3;
        bVar1 = *(byte *)(int *)(iVar2 + iVar5);
        if ((((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
             (uVar4 = (uint)(byte)(&DAT_0836e30c)[iVar5 * 4], -1 < (int)(uVar4 * 0x2000000))) &&
            (((uVar4 << 0x1a) >> 0x1d != 1 || ((bVar1 & 4) == 0)))) &&
           ((uVar4 & 7) == (uint)(*(int *)(iVar2 + iVar5) << 0x1b) >> 0x1e)) {
          if (uVar8 < uVar6) {
            *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 1;
          }
          else {
            if (5 < (int)(uVar8 - uVar6)) goto LAB_080f6e7c;
            *(char *)(param_1 + 0xdfc + (uVar8 - uVar6)) = (char)iVar5;
          }
          uVar8 = uVar8 + 1 & 0xff;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)(&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)]);
    }
    break;
  case 3:
    uVar7 = 0;
    if ((&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)] != '\0') {
      do {
        iVar5 = uVar7 + uVar3;
        bVar1 = *(byte *)(int *)(iVar2 + iVar5);
        if ((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
           (((((byte)(&DAT_0836e30c)[iVar5 * 4] & 7) !=
              (uint)(*(int *)(iVar2 + iVar5) << 0x1b) >> 0x1e ||
             (uVar4 = ((uint)(byte)(&DAT_0836e30c)[iVar5 * 4] << 0x1a) >> 0x1d, uVar4 == 1)) ||
            ((uVar4 == 2 && ((bVar1 & 4) == 0)))))) {
          if (uVar8 < uVar6) {
            *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 1;
          }
          else {
            if (5 < (int)(uVar8 - uVar6)) {
              *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 2;
              break;
            }
            *(char *)(param_1 + 0xdfc + (uVar8 - uVar6)) = (char)iVar5;
          }
          uVar8 = uVar8 + 1 & 0xff;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)(&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)]);
    }
    break;
  case 4:
    uVar7 = 0;
    if ((&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)] != '\0') {
      do {
        if ((*(byte *)(iVar2 + uVar7 + uVar3) & 1) != 0) {
          if (uVar8 < uVar6) {
            *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 1;
          }
          else {
            if (5 < (int)(uVar8 - uVar6)) {
              *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 2;
              break;
            }
            *(char *)(param_1 + 0xdfc + (uVar8 - uVar6)) = (char)(uVar7 + uVar3);
          }
          uVar8 = uVar8 + 1 & 0xff;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)(&DAT_0838bb9b)[*(byte *)(param_1 + 0xe04)]);
    }
  }
switchD_080f6d1e_caseD_5:
  if (((int)(uVar8 - uVar6) < 6) && ((*(byte *)(param_1 + 0xe0b) & 1) != 0)) {
    *(char *)(param_1 + 0xe02) = *(char *)(param_1 + 0xe02) + -1;
    sub_080F6CB8(param_1);
  }
  if ((*(char *)(param_1 + 0xdfc + (uint)*(byte *)(param_1 + 0xe05)) == -1) &&
     (*(byte *)(param_1 + 0xe05) != 0)) {
    *(char *)(param_1 + 0xe02) = *(char *)(param_1 + 0xe02) + -1;
    *(char *)(param_1 + 0xe05) = *(char *)(param_1 + 0xe05) + -1;
  }
  return in_lr;
LAB_080f6e7c:
  *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) | 2;
  goto switchD_080f6d1e_caseD_5;
}

