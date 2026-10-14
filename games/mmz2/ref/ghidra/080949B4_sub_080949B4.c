// sub_080949B4 at 0x080949B4 (thumb)

undefined4 sub_080949B4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080127E4(param_1,0x9803);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08094a9c;
  iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar5 < 0) goto LAB_08094a4c;
  }
  else if (-1 < iVar5) {
LAB_08094a4c:
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x7000 < iVar5) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  if ((uVar4 * 2 >> 0x11 & 0xf) < 10) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08094a9c:
  sub_08094370(param_1,0,0x100);
  return in_lr;
}

