// sub_080433F4 at 0x080433F4 (thumb)

undefined4 sub_080433F4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x2b06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),10);
    if (cVar2 == '\0') {
      sub_0800471C(0x43);
      iVar3 = (uint)*(byte *)(param_1 + 0x13) * 4;
      sub_0807AE44(*(int *)(param_1 + 0x54) + 0x2c00,*(int *)(param_1 + 0x58) + -0x4600,
                   (int)*(short *)(&DAT_0835ea62 + iVar3),(int)*(short *)(&DAT_0835ea64 + iVar3));
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080177F4(param_1);
  }
  return in_lr;
}

