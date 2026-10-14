// sub_08075D70 at 0x08075D70 (thumb)

undefined4 sub_08075D70(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      uVar1 = 0xf8;
    }
    else {
      uVar1 = 0x88;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0x13) = 0;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = 0x300;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = 0x280;
    }
    else {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x60) *
          (int)*(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8;
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * *(int *)(param_1 + 0x60) >> 8);
  if (iVar4 < 1) {
    if (*(int *)(param_1 + 0xc4) + 0x3e00 <= iVar5) goto LAB_08075eac;
    sub_08002B10(0x38);
    local_18 = *(undefined4 *)(param_1 + 0xc4);
    local_14 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E2A18(&local_18,1,0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x3e00;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar2 = *(char *)(param_1 + 0x13) * -4 + -8;
  }
  else {
    if (iVar5 <= *(int *)(param_1 + 200) + -0x3e00) goto LAB_08075eac;
    sub_08002B10(0x38);
    local_18 = *(undefined4 *)(param_1 + 200);
    local_14 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080E2A18(&local_18,1,1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 200) + -0x3e00;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar2 = *(char *)(param_1 + 0x13) * '\x04' + -0x78;
  }
  *(char *)(param_1 + 0x12) = cVar2;
LAB_08075eac:
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + -0x10400) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

