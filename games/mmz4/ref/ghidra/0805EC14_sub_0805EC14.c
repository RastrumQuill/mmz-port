// sub_0805EC14 at 0x0805EC14 (thumb)

undefined4 sub_0805EC14(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_48 [8];
  short asStack_40 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  sub_08128B5C(auStack_48,&DAT_081290c6,6);
  sub_08128B5C(asStack_40,&DAT_081290cc,0x10);
  bVar2 = *(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x5c);
    sub_08002B10(0x53);
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_0805EE34(param_1,auStack_48[(uint)bVar2 * 2]);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x100;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if (*(char *)(param_1 + 0xf) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 7) == 0) {
    uVar3 = uVar4 * 0x1000000 >> 0x1b & 3;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_28 = ((bVar1 >> 4 & 1) * 2 + -1) *
               ((int)asStack_40[uVar3 * 2] + ((uVar4 * 2 >> 0x11 & 0xf) - 7) * 0x100);
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    local_24 = (int)asStack_40[uVar3 * 2 + 1] + ((uVar4 * 2 >> 0x11 & 0xf) - 7) * 0x100;
    local_30 = *(int *)(param_1 + 0x54) + local_28;
    local_2c = *(int *)(param_1 + 0x58) + local_24;
    sub_080D0894(1);
  }
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 == 0) {
    DAT_0202e922 = DAT_0202e922 | 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if ((int)uVar4 < 0x80) {
    if ((uVar4 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ee22;
    }
  }
  else {
    if (uVar4 == 0x80) {
      DAT_0202e8b9 = DAT_0202e8b9 | 0x20;
    }
    if ((uVar4 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ee22;
    }
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0805ee22:
  *(byte *)(param_1 + 10) = bVar2;
  return in_lr;
}

