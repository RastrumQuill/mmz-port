// sub_0807F198 at 0x0807F198 (thumb)

undefined4 sub_0807F198(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = *(byte *)(param_1 + 0x11) ^ 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
    sub_080127E4(param_1,0x5f08);
    sub_080801DC(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    pbVar5 = (byte *)(param_1 + 0xb4);
    bVar1 = *pbVar5;
    *pbVar5 = bVar1 & 2;
    if ((bVar1 & 2) == 0) {
      if ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6000U < 0xc001) {
        if (*(int *)(param_1 + 0x2c) != 0) {
          pbVar5 = (byte *)(*(int *)(param_1 + 0x2c) + 0xb4);
          *pbVar5 = *pbVar5 | 2;
        }
        uVar3 = 1;
      }
      else if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x02') {
        uVar3 = 1;
      }
      else {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 3) == 0) {
          uVar4 = *(byte *)(param_1 + 0x11) ^ 1;
          if (uVar4 == 0) {
            bVar1 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar1 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar1;
          *(char *)(param_1 + 0x4c) = (char)uVar4;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
          *(undefined *)(param_1 + 0x12) = 0x18;
          return in_lr;
        }
        uVar3 = 8;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *pbVar5 = 0;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

