// sub_0804CB14 at 0x0804CB14 (thumb)

undefined4 sub_0804CB14(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0800471C(0x8a);
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x3900;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0804cba6;
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar3 = 0x200;
  }
  *(int *)(param_1 + 0x58) = iVar2 + iVar3;
LAB_0804cba6:
  iVar2 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

