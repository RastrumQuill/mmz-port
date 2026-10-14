// sub_08005974 at 0x08005974 (thumb)

undefined4 sub_08005974(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  sbyte *psVar4;
  char *pcVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  byte *pbVar11;
  undefined4 in_lr;
  
  if ((DAT_02004fa0 & 0x80) != 0) {
    return in_lr;
  }
  uVar10 = *(ushort *)(param_1 + 0x1c);
  if (((((uVar10 & 0x100) == 0) && ((*(ushort *)(param_2 + 0x1c) & 0x80) == 0)) &&
      (((int)(uint)DAT_02004fa0 >> **(sbyte **)(param_2 + 8) & 1U) == 0)) &&
     ((bVar6 = *(byte *)(*(int *)(param_1 + 8) + 2), (bVar6 & 1) != 0 &&
      (((*(sbyte **)(param_2 + 8))[2] & 4U) != 0)))) {
    if (((*(ushort *)(param_1 + 0x1e) & 0x100) == 0) && ((*(ushort *)(param_2 + 0x1e) & 0x80) == 0))
    {
      *(int *)(param_1 + 0x14) = param_2;
      *(int *)(param_2 + 0x14) = param_1;
      *(undefined *)(param_2 + 0x21) = 0xff;
      *(undefined *)(param_1 + 0x21) = 0xff;
      uVar10 = *(ushort *)(param_1 + 0x1a) | 0x100;
      *(ushort *)(param_1 + 0x1a) = uVar10;
      uVar3 = *(ushort *)(param_2 + 0x1a) | 0x80;
      *(ushort *)(param_2 + 0x1a) = uVar3;
      *(ushort *)(param_1 + 0x1c) = uVar10 | *(ushort *)(param_1 + 0x1c);
      uVar3 = uVar3 | *(ushort *)(param_2 + 0x1c);
    }
    else {
      if (((*(int *)(param_1 + 0x14) != param_2) || (*(int *)(param_2 + 0x14) != param_1)) ||
         ((((bVar6 & 2) == 0 || (*(char *)(param_1 + 0x21) == '\0')) &&
          ((*(char *)(param_1 + 0x21) == '\0' || (*(char *)(param_2 + 0x21) == '\0'))))))
      goto LAB_08005a7a;
      uVar7 = *(ushort *)(param_1 + 0x1a) | 0x100;
      *(ushort *)(param_1 + 0x1a) = uVar7;
      uVar3 = *(ushort *)(param_2 + 0x1a) | 0x80;
      *(ushort *)(param_2 + 0x1a) = uVar3;
      *(ushort *)(param_1 + 0x1c) = uVar7 | uVar10;
      uVar3 = uVar3 | *(ushort *)(param_2 + 0x1c);
    }
    *(ushort *)(param_2 + 0x1c) = uVar3;
  }
LAB_08005a7a:
  psVar4 = *(sbyte **)(param_2 + 8);
  if (psVar4[1] == 1) {
    iVar8 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar8 + 6) & 0x20) != 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x2000;
      *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 0x1c) | 0x2000;
      DAT_02004fbc = param_1;
    }
    if ((*(byte *)(iVar8 + 6) & 0x40) != 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x4000;
      *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 0x1c) | 0x4000;
      DAT_02004fc0 = param_1;
    }
    if ((*(byte *)(iVar8 + 6) & 0x80) != 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x8000;
      *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 0x1c) | 0x8000;
      DAT_02004fc4 = param_1;
    }
  }
  uVar10 = *(ushort *)(param_2 + 0x1c);
  if ((uVar10 & 9) != 0) {
    return in_lr;
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar3 = *(ushort *)(psVar4 + 0x12);
  if ((((uVar3 & *(ushort *)(&DAT_08290c3c + (uint)*(byte *)(iVar8 + 4) * 2)) == 0) &&
      ((uVar3 & *(ushort *)(&DAT_08290c44 + (uint)*(byte *)(iVar8 + 5) * 2)) == 0)) &&
     (((uVar3 & 2) == 0 || ((*(byte *)(iVar8 + 6) & 2) == 0)))) {
    if ((((*(char *)(iVar8 + 1) != '\x01') || (*(byte *)(iVar8 + 4) == 0)) ||
        ((*(ushort *)(param_2 + 0x1e) & 3) == 0)) ||
       (((*(byte *)(param_2 + 0x23) & 0xf) != *(byte *)(iVar8 + 4) ||
        (*(byte *)(param_2 + 0x22) < *(byte *)(iVar8 + 7))))) {
      if (psVar4[0x10] != -1) {
        *(int *)(param_1 + 0x10) = param_2;
        uVar10 = *(ushort *)(param_1 + 0x1a);
        *(ushort *)(param_1 + 0x1a) = uVar10 | 4;
        if ((psVar4[0x11] & 2U) != 0) {
          *(ushort *)(param_1 + 0x1a) = uVar10 | 0x204;
        }
      }
      pcVar5 = (char *)(param_2 + 0x20);
      if (*pcVar5 != '\0') {
        if ((psVar4[1] == 2) && (*(char *)(iVar8 + 4) != '\0')) {
          *(undefined2 *)(param_1 + 0x1a) = 0;
          return in_lr;
        }
        if (*pcVar5 != '\0') goto LAB_08005d1e;
      }
      if ((((int)(uint)DAT_02004fa0 >> *psVar4 & 1U) != 0) || (*(char *)(iVar8 + 3) == -1)) {
LAB_08005d1e:
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | *(ushort *)(param_1 + 0x1a);
        return in_lr;
      }
      *(int *)(param_2 + 0x10) = param_1;
      *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 1;
      pbVar11 = (byte *)(param_2 + 0x23);
      bVar6 = *(byte *)(iVar8 + 4) & 0xf;
      *pbVar11 = *pbVar11 & 0xf0 | bVar6;
      iVar9 = (uint)*(byte *)(iVar8 + 5) << 4;
      *pbVar11 = bVar6 | (byte)iVar9;
      *(undefined *)(param_2 + 0x22) = *(undefined *)(iVar8 + 7);
      uVar10 = (ushort)*(byte *)(iVar8 + 6);
      if ((*(byte *)(iVar8 + 6) & 4) != 0) {
        *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x200;
      }
      if ((*(byte *)(iVar8 + 6) & 1) != 0) {
        uVar10 = 0x400;
        *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x400;
      }
      if ((*(byte *)(iVar8 + 6) & 2) != 0) {
        uVar10 = *(ushort *)(param_2 + 0x1a);
        *(ushort *)(param_2 + 0x1a) = uVar10 | 0x800;
      }
      bVar6 = *(byte *)(iVar8 + 6);
      if ((bVar6 & 0x10) != 0) {
        *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x1000;
      }
      if (*(char *)(iVar8 + 3) == -2) {
        *(undefined2 *)(param_2 + 0x18) = 0;
      }
      else {
        sVar2 = sub_08005E58(param_1,param_2,uVar10,bVar6,iVar9);
        *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) - sVar2;
      }
      if (*(short *)(param_2 + 0x18) < 1) {
        *(undefined2 *)(param_2 + 0x18) = 0;
        *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x40;
      }
      if ((*(char *)(*(int *)(param_2 + 8) + 0x10) != -1) &&
         ((byte)(*(char *)(*(int *)(param_1 + 8) + 4) - 1U) < 2)) {
        DAT_02004fa2 = 4;
      }
      cVar1 = *(char *)(*(int *)(param_2 + 8) + 1);
      if (cVar1 == '\x01') {
        *pcVar5 = 'Z';
      }
      else if (cVar1 == '\x02') {
        if ((*(byte *)(*(int *)(param_1 + 8) + 6) & 8) == 0) {
          *pcVar5 = 'Z';
        }
        else {
          *pcVar5 = '\f';
        }
      }
      goto LAB_08005e36;
    }
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_2 + 0x10) = param_1;
    uVar3 = 2;
  }
  else {
    if ((((*(char *)(iVar8 + 1) == '\x01') && (*(byte *)(iVar8 + 4) != 0)) &&
        ((*(ushort *)(param_2 + 0x1e) & 0x18) != 0)) &&
       (((*(byte *)(param_2 + 0x23) & 0xf) == *(byte *)(iVar8 + 4) &&
        (*(byte *)(iVar8 + 7) <= *(byte *)(param_2 + 0x22))))) {
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_2 + 0x10) = param_1;
      uVar3 = uVar10 | 0x10;
      goto LAB_08005e44;
    }
    if (psVar4[0x10] != -1) {
      *(int *)(param_1 + 0x10) = param_2;
      uVar10 = *(ushort *)(param_1 + 0x1a);
      *(ushort *)(param_1 + 0x1a) = uVar10 | 0x20;
      if ((psVar4[0x11] & 2U) != 0) {
        *(ushort *)(param_1 + 0x1a) = uVar10 | 0x220;
      }
    }
    if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(iVar8 + 3) == -1)) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | *(ushort *)(param_1 + 0x1a);
      return in_lr;
    }
    *(int *)(param_2 + 0x10) = param_1;
    *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 8;
    pbVar11 = (byte *)(param_2 + 0x23);
    bVar6 = *(byte *)(iVar8 + 4) & 0xf;
    *pbVar11 = *pbVar11 & 0xf0 | bVar6;
    *pbVar11 = bVar6 | *(char *)(iVar8 + 5) << 4;
    *(undefined *)(param_2 + 0x22) = *(undefined *)(iVar8 + 7);
    if ((*(byte *)(iVar8 + 6) & 4) != 0) {
      *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x200;
    }
    if ((*(byte *)(iVar8 + 6) & 1) != 0) {
      *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x400;
    }
    if ((*(byte *)(iVar8 + 6) & 2) != 0) {
      *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x800;
    }
    if ((*(byte *)(iVar8 + 6) & 0x10) != 0) {
      *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) | 0x1000;
    }
    if ((*(char *)(*(int *)(param_2 + 8) + 0x10) != -1) && ((byte)(*(char *)(iVar8 + 4) - 1U) < 2))
    {
      DAT_02004fa2 = 4;
    }
LAB_08005e36:
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | *(ushort *)(param_1 + 0x1a);
    uVar3 = *(ushort *)(param_2 + 0x1c);
    uVar10 = *(ushort *)(param_2 + 0x1a);
  }
  uVar3 = uVar3 | uVar10;
LAB_08005e44:
  *(ushort *)(param_2 + 0x1c) = uVar3;
  return in_lr;
}

