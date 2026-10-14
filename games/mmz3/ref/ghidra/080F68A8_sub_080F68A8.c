// sub_080F68A8 at 0x080F68A8 (thumb)

undefined4 sub_080F68A8(int param_1)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x64ac);
  pbVar8 = (byte *)(param_1 + 0xe17);
  if (*pbVar8 == 0) {
    sub_080040A8(0x4f,0);
    sub_080041E4(0x4f);
    sub_08004230(0x4f);
    *pbVar8 = *pbVar8 + 1;
  }
  bVar4 = *(byte *)(param_1 + 0xe09);
  if (bVar4 < 0x91) {
    DAT_02002418 = (ushort)((((uint)bVar4 << 0x18) >> 0x1c) << 0xc) | 0x90;
    *(byte *)(param_1 + 0xe09) = bVar4 + 8;
  }
  uVar2 = DAT_02002136;
  cVar1 = *(char *)(param_1 + 0xe02);
  bVar4 = *pbVar8;
  if (1 < bVar4) {
    if (bVar4 == 3) {
      uVar6 = (uint)*(byte *)(param_1 + 0xdfc + (uint)*(byte *)(param_1 + 0xe05));
      iVar5 = uVar6 * 4;
      uVar9 = (uint)(*(int *)(DAT_0203063c + uVar6) << 0x1b) >> 0x1e;
      if (((byte)(&DAT_0836e30c)[iVar5] & 7) == uVar9) {
        iVar5 = (uint)(byte)(&DAT_0836e30f)[iVar5] * 6;
      }
      else {
        iVar5 = ((uint)(byte)(&DAT_0836e30f)[iVar5] * 3 + uVar9 + 1) * 2;
      }
      *(short *)(iVar10 + 0xba) = *(short *)(iVar10 + 0xba) - *(short *)(&DAT_0836e2c4 + iVar5);
      sub_0800471C(0x28);
      piVar7 = (int *)(DAT_0203063c + uVar6);
      uVar9 = (uint)(*piVar7 << 0x1b) >> 0x1e;
      if (((byte)(&DAT_0836e30c)[uVar6 * 4] & 7) == uVar9) {
        if (((uint)(byte)(&DAT_0836e30c)[uVar6 * 4] << 0x1a) >> 0x1d == 1) {
          bVar4 = *(byte *)piVar7;
          if ((bVar4 & 4) != 0) {
            bVar3 = bVar4 & 0xfb;
            goto LAB_080f6a5c;
          }
          bVar3 = 4;
        }
        else {
          bVar3 = *(byte *)piVar7;
          bVar4 = 4;
        }
      }
      else {
        bVar4 = (byte)((uVar9 + 1 & 3) << 3);
        bVar3 = *(byte *)piVar7 & 0xe7;
      }
      bVar3 = bVar3 | bVar4;
LAB_080f6a5c:
      *(byte *)piVar7 = bVar3;
      sub_080F6CB8(param_1);
      *(undefined *)(param_1 + 0xe17) = 1;
      return in_lr;
    }
    if (bVar4 < 4) {
      if (bVar4 == 2) {
        if ((DAT_02002134 & 2) == 0) {
          if ((DAT_02002134 & 1) == 0) {
            cVar1 = *(char *)(param_1 + 0xe0a);
            if ((DAT_02002136 & 0x20) != 0) {
              *(byte *)(param_1 + 0xe0a) = (byte)DAT_02002134 & 1;
            }
            if ((uVar2 & 0x10) != 0) {
              *(undefined *)(param_1 + 0xe0a) = 1;
            }
            if (cVar1 == *(char *)(param_1 + 0xe0a)) {
              return in_lr;
            }
            sub_0800471C(1);
            return in_lr;
          }
          if (*(char *)(param_1 + 0xe0a) == '\0') {
            *pbVar8 = 3;
            return in_lr;
          }
          *pbVar8 = 1;
        }
        else {
          *pbVar8 = 1;
        }
        goto LAB_080f6c0c;
      }
    }
    else if ((bVar4 < 6) && (DAT_02002134 != 0)) {
      *pbVar8 = 1;
    }
  }
  bVar4 = (byte)DAT_02002134;
  if ((DAT_02002134 & 1) == 0) {
    if ((DAT_02002134 & 2) == 0) {
      if (((*(byte *)(param_1 + 0xe0b) & 1) != 0) || (*(char *)(param_1 + 0xe05) != '\0')) {
        if ((DAT_02002136 & 0x40) != 0) {
          *(char *)(param_1 + 0xe02) = *(char *)(param_1 + 0xe02) + -1;
          if (*(char *)(param_1 + 0xe05) == '\0') {
            sub_080F6CB8(param_1);
          }
          else {
            *(char *)(param_1 + 0xe05) = *(char *)(param_1 + 0xe05) + -1;
          }
        }
LAB_080f6c4e:
        if ((DAT_02002136 & 0x80) != 0) {
          if (*(byte *)(param_1 + 0xe05) < 5) {
            if (*(char *)(param_1 + *(byte *)(param_1 + 0xe05) + 0xdfd) != -1) {
              *(char *)(param_1 + 0xe02) = *(char *)(param_1 + 0xe02) + '\x01';
              *(byte *)(param_1 + 0xe05) = *(byte *)(param_1 + 0xe05) + 1;
            }
          }
          else if ((*(byte *)(param_1 + 0xe0b) & 2) != 0) {
            *(char *)(param_1 + 0xe02) = *(char *)(param_1 + 0xe02) + '\x01';
            sub_080F6CB8(param_1);
          }
        }
        if (cVar1 == *(char *)(param_1 + 0xe02)) {
          return in_lr;
        }
        sub_0800471C(1);
        return in_lr;
      }
      if ((DAT_02002136 & 0x40) == 0) goto LAB_080f6c4e;
    }
    *(undefined *)(param_1 + 3) = 2;
    *(byte *)(param_1 + 0xe17) = bVar4 & 1;
LAB_080f6c0c:
    sub_0800471C(3);
    return in_lr;
  }
  bVar4 = *(byte *)(param_1 + 0xdfc + (uint)*(byte *)(param_1 + 0xe05));
  uVar9 = (uint)bVar4;
  if (uVar9 == 0xff) {
    sub_0800471C(4);
    return in_lr;
  }
  bVar3 = *(byte *)(param_1 + 0xe03);
  if (bVar3 == 1) {
    if (*(byte *)(iVar10 + 0xb5) == uVar9) {
      *(undefined *)(iVar10 + 0xb5) = 0xff;
    }
    else {
      if (*(byte *)(iVar10 + 0xb4) == uVar9) {
        *(byte *)(iVar10 + 0xb4) = *(byte *)(iVar10 + 0xb5);
      }
      *(byte *)(iVar10 + 0xb5) = bVar4;
    }
    goto LAB_080f6bb8;
  }
  if (bVar3 < 2) {
    if (bVar3 != 0) goto LAB_080f6bb8;
    pbVar8 = (byte *)(iVar10 + 0xb4);
    if (*pbVar8 != uVar9) {
      if (*(byte *)(iVar10 + 0xb5) == uVar9) {
        *(byte *)(iVar10 + 0xb5) = *pbVar8;
      }
      *pbVar8 = bVar4;
      goto LAB_080f6bb8;
    }
    bVar4 = 0xff;
  }
  else {
    if (bVar3 == 2) {
      sub_0800471C(0x23);
      *(byte *)(iVar10 + 0x121) = bVar4;
      *(byte *)(param_1 + 0xe1c) = bVar4;
      *(undefined *)(param_1 + 1) = 3;
      *(undefined *)(param_1 + 2) = 3;
      return in_lr;
    }
    if (bVar3 != 3) goto LAB_080f6bb8;
    iVar5 = uVar9 * 4;
    uVar6 = (uint)(*(int *)(DAT_0203063c + uVar9) << 0x1b) >> 0x1e;
    if (((byte)(&DAT_0836e30c)[iVar5] & 7) == uVar6) {
      iVar5 = (uint)(byte)(&DAT_0836e30f)[iVar5] * 6;
    }
    else {
      iVar5 = ((uint)(byte)(&DAT_0836e30f)[iVar5] * 3 + uVar6 + 1) * 2;
    }
    if ((*(byte *)(iVar10 + 0xb4) == uVar9) || (*(byte *)(iVar10 + 0xb5) == uVar9)) {
      sub_0800471C(4);
      *(undefined *)(param_1 + 0xe17) = 5;
      return in_lr;
    }
    if (*(ushort *)(iVar10 + 0xba) < *(ushort *)(&DAT_0836e2c4 + iVar5)) {
      sub_0800471C(4);
      *(undefined *)(param_1 + 0xe17) = 4;
      return in_lr;
    }
    sub_080E7084(param_1,5);
    *(undefined *)(param_1 + 0xe0a) = 0;
    pbVar8 = (byte *)(param_1 + 0xe17);
    bVar4 = 2;
  }
  *pbVar8 = bVar4;
LAB_080f6bb8:
  if (3 < *(byte *)(param_1 + 0xe03)) {
    return in_lr;
  }
  sub_0800471C(2);
  return in_lr;
}

