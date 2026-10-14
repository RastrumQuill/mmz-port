// sub_0802BFDC at 0x0802BFDC (thumb)

undefined4 sub_0802BFDC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0802c048;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_0800561C(param_1 + 0x74,&DAT_082ace4c);
  sub_080596B8(param_1,5,0x10);
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x10;
  sub_08029778(param_1,3);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0802c048:
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      cVar2 = sub_0802B638(param_1,(&DAT_082acfa4)[uVar4 * 2 >> 0x11 & 1]);
    } while (cVar2 != '\0');
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      uVar3 = 7;
    }
    else {
      uVar3 = (&DAT_082acfa4)[uVar4 * 2 >> 0x11 & 1];
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xffffffef;
  }
  return in_lr;
}

