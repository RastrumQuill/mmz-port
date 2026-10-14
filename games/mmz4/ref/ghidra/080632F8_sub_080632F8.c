// sub_080632F8 at 0x080632F8 (thumb)

undefined4 sub_080632F8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x106);
    sub_08065A40(param_1,9);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + iVar1) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    local_20 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0x4000;
    local_1c = *(int *)(param_1 + 0x58) + -0x400;
    iVar1 = sub_0809B434(param_1,&local_20,0,uVar2);
    *(int *)(param_1 + 0xc4) = iVar1;
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_080633ea;
    }
    *(undefined *)(param_1 + 0x13) = 0;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xe) = 3;
LAB_080633ea:
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

