// sub_0807CB44 at 0x0807CB44 (thumb)

undefined4 sub_0807CB44(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x146);
    sub_0807E7E0(param_1,0x19);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((*(char *)(param_1 + 0x13) != '\0') && (bVar2 < 0x19)) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x500;
      iVar1 = sub_080CEF78(param_1,&local_14,0,0);
      *(int *)(param_1 + 0xd0) = iVar1;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if (bVar2 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

