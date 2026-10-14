// sub_0806C2B0 at 0x0806C2B0 (thumb)

undefined4 sub_0806C2B0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa03);
    sub_08002B10(0xc6);
    sub_08001D30(&DAT_08c449c4,(DAT_0202e13a - 0x336) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c449d0,(DAT_0202df3a - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08858ca0);
    if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xc4)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xcc) - (*(int *)(param_1 + 0x54) + 0x2000);
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 200) - (*(int *)(param_1 + 0x54) + -0x2000);
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    uVar2 = FUN_081288bc(*(int *)(param_1 + 0x5c) >> 1,0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
  }
  else if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa04);
    sub_0801CFF0(param_1);
  }
  else {
    if (cVar1 != '\x02') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x17;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar3 <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa05);
    sub_08002B10(0xd3);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

