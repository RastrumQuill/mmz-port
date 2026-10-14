// sub_0805D520 at 0x0805D520 (thumb)

undefined4 sub_0805D520(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined auStack_44 [8];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined4 uStack_4;
  
  sub_08128B5C(auStack_44,&DAT_081290ae,6);
  iVar5 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  uStack_4 = in_lr;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x38);
    if ((iVar5 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
      *(byte *)(iVar5 + 0x142) = *(byte *)(iVar5 + 0x142) | 0x40;
      *(undefined *)(iVar5 + 0xd) = 4;
      *(undefined *)(iVar5 + 0xe) = 0;
      *(uint *)(iVar5 + 0x128) = ((bVar2 >> 4 & 1) * 2 + -1) * 0x400;
      *(undefined4 *)(iVar5 + 300) = 0xfffffd80;
      *(undefined4 *)(iVar5 + 0x130) = 0;
      *(undefined4 *)(iVar5 + 0x134) = 0x40;
      *(undefined2 *)(iVar5 + 0x138) = 0x10;
    }
    uVar6 = 0;
    local_28 = (int *)(param_1 + 0xb4);
    local_2c = (uint)bVar1 << 1;
    local_24 = &local_3c;
    do {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_3c = *(int *)(param_1 + 0x54) + (0x10 - (uVar4 * 2 >> 0x11 & 0x1f)) * 0x100;
      local_38 = *local_28;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      local_34 = ((uVar4 * 2 >> 0x11 & 0x3f) + 0x140) * ((uVar6 & 1) * 2 + -1);
      local_30 = 0;
      sub_080DDF28(&local_3c,&local_34,0,0);
      piVar3 = local_24;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
    uVar6 = 0;
    do {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_3c = *(int *)(param_1 + 0x54) + (0x10 - (uVar4 * 2 >> 0x11 & 0x1f)) * 0x100;
      piVar3[1] = *local_28;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      local_34 = ((uVar4 * 2 >> 0x11 & 0x1f) + 0x80) * ((uVar6 & 1) * 2 + -1);
      local_30 = 0;
      sub_080DDF28(piVar3,&local_34,0,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
    sub_0805EE34(param_1,auStack_44[local_2c]);
    *(undefined4 *)(param_1 + 0x60) = 0x600;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    if (*(int *)(param_1 + 0xb4) <= iVar5 + 0x2400) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0x2400;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 6;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

