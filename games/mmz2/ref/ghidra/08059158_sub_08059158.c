// sub_08059158 at 0x08059158 (thumb)

undefined4 sub_08059158(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 200);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080591e2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08002638(&DAT_084331b0,(DAT_0202e608 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084331bc,(DAT_0202e408 - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080A0F44(param_1 + 0x54,*(undefined *)(param_1 + 0x12));
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  *(undefined *)(param_1 + 0x13) = 0x1e;
  if (cVar2 == '\x04') {
    *(undefined *)(param_1 + 0x13) = 0x5a;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080591e2:
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (*(char *)(param_1 + 0x12) == '\x04') {
    if (cVar2 == '\x0f') {
      sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
    }
    if (((*(char *)(param_1 + 0x13) == '\x0e') && ((*(uint *)(iVar3 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(iVar3 + 0xa4) != 0)) {
      sub_08022EA8(iVar3,0,0xfffffd00,0xfffffd00,0,0x20,0x5a,0);
    }
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\x04') {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

