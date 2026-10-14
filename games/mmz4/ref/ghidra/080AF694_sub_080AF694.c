// sub_080AF694 at 0x080AF694 (thumb)

undefined4 sub_080AF694(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AF77C(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\x01') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_080AFD68(param_1);
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885fc94 + (uint)*(byte *)(param_1 + 0xd) * 4));
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar2 = *(int *)(param_1 + 0x2c);
          *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
        }
        if (*(char *)(param_1 + 0x13) != '\0') {
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
        }
      }
      else {
        sub_080AFE44(param_1);
      }
    }
    else {
      sub_080AFE70(param_1);
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      pcVar3 = (char *)(param_1 + 0xc0);
      if (*pcVar3 == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        cVar1 = *(char *)(param_1 + 0xc1) + -1;
        *(char *)(param_1 + 0xc1) = cVar1;
        if (cVar1 == '\0') {
          *pcVar3 = '\x03';
        }
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        cVar1 = *pcVar3;
        *pcVar3 = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          *(undefined *)(param_1 + 0xc1) = 1;
        }
      }
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

