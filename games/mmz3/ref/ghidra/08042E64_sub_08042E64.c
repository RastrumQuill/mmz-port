// sub_08042E64 at 0x08042E64 (thumb)

undefined4 sub_08042E64(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08042eee;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835e938 + (uint)*(byte *)(param_1 + 0x10) * 0xa8);
    sub_08017700(param_1,0x2b06);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined *)(param_1 + 0x13) = 0x18;
  sub_0800471C(0x2d);
  iVar5 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58);
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  cVar2 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x28);
  sub_08076BD4(iVar5 + -0x2600,iVar4 + -0x4800,cVar2 + 'l',*(undefined *)(param_1 + 0x22));
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08042eee:
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

