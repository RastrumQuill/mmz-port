// sub_08053874 at 0x08053874 (thumb)

undefined4 sub_08053874(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar5 = bVar1 & 1;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa614);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined2 *)(param_1 + 0xd2) = 0x7800;
    pcVar4 = (char *)(param_1 + 0xb4);
    if (*pcVar4 == '\x1a') {
      *pcVar4 = '\x1b';
      if (*(char *)(param_1 + 0xc1) == '\0') {
        sub_080573FC(param_1);
        return in_lr;
      }
      uVar3 = 0x14;
    }
    else {
      *pcVar4 = '\x1b';
      uVar3 = 0x13;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

