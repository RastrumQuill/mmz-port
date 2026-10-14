// sub_0807FB44 at 0x0807FB44 (thumb)

undefined4 sub_0807FB44(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      pcVar3 = (char *)(param_1 + 0xb9);
      cVar1 = *pcVar3;
      *pcVar3 = cVar1 + -1;
      if ((char)(cVar1 + -1) == -1) {
        *(undefined *)(param_1 + 0x11) = 1;
        *pcVar3 = '<';
      }
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar2 = sub_0807F824(param_1);
      if (iVar2 == 0) {
        piVar4 = (int *)(param_1 + 0xbc);
        if (*piVar4 == 0) {
          *(undefined *)(param_1 + 0xc1) = 0;
          sub_08128884(param_1,*(undefined4 *)(&DAT_0885a7f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_08128884(param_1,*(undefined4 *)(&DAT_0885a808 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
            iVar2 = sub_0802AD94(0,param_1,&DAT_0885a854);
            *piVar4 = iVar2;
            if (iVar2 != 0) {
              sub_08005784(param_1 + 0x74,&DAT_0885a83c);
              *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
          }
        }
        else {
          iVar2 = sub_0802B3CC();
          if (iVar2 != 0) {
            sub_08005784(param_1 + 0x74,&DAT_0885a824);
            *piVar4 = 0;
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
          }
        }
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
      }
    }
    else {
      iVar2 = sub_0807F824(param_1);
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x03') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807FC5C(param_1);
  }
  return in_lr;
}

