// sub_0806160C at 0x0806160C (thumb)

undefined4 sub_0806160C(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833d4b8);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    uVar4 = (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0xc0)) + 0xd800;
    pbVar6 = (byte *)(param_1 + 0xbe);
    bVar1 = *pbVar6;
    *pbVar6 = bVar1 + 1;
    if (((byte)(bVar1 + 1) < 5) && ((uVar4 < 0x1b001 || (*(char *)(param_1 + 0xbf) != '\x01')))) {
      do {
        if (uVar4 < 0x1b001) {
          uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar5 & 0x7fffffff;
          cVar2 = sub_080EF330(uVar5 * 2 >> 0x11,6);
          cVar2 = cVar2 + '\x02';
        }
        else {
          uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar5 & 0x7fffffff;
          cVar2 = (&DAT_0833d519)[uVar5 * 2 >> 0x11 & 3];
        }
        cVar3 = sub_08061084(param_1,cVar2);
      } while (cVar3 != '\0');
      *(char *)(param_1 + 0xd) = cVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *pbVar6 = 0;
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080613CC(param_1);
  return in_lr;
}

