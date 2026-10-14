// sub_0805E5FC at 0x0805E5FC (thumb)

undefined4 sub_0805E5FC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c446a4,(DAT_0202e0ea - 0x36b) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c446b0,(DAT_0202deea - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c446b8,(DAT_0202e0ec - 0x3cb) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c446c4,(DAT_0202deec - 9) * 0x20 + 0x200);
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      iVar2 = sub_080C501C(param_1,uVar3 * 2 >> 0x11 & 3);
      *(int *)(param_1 + 0xcc) = iVar2;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 3) {
      if (*(char *)(iVar2 + 0xd) != '\x01') {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0xcc) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

