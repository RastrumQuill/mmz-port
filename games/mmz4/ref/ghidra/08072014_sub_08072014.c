// sub_08072014 at 0x08072014 (thumb)

undefined4 sub_08072014(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x129);
    sub_080735E0(param_1,0xf);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + iVar1) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x71) == '\x01')) {
    local_20 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0xc00;
    local_1c = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080BE344(param_1,&local_20,uVar2);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

