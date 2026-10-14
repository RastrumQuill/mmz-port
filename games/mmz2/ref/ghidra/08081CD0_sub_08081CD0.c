// sub_08081CD0 at 0x08081CD0 (thumb)

undefined4 sub_08081CD0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081F98(param_1,0x10);
    sub_080127E4(param_1,0x6604);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),0xc);
  if (cVar2 == '\0') {
    sub_080032EC(0x36);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar1 = DAT_0202e130;
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb5) = 0;
  }
  else {
    if (DAT_0202e130 != 0) {
      *(int *)(DAT_0202e130 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68);
      *(int *)(iVar1 + 0x58) = iVar3 + -0xd00;
      if (*(char *)(param_1 + 0x71) == '\x01') {
        *(int *)(iVar1 + 0x58) = iVar3 + -0xf00;
      }
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

