// sub_0805E800 at 0x0805E800 (thumb)

undefined4 sub_0805E800(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar5 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,0x31);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + -0x5000 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  piVar3 = (int *)(param_1 + 0xcc);
  if (*piVar3 != 0) {
    if (*(byte *)(*piVar3 + 0xc) < 3) {
      iVar6 = (bVar1 >> 4 & 1) * 2 + -1;
      local_28 = iVar6 * 0x180;
      local_24 = 0;
      if ((iVar5 != 0) && ((DAT_0202e918 & 8) == 0)) {
        piVar4 = (int *)(iVar5 + 0x1bc);
        *piVar4 = *piVar4 + local_28;
      }
      cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),0xf);
      if (cVar2 == '\0') {
        uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar7 & 0x7fffffff;
        local_20 = *(int *)(param_1 + 0x54) + iVar6 * 0x8000 +
                   (0x40 - (uVar7 * 2 >> 0x11 & 0x7f)) * 0x100;
        local_1c = *(undefined4 *)(param_1 + 0xb4);
        sub_080DDF28(&local_20,&local_28,0,0);
      }
    }
    else {
      *piVar3 = 0;
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar5 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5 * (uVar7 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar5 = iVar5 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar5 = iVar5 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x280 < iVar5) {
      if ((uVar7 == 0) || (*piVar3 != 0)) {
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

