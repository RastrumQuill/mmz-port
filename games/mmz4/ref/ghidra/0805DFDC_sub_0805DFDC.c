// sub_0805DFDC at 0x0805DFDC (thumb)

undefined4 sub_0805DFDC(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,0);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + -0x5000 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined *)(param_1 + 0xf) = 2;
    }
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) != '\0') {
      sub_0805EE34(param_1,0xf);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  piVar6 = (int *)(param_1 + 0xcc);
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar3 = *piVar6;
  if (iVar3 != 0) {
    if (*(byte *)(iVar3 + 0xc) < 2) {
      if (*(char *)(iVar3 + 0xb9) != '\0') {
        local_28 = -1;
        if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(iVar3 + 0x54)) {
          local_28 = 1;
        }
        local_28 = local_28 * 0x240;
        local_24 = 0;
        if ((iVar4 != 0) && ((DAT_0202e918 & 8) == 0)) {
          piVar2 = (int *)(iVar4 + 0x1bc);
          *piVar2 = *piVar2 + local_28;
        }
        if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
          uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar5 & 0x7fffffff;
          local_20 = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0x8000 +
                     (0x40 - (uVar5 * 2 >> 0x11 & 0x7f)) * 0x100;
          local_1c = *(undefined4 *)(param_1 + 0xb4);
          sub_080DDF28(&local_20,&local_28,0,0);
        }
      }
    }
    else {
      *piVar6 = 0;
    }
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar4 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4 * (uVar5 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar4 = iVar4 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar4 = iVar4 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x280 < iVar4) {
      if ((uVar5 == 0) || (*piVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0x280;
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}

