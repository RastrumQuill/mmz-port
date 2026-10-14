// sub_080D29F0 at 0x080D29F0 (thumb)

undefined4 sub_080D29F0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(param_1 + 0xc0));
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = -(int)*(short *)(param_1 + 0xbc);
    }
    else {
      iVar5 = (int)*(short *)(param_1 + 0xbc);
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) =
         (char)(*(short *)(param_1 + 0xbc) >> 2) + ((byte)(uVar6 * 2 >> 0x11) & 0x3f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
    if ((sVar4 != 0) ||
       (iVar5 = *(int *)(param_1 + 0x54),
       iVar5 < (int)(*(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xb8) * -0x100))) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
      return in_lr;
    }
  }
  else {
    sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
    if ((sVar4 != 0) ||
       (iVar5 = *(int *)(param_1 + 0x54),
       (int)(*(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xb8) * 0x100) < iVar5)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar6 & 0x7fffffff;
    if ((uVar6 * 2 >> 0x11 & 1) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = iVar5 + *(int *)(param_1 + 0x5c);
  }
  return in_lr;
}

