// sub_08051D78 at 0x08051D78 (thumb)

undefined4 sub_08051D78(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if ((DAT_020301b2 & 1) == 0) {
        *(byte *)(param_1 + 0xd) = DAT_020301b2 & 1;
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0x12) = 0x46;
      }
      sub_08051394(param_1);
      sub_080041E4(*(undefined *)(param_1 + 0xb8));
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    sub_08017700(param_1,0x4d01);
    pcVar3 = (char *)(param_1 + 0xb8);
    if (*pcVar3 != '\0') {
      sub_08004230();
      *pcVar3 = '\0';
    }
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x54,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar3 = 'T';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08051394(param_1);
  sub_080041E4(*(undefined *)(param_1 + 0xb8));
  sub_080177F4(param_1);
  return in_lr;
}

