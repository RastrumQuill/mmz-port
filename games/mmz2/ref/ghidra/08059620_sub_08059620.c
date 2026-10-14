// sub_08059620 at 0x08059620 (thumb)

undefined4 sub_08059620(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        sub_08006E08(param_1 + 0x74,&DAT_0833ca68);
        *(undefined *)(param_1 + 0x12) = 0x1e;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_08057AB0(param_1);
    sub_08006E08(param_1 + 0x74,&DAT_0833c7c8);
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_080127E4(param_1,0xa71a);
    uVar5 = 0x500;
    *(undefined4 *)(param_1 + 0x5c) = 0x500;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0xfffffb00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar6 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x4000 < uVar6) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

