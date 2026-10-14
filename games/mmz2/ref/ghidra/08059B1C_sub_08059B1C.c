// sub_08059B1C at 0x08059B1C (thumb)

undefined4 sub_08059B1C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        bVar2 = *(byte *)(DAT_0202e130 + 10);
        if ((bVar2 & 0x10) == 0) {
          *(int *)(param_1 + 0x54) = *(int *)(DAT_0202e130 + 0x54) + 0x4000;
          *(byte *)(param_1 + 0x4c) = bVar2 & 0x10;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          *(int *)(param_1 + 0x54) = *(int *)(DAT_0202e130 + 0x54) + -0x4000;
          *(undefined *)(param_1 + 0x4c) = 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(int *)(param_1 + 0x58) = *(int *)(DAT_0202e130 + 0x58) + -0x800;
        sub_080127E4(param_1,0xa71d);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x13;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x13) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

