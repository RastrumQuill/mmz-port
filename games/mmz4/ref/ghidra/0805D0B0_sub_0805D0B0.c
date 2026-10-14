// sub_0805D0B0 at 0x0805D0B0 (thumb)

undefined4 sub_0805D0B0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined auStack_4c [8];
  int local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  sub_08128B5C(auStack_4c,&DAT_0812906a,6);
  iVar2 = DAT_0202dbf0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0x600;
  uStack_34 = 0;
  uStack_30 = 0x1000;
  local_2c = 0xfffff400;
  uStack_28 = 0xf00;
  uStack_24 = 0xfffff200;
  local_20 = 0xe00;
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x15c);
    iVar4 = DAT_0202dbf0;
    *(int *)(param_1 + 0xc0) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xc4) = *(int *)(iVar4 + 0x58) - *(int *)(param_1 + 0x58);
    sub_0805EE34(param_1,auStack_4c[(uint)bVar1 * 2]);
    iVar4 = uVar7 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x100;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(int *)(param_1 + 100) = iVar4 * -0x10;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pcVar6 = (char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(*pcVar6 * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*pcVar6) * 0x18);
  if ('\x01' < *pcVar6) {
    *(undefined *)(param_1 + 0x25) = 0xf;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar5 = uVar7 * 2 + -1;
    iVar4 = *(int *)(param_1 + 0xd0) + iVar5 * 0x5800;
    if (0 < iVar5 * (iVar3 - iVar4)) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(byte *)(param_1 + 0x12) < 0x11) {
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(uint *)(iVar2 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_44[*pcVar6 * 2] * (uVar7 * 2 + -1);
    *(int *)(iVar2 + 0x58) =
         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_44[*pcVar6 * 2 + 1];
    if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
      *(undefined *)(param_1 + 0xe) = 3;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

