// sub_0805DE1C at 0x0805DE1C (thumb)

undefined4 sub_0805DE1C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c4467c,(DAT_0202e0e6 - 0x36b) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44688,(DAT_0202dee6 - 6) * 0x20 + 0x200);
    if (*(int *)(param_1 + 0xcc) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = -0x3c00;
      }
      else {
        local_14 = 0x3c00;
      }
      local_14 = *(int *)(param_1 + 0x54) + local_14;
      local_10 = *(undefined4 *)(param_1 + 0x58);
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      iVar3 = sub_080C409C(param_1,&local_14,0x11 < (uVar2 * 2 >> 0x11 & 0x1f));
      *(int *)(param_1 + 0xcc) = iVar3;
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
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

