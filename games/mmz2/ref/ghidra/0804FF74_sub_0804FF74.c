// sub_0804FF74 at 0x0804FF74 (thumb)

undefined4 sub_0804FF74(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        sub_0809F624(*(undefined4 *)(param_1 + 200),5);
        sub_08006E08(param_1 + 0x74,&DAT_0833b99c);
        sub_080127E4(param_1,0xa402);
        *(undefined *)(param_1 + 0x12) = 6;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
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
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 == '\0') {
        *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffc;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_0809F624(*(undefined4 *)(param_1 + 200),3);
    sub_08006E08(param_1 + 0x74,&DAT_0833bb7c);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa41c);
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xc4) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
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
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 2;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0xc4) == '\x10') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

