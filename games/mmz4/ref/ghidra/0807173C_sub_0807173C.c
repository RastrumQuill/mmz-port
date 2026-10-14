// sub_0807173C at 0x0807173C (thumb)

undefined4 sub_0807173C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x128);
    sub_080735E0(param_1,9);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = (int)*(char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(iVar2 * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + iVar2) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x71) == '\x01')) {
    uVar1 = 0;
    do {
      local_20 = *(int *)(param_1 + 0x54) + -0x1800;
      local_1c = *(int *)(param_1 + 0x58) + -0x2000;
      sub_080C1000(param_1,&local_20,uVar1 & 0xff,0);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    uVar1 = 0;
    do {
      local_20 = *(int *)(param_1 + 0x54) + 0x1800;
      local_1c = *(int *)(param_1 + 0x58) + -0x2000;
      sub_080C1000(param_1,&local_20,uVar1 & 0xff,1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

