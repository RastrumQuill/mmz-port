// sub_0804FE60 at 0x0804FE60 (thumb)

undefined4 sub_0804FE60(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 200);
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sub_080127E4(param_1,42000);
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      bVar2 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar2;
      if ((byte)(&DAT_0833c12c)[*(byte *)(param_1 + 0x13)] <= bVar2) {
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
      }
      sub_08006E08(param_1 + 0x74,
                   &DAT_0833b87c + (uint)(byte)(&DAT_0833c120)[*(byte *)(param_1 + 0x13)] * 0x30);
      sub_0809F624(uVar4,(&DAT_0833c126)[*(byte *)(param_1 + 0x13)]);
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      cVar1 = '\0';
      goto LAB_0804ff58;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    iVar3 = (int)*(short *)(param_1 + 0xd0);
    if (iVar3 != -1) {
      sub_08003338(iVar3);
      *(short *)(param_1 + 0xd0) = -1;
    }
    sub_0809F624(uVar4,6);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,41999);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xcd) = 0;
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804ff58:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

