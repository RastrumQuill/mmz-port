// sub_080077F0 at 0x080077F0 (thumb)

undefined4 sub_080077F0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 in_lr;
  
  if ((DAT_030032e0 & 0x80) != 0) {
    return in_lr;
  }
  iVar4 = *(int *)(param_2 + 4);
  if ((*(uint *)(param_1 + 0x3c) & *(uint *)(iVar4 + 4)) == 0) {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((*(char *)(iVar5 + 2) == '\x03') && ((*(byte *)(iVar4 + 9) & 4) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20000000;
    DAT_03003908 = param_1;
  }
  if ((*(char *)(iVar5 + 2) == '\x04') && ((*(byte *)(iVar4 + 9) & 0x10) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x40000000;
    DAT_0300390c = param_1;
  }
  if ((*(char *)(iVar5 + 2) == '\x05') && ((*(byte *)(iVar4 + 9) & 8) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x80000000;
    DAT_03003910 = param_1;
  }
  if (((int)(uint)DAT_030032e0 >> *(sbyte *)(iVar4 + 1) & 1U) != 0) {
    return in_lr;
  }
  if (((((*(byte *)(iVar5 + 10) & 0x21) != 0) && ((*(byte *)(iVar4 + 10) & 4) != 0)) &&
      (uVar6 = *(uint *)(param_1 + 0x18), (uVar6 & 0x800) == 0)) &&
     ((*(uint *)(param_2 + 0x18) & 0x400) == 0)) {
    if (((*(uint *)(param_1 + 0x1c) & 0x800) == 0) && ((*(uint *)(param_2 + 0x1c) & 0x400) == 0)) {
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_2 + 0x10) = param_1;
      uVar3 = (undefined)((*(byte *)(iVar5 + 10) & 0xf0) >> 1);
      *(undefined *)(param_2 + 0x21) = uVar3;
      *(undefined *)(param_1 + 0x21) = uVar3;
      uVar6 = *(uint *)(param_1 + 0x14) | 0x800;
      *(uint *)(param_1 + 0x14) = uVar6;
      uVar8 = *(uint *)(param_2 + 0x14) | 0x400;
      *(uint *)(param_2 + 0x14) = uVar8;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar6;
    }
    else {
      if (((*(int *)(param_1 + 0x10) != param_2) || (*(int *)(param_2 + 0x10) != param_1)) ||
         ((((*(byte *)(iVar5 + 10) & 2) == 0 || (*(char *)(param_1 + 0x21) == '\0')) &&
          ((*(char *)(param_1 + 0x21) == '\0' || (*(char *)(param_2 + 0x21) == '\0'))))))
      goto LAB_08007968;
      uVar7 = *(uint *)(param_1 + 0x14) | 0x800;
      *(uint *)(param_1 + 0x14) = uVar7;
      uVar8 = *(uint *)(param_2 + 0x14) | 0x400;
      *(uint *)(param_2 + 0x14) = uVar8;
      *(uint *)(param_1 + 0x18) = uVar7 | uVar6;
    }
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | uVar8;
  }
LAB_08007968:
  uVar6 = *(uint *)(param_2 + 0x18);
  if ((uVar6 & 9) != 0) {
    return in_lr;
  }
  iVar4 = *(int *)(param_2 + 4);
  if ((*(uint *)(param_1 + 0x3c) & *(uint *)(iVar4 + 0xc)) != 0) {
    iVar5 = *(int *)(param_1 + 4);
    if ((((*(char *)(iVar5 + 2) == '\x01') && (*(byte *)(iVar5 + 4) != 0)) &&
        ((*(uint *)(param_2 + 0x1c) & 0x18) != 0)) &&
       (((*(byte *)(param_2 + 0x23) & 0xf) == *(byte *)(iVar5 + 4) &&
        (*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22))))) {
      *(int *)(param_1 + 0xc) = param_2;
      *(int *)(param_2 + 0xc) = param_1;
      uVar7 = 0x10;
      goto LAB_08007d06;
    }
    if (*(char *)(iVar4 + 8) != -1) {
      *(int *)(param_1 + 0xc) = param_2;
      uVar6 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = uVar6 | 0x20;
      if ((*(byte *)(iVar4 + 9) & 1) != 0) {
        *(uint *)(param_1 + 0x14) = uVar6 | 0x1020;
      }
    }
    if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_1 + 0x37) == -1)) goto LAB_08007bd6;
    *(int *)(param_2 + 0xc) = param_1;
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 8;
    *(byte *)(param_2 + 0x23) = *(byte *)(iVar5 + 4) & 0xf | *(char *)(param_1 + 0x38) << 4;
    *(undefined *)(param_2 + 0x22) = *(undefined *)(param_1 + 0x3a);
    if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x1000;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
    if ((bVar1 & 1) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x4000;
    }
    if ((bVar1 & 2) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x8000;
    }
    if ((bVar1 & 0x10) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    }
    if ((bVar1 & 0x20) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x20000;
    }
    if ((bVar1 & 0x40) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x400000;
    }
    if ((*(char *)(*(int *)(param_2 + 4) + 8) != -1) && ((byte)(*(char *)(iVar5 + 4) - 1U) < 2)) {
      DAT_030032e2 = 4;
    }
