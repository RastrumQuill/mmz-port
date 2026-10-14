// sub_08048454 at 0x08048454 (thumb)

undefined4 sub_08048454(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  pcVar2 = (char *)(param_1 + 0xbe);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
        *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      if ((char)(cVar1 + -1) == '\0') {
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    sub_08003338((int)*(short *)(param_1 + 0xde));
    *(short *)(param_1 + 0xde) = -1;
    *pcVar2 = '\0';
  }
  return in_lr;
}

