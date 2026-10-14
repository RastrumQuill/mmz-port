// sub_0805D3B0 at 0x0805D3B0 (thumb)

undefined4 sub_0805D3B0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined auStack_2c [8];
  int local_24;
  int local_20;
  
  sub_08128B5C(auStack_2c,&DAT_081290a8,6);
  iVar4 = DAT_0202dbf0;
  local_24 = -0xe00;
  local_20 = 0xe00;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_2c[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x600;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((iVar4 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(iVar4 + 0x171) = 1;
    *(undefined *)(iVar4 + 0x172) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
    *(uint *)(iVar4 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_24 * ((bVar1 >> 4 & 1) * 2 + -1);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_20;
    *(int *)(iVar4 + 0x58) = iVar2;
    piVar5 = (int *)(param_1 + 0xb4);
    if (iVar2 < *piVar5) {
      if (*(int *)(param_1 + 0x58) + 0x2400 < *piVar5) {
        return in_lr;
      }
      sub_08098078(param_1,0,1);
      iVar4 = *piVar5;
      iVar2 = -0x2400;
    }
    else {
      sub_08098078(param_1,0,1);
      iVar3 = *(int *)(iVar4 + 0x58);
      iVar2 = *piVar5;
      *(int *)(iVar4 + 0x58) = iVar2;
      iVar2 = iVar2 - iVar3;
      iVar4 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar4 + iVar2;
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

