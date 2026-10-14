// sub_0806BD48 at 0x0806BD48 (thumb)

undefined4 sub_0806BD48(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa0d);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0xd9) = 0;
    *(undefined *)(param_1 + 0xda) = 0;
    *(undefined *)(param_1 + 0x12) = 6;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa1d);
    sub_0801CFF0(param_1);
    sub_08002B10(0xca);
    sub_08005784(param_1 + 0x74,&DAT_08858ca0);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa80;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = *(int *)(param_1 + 0x54);
        iVar4 = 0x1700;
      }
      else {
        local_14 = *(int *)(param_1 + 0x54);
        iVar4 = -0x1700;
      }
      local_14 = local_14 + iVar4;
      local_10 = *(int *)(param_1 + 0x58) + -0x200;
      sub_080DFA88(&local_14,0,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar4 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar4;
    if (*(char *)(param_1 + 0xf) == '\x01') {
      if (*(int *)(param_1 + 0xb8) + -0x1000 <= iVar5) {
        return in_lr;
      }
      uVar3 = 0;
      uVar6 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf) != '\x02') {
        if (iVar4 < 1) {
          return in_lr;
        }
        if (*(int *)(param_1 + 0xd0) < iVar5) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd0);
          *(undefined *)(param_1 + 0xd) = 0xf;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
        return in_lr;
      }
      if (*(int *)(param_1 + 0xb8) + -0x3000 <= iVar5) {
        return in_lr;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      uVar6 = 1;
    }
    uVar3 = sub_0809F0A8(param_1,uVar3,0,uVar6);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

