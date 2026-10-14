// sub_0807B9D0 at 0x0807B9D0 (thumb)

undefined4 sub_0807B9D0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0807E7E0(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    iVar2 = sub_0807E858(param_1,*(int *)(param_1 + 200));
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xbe) = 1;
    }
    else if (iVar2 == 4) {
      *(undefined *)(param_1 + 0xbe) = 0;
    }
    else {
      *(bool *)(param_1 + 0xbe) = *(int *)(param_1 + 200) < *(int *)(DAT_0202dbf0 + 0x54);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

