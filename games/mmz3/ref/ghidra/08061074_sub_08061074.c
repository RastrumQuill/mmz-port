// sub_08061074 at 0x08061074 (thumb)

undefined4 sub_08061074(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08361db4);
    if (*(char *)(param_1 + 0xf) == -1) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0x78;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080616C4(param_1);
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 == '\x01') {
      pbVar3 = (byte *)(param_1 + 0xb5);
      if (*pbVar3 == *(byte *)(param_1 + 0xb6)) {
        if (*(short *)(param_1 + 0xa4) < 0x21) {
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar4 & 0x7fffffff;
          iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x10);
          bVar2 = (&DAT_080febc2)[iVar5];
          if ((uint)bVar2 == (int)(char)*pbVar3) {
            bVar2 = sub_08061610(param_1);
          }
        }
        else {
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar4 & 0x7fffffff;
          iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x10);
          bVar2 = (&DAT_080febb1)[iVar5];
          if ((uint)bVar2 == (int)(char)*pbVar3) {
            bVar2 = sub_08061610(param_1);
          }
        }
      }
      else {
        if (*(short *)(param_1 + 0xa4) < 0x21) {
          puVar6 = &DAT_080febc1;
        }
        else {
          puVar6 = &DAT_080febb0;
        }
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,*puVar6);
        bVar2 = puVar6[iVar5 + 1];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(char *)(param_1 + 0xe) = cVar1 + -1;
      *(byte *)(param_1 + 0xb6) = *pbVar3;
      *pbVar3 = bVar2;
    }
  }
  return in_lr;
}

