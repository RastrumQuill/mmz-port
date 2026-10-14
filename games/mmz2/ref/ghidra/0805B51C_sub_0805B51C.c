// sub_0805B51C at 0x0805B51C (thumb)

undefined4 sub_0805B51C(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa907);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      local_14 = *(int *)(param_1 + 0x54) + -0xb00;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      local_14 = *(int *)(param_1 + 0x54) + 0xb00;
    }
    local_10 = *(int *)(param_1 + 0x58) + 0x500;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(undefined *)(param_1 + 0x12) = 0xc;
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    cVar3 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar3 + -1;
    iVar2 = DAT_0202e130;
    if (cVar3 == '\x01') {
      *(bool *)(param_1 + 0x4c) = iVar5 < *(int *)(DAT_0202e130 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar4 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar4 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar4;
      *(undefined *)(param_1 + 0xd) = 8;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

