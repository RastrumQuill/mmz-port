// sub_08047B74 at 0x08047B74 (thumb)

undefined4 sub_08047B74(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08047c44;
  sub_080127E4(param_1,0xa501);
  iVar2 = DAT_0202e130;
  iVar4 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 200) + -0x6c00 < iVar4) {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
LAB_08047c28:
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
LAB_08047c2e:
    *(byte *)(param_1 + 10) = bVar3;
  }
  else {
    if (*(int *)(param_1 + 0xc4) + 0x6c00 <= iVar4) {
      *(bool *)(param_1 + 0x4c) = iVar4 < *(int *)(DAT_0202e130 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (!bVar1) goto LAB_08047c28;
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08047c2e;
    }
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if (*(char *)(param_1 + 0xbf) == '\0') {
    *(char *)(param_1 + 0xbf) = '\x03';
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08047c44:
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