LAB_08007cfa:
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_1 + 0x14);
    uVar7 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)(param_2 + 0x14);
LAB_08007d06:
    *(uint *)(param_2 + 0x18) = uVar7 | uVar6;
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((((*(char *)(iVar5 + 2) == '\x01') && (*(byte *)(iVar5 + 4) != 0)) &&
      ((*(uint *)(param_2 + 0x1c) & 3) != 0)) &&
     (((*(byte *)(param_2 + 0x23) & 0xf) == *(byte *)(iVar5 + 4) &&
      (*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22))))) {
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_2 + 0xc) = param_1;
    uVar7 = 2;
    goto LAB_08007d06;
  }
  if (*(char *)(iVar4 + 8) != -1) {
    *(int *)(param_1 + 0xc) = param_2;
    uVar7 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = uVar7 | 4;
    if ((*(byte *)(iVar4 + 9) & 1) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x2000;
      *(uint *)(param_1 + 0x14) = uVar7 | 0x1004;
    }
  }
  pcVar9 = (char *)(param_2 + 0x20);
  if (*(char *)(iVar4 + 2) == '\x02') {
    if (*pcVar9 != '\0') {
      if ((*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22)) && (*(char *)(iVar5 + 4) != '\0')
         ) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        return in_lr;
      }
      goto LAB_08007b72;
    }
LAB_08007b88:
    if (*(char *)(param_1 + 0x37) != -1) {
      *(int *)(param_2 + 0xc) = param_1;
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 1;
      *(byte *)(param_2 + 0x23) = *(byte *)(iVar5 + 4) & 0xf | *(char *)(param_1 + 0x38) << 4;
      *(undefined *)(param_2 + 0x22) = *(undefined *)(param_1 + 0x3a);
      if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x1000;
      }
      bVar1 = *(byte *)(param_1 + 0x39);
      if ((bVar1 & 1) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x4000;
      }
      if ((bVar1 & 2) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x8000;
      }
      if ((bVar1 & 0x10) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      }
      if ((bVar1 & 0x20) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x20000;
      }
      if ((bVar1 & 0x40) != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800000;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x400000;
      }
      iVar4 = sub_0800773C(param_1,param_2);
      iVar4 = (uint)*(ushort *)(param_2 + 0x30) - iVar4;
      *(short *)(param_2 + 0x30) = (short)iVar4;
      if (iVar4 * 0x10000 < 1) {
        *(undefined2 *)(param_2 + 0x30) = 0;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x200;
      }
      if ((*(char *)(*(int *)(param_2 + 4) + 8) != -1) &&
         ((byte)(*(char *)(*(int *)(param_1 + 4) + 4) - 1U) < 2)) {
        DAT_030032e2 = 4;
      }
      cVar2 = *(char *)(*(int *)(param_2 + 4) + 2);
      if ((cVar2 == '\x01') || (cVar2 == '\x02')) {
        *pcVar9 = 'Z';
      }
      goto LAB_08007cfa;
    }
  }
  else {
LAB_08007b72:
    if ((*pcVar9 == '\0') || (*(byte *)(param_2 + 0x22) < *(byte *)(param_1 + 0x3a)))
    goto LAB_08007b88;
  }
  if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
    *(int *)(param_1 + 0xc) = param_2;
    *(uint *)(param_2 + 0x18) = uVar6 | 0x1000;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000;
  }
  if ((*(byte *)(param_1 + 0x39) & 0x40) != 0) {
    *(int *)(param_1 + 0xc) = param_2;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x400000;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800000;
  }
LAB_08007bd6:
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_1 + 0x14);
  return in_lr;
}

