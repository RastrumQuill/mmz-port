// sub_080CC554 at 0x080CC554 (thumb)

undefined4 sub_080CC554(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        *(byte *)(param_1 + 0xb4) =
             0x57ff < (*(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x28) + 0x54)) +
                      0x2c00U;
        bVar3 = *(byte *)(param_1 + 10);
        *(byte *)(param_1 + 10) = bVar3 | 1;
        *(undefined *)(param_1 + 0x13) = 0x3c;
        bVar1 = *(byte *)(param_1 + 0xb4);
        if (bVar1 == 0) {
          bVar3 = bVar3 & 0xef | 1;
        }
        else {
          bVar3 = bVar3 | 0x11;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(byte *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
        if (*(char *)(param_1 + 0x12) == '\0') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_08006DE4(param_1 + 0x74,&DAT_0834924c,param_1 + 0x54,0);
          *(int *)(param_1 + 0xa0) = param_1;
          *(undefined4 *)(param_1 + 0x98) = 0;
          sub_080127E4(param_1,0x6916);
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_08006DE4(param_1 + 0x74,&DAT_0834930c,param_1 + 0x54,0);
          *(int *)(param_1 + 0xa0) = param_1;
          *(undefined4 *)(param_1 + 0x98) = 0;
          sub_080127E4(param_1,0x6918);
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080128D4(param_1);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      pcVar4 = (char *)(param_1 + 0x71);
      *(undefined **)(param_1 + 0x30) = &UNK_083493f0 + *pcVar4 * 8;
      *(undefined2 *)(param_1 + 0x26) = 1;
      if (*(char *)(param_1 + 0x12) != '\0') {
        sub_08006E08(param_1 + 0x74,&DAT_0834930c + *pcVar4 * 0x30);
        return in_lr;
      }
      sub_08006E08(param_1 + 0x74,&DAT_0834924c + *pcVar4 * 0x30);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x13) = 0x6e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

