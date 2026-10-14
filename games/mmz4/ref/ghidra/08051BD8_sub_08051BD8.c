// sub_08051BD8 at 0x08051BD8 (thumb)

undefined4 sub_08051BD8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa108);
    sub_08002B10(0xe9);
    *(undefined *)(param_1 + 0xd7) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\t' < *(char *)(param_1 + 0x71)) {
      sub_08002B10(0xeb);
      sub_08005784(param_1 + 0x74,&DAT_08854a68);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      local_1c = *(int *)(param_1 + 0x54);
      local_18 = sub_08008534(local_1c,*(undefined4 *)(param_1 + 0x58));
      uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar4 = uVar1 & 0x7fffffff;
      local_1c = local_1c + 0x1000 + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
      if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        sub_080D4898(&local_1c,&DAT_08854c28,0,(uVar1 * 2 >> 0x11 & 1) << 4);
      }
      else {
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        sub_080D4898(&local_1c,&DAT_08854c44,0,(uVar1 * 2 >> 0x11 & 1) << 4);
      }
    }
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = 0x100;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = -0x100;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2c0;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(int *)(param_1 + 0xb8) + 0x5600 < *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

