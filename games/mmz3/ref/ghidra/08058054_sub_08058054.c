// sub_08058054 at 0x08058054 (thumb)

undefined4 sub_08058054(int param_1)

{
  short sVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) + -0x3200;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar5 = *(int *)(param_1 + 0x54) + 0x3200;
    }
    sVar1 = sub_08009A3C(iVar5,*(int *)(param_1 + 0x58) + -0x1000);
    if (sVar1 != 0) {
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = 10;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x80;
    uVar4 = 0xffffff40;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff40;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    sub_08017700(param_1,0xb205);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0x54) + -0x3200;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(param_1 + 0x54) + 0x3200;
  }
  sVar1 = sub_08009A3C(iVar5,*(int *)(param_1 + 0x58) + -0x1000);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080177F4(param_1);
  pcVar2 = (char *)(param_1 + 0x71);
  if (((*pcVar2 != '\x01') && (*pcVar2 != '\x05')) && (sVar1 == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  uVar3 = *(uint *)(param_1 + 0x70) & 0xffff00;
  if ((uVar3 == 0x10000) || (uVar3 == 0x10400)) {
    sub_0800471C(0x8c);
  }
  sub_08007390(param_1 + 0x74,&DAT_08360594 + (uint)(byte)(&DAT_08361279)[*pcVar2] * 0x18);
  if (sVar1 == 0) {
    if ((*(char *)(param_1 + 0x12) == '\0') && (*pcVar2 == '\x02')) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

