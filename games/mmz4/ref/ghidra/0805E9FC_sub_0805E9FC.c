// sub_0805E9FC at 0x0805E9FC (thumb)

undefined4 sub_0805E9FC(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_4c [8];
  short asStack_44 [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  sub_08128B5C(auStack_4c,&DAT_081290c6,6);
  sub_08128B5C(asStack_44,&DAT_081290cc,0x10);
  bVar2 = *(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x5c);
    sub_08002B10(0x53);
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_0805EE34(param_1,auStack_4c[(uint)bVar2 * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  local_30 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = local_30;
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 7) == 0) {
    uVar3 = uVar4 * 0x1000000 >> 0x1b & 3;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_24 = uVar4 & 0x7fffffff;
    local_2c = ((bVar1 >> 4 & 1) * 2 + -1) *
               ((int)asStack_44[uVar3 * 2] + ((uVar4 * 2 >> 0x11 & 0xf) - 7) * 0x100);
    uVar4 = local_24 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    local_28 = (int)asStack_44[uVar3 * 2 + 1] + ((uVar4 * 2 >> 0x11 & 0xf) - 7) * 0x100;
    local_34 = *(int *)(param_1 + 0x54) + local_2c;
    local_30 = local_28 + local_30;
    sub_080D0894(1);
  }
  uVar4 = *(int *)(param_1 + 0x68) + 1;
  *(uint *)(param_1 + 0x68) = uVar4;
  if ((int)uVar4 < 0x80) {
    if ((uVar4 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ebc6;
    }
  }
  else if ((uVar4 & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0805ebc6;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0805ebc6:
  *(byte *)(param_1 + 10) = bVar2;
  if (DAT_0202ea34 + 0xefff < *(int *)(param_1 + 0x58)) {
    DAT_0202e922 = DAT_0202e922 | 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  }
  return in_lr;
}

