// sub_0805FE74 at 0x0805FE74 (thumb)

undefined4 sub_0805FE74(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  bVar2 = cVar1 + 1;
  if (bVar2 < 0x50) {
    if ((bVar3 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805feca;
    }
  }
  else if (bVar2 < 0x70) {
    if ((bVar3 & 2) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805feca;
    }
  }
  else if ((bVar3 & 3) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0805feca;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0805feca:
  *(byte *)(param_1 + 10) = bVar2;
  *(short *)(param_1 + 0x52) = (&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] + 0x100;
  if (*(char *)(param_1 + 0x12) == -0x80) {
    sub_08007390(param_1 + 0x74,&DAT_08361b48,0);
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08060768(param_1,0xf);
    *(undefined4 *)(param_1 + 0xc4) = 8;
    *(undefined2 *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x10;
  }
  return in_lr;
}

