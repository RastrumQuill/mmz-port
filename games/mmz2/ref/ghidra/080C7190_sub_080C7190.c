// sub_080C7190 at 0x080C7190 (thumb)

undefined4 sub_080C7190(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080128D4(param_1);
        if ((*(char *)(param_1 + 0x11) == '\x02') && (*(char *)(param_1 + 0x73) == '\x03')) {
          sub_080127E4(param_1,*(undefined2 *)(&DAT_08348de8 + (uint)*(byte *)(param_1 + 0x11) * 8))
          ;
        }
        bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
        if ((bVar1 & 2) == 0) {
          return in_lr;
        }
        *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfd;
        sub_080127E4(param_1,*(undefined2 *)(&DAT_08348dec + (uint)*(byte *)(param_1 + 0x11) * 8));
        cVar2 = *(char *)(param_1 + 0xd) + '\x01';
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080128D4(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        sub_080127E4(param_1,*(undefined2 *)(&DAT_08348de8 + (uint)*(byte *)(param_1 + 0x11) * 8));
        cVar2 = '\x01';
      }
      goto LAB_080c72e6;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar3 = *(byte *)(param_1 + 0x11) + 0xdc;
    (&DAT_0202e590)[iVar3] = *(undefined2 *)(&DAT_08348dee + (uint)*(byte *)(param_1 + 0x11) * 8);
    (&DAT_0202e390)[iVar3] = *(byte *)(param_1 + 0x11) + 6;
    iVar3 = *(byte *)(param_1 + 0x11) + 0xdc;
    sub_08002638(&DAT_08432d00 + iVar3 * 5,
                 ((uint)(ushort)(&DAT_0202e590)[iVar3] -
                 (uint)((ushort)(&DAT_08432d06)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d0c + iVar3 * 0x14,
                 ((uint)(ushort)(&DAT_0202e390)[iVar3] - (uint)(byte)(&DAT_08432d13)[iVar3 * 0x14])
                 * 0x20 + 0x200);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348de8 + (uint)*(byte *)(param_1 + 0x11) * 8));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
  if ((bVar1 & 1) == 0) {
    return in_lr;
  }
  *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08348dea + (uint)*(byte *)(param_1 + 0x11) * 8));
  cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c72e6:
  *(char *)(param_1 + 0xd) = cVar2;
  return in_lr;
}

