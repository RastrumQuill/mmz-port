// sub_0802F010 at 0x0802F010 (thumb)

undefined4 sub_0802F010(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),2);
    sub_0800561C(param_1 + 0x74,&DAT_082ad198);
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    iVar4 = -0x200;
    if (*(int *)(param_1 + 0xb8) < 0) {
      iVar4 = 0x200;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
    sub_0802E674(param_1);
    if (*(byte *)(param_1 + 0x12) < 8) {
      *(undefined *)(param_1 + 0x12) = 8;
    }
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    uVar2 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x1f);
    if ((uVar2 < 0x18) && (piVar3 = (int *)sub_08029850(param_1), piVar3 != (int *)0x0)) {
      iVar4 = *(int *)(param_1 + 0x4c) - *piVar3;
      if (iVar4 < 0) {
        iVar4 = *piVar3 - *(int *)(param_1 + 0x4c);
      }
      if (iVar4 < 0x2000) {
        *(undefined *)(param_1 + 0x12) = 0x18;
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

