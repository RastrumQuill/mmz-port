// sub_0803ED40 at 0x0803ED40 (thumb)

undefined4 sub_0803ED40(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xcc);
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sub_08029778(param_1,0x10);
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      bVar2 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar2;
      if ((byte)(&DAT_082ae3b8)[*(byte *)(param_1 + 0x13)] <= bVar2) {
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
      }
      sub_0800561C(param_1 + 0x74,
                   &DAT_082ade34 + (uint)(byte)(&DAT_082ae3ac)[*(byte *)(param_1 + 0x13)] * 0x1c);
      sub_08081C8C(uVar3,(&DAT_082ae3b2)[*(byte *)(param_1 + 0x13)]);
      sub_080297C0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      cVar1 = '\0';
      goto LAB_0803ee0c;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08081C8C(uVar3,6);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,0xf);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803ee0c:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

