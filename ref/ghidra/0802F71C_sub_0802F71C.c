// sub_0802F71C at 0x0802F71C (thumb)

undefined4 sub_0802F71C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad128);
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),8);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,0x12);
    *(undefined *)(param_1 + 0x12) = 0x33;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == ' ') {
    *(undefined *)(param_1 + 0xc3) = 6;
    uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_14 = uVar4 * 0x4000 + *(int *)(param_1 + 0x4c) + -0x2000;
    local_10 = *(int *)(param_1 + 0x50) + -0x800;
    sub_08001EAC(0x88);
    sub_0807872C(param_1,&local_14,uVar4);
  }
  else if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

