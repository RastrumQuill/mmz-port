// sub_08049588 at 0x08049588 (thumb)

undefined4 sub_08049588(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        if (*(char *)(param_1 + 0x12) != '\0') {
          *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
          uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
          if (uVar4 == 0) {
            bVar3 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar3 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar3;
        }
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        cVar2 = (&DAT_0835f66e)[uVar4 * 2 >> 0x11 & 0xf];
        *(char *)(param_1 + 0xbc) = cVar2;
        if (cVar2 == '\0') {
          sub_08007390(param_1 + 0x74,&DAT_0835f04c);
          sub_08017700(param_1,0xa708);
        }
        else {
          sub_08007390(param_1 + 0x74,&DAT_0835f07c);
          sub_08017700(param_1,0xa709);
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_0800471C(0x5c);
      if (*(char *)(param_1 + 0xbc) == '\0') {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 1) == 0) {
          *(undefined *)(param_1 + 0xd) = 9;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 6;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 3;
      }
      cVar2 = '\0';
      goto LAB_0804972a;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    bVar1 = *(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (bVar1) goto LAB_080495ce;
    }
    else if (!bVar1) {
LAB_080495ce:
      cVar2 = '\x02';
      goto LAB_0804972a;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f004);
    *(undefined *)(param_1 + 0x12) = 1;
    sub_08017700(param_1,0xa707);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804972a:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

