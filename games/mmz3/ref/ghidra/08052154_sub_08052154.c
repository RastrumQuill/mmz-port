// sub_08052154 at 0x08052154 (thumb)

undefined4 sub_08052154(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      if ((*(uint *)(param_1 + 0xb4) & 0x180) == 0) {
        sub_08017700(param_1,0x4d01);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0x12) = 0x46;
      }
      sub_080041E4(*(undefined *)(param_1 + 0xb8));
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_0800471C(0xe3);
    sub_08007390(param_1 + 0x74,&DAT_0835fea4);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffff9ff | 0x180;
    sub_08017700(param_1,0x4d0e);
    sub_0808085C(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar5 = (uint *)(param_1 + 0xb4);
  if ((*puVar5 & 0x200) != 0) {
    if (*(int *)(param_1 + 0x68) == 0) {
      sub_0800471C(0x10d);
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    iVar3 = sub_080FE390(*(undefined4 *)(param_1 + 0x5c),0x38);
    if (iVar3 == 0) {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      sub_080804E4(*(int *)(param_1 + 0x54) + (uVar4 * 2 >> 0x11 & 3) * 0x3000 + -0x4800);
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    sub_0801ACF8(3,param_1 + 0x54);
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + '\b';
    if ((cVar1 == -8) &&
       (bVar2 = *(char *)(param_1 + 0x13) + 1, *(byte *)(param_1 + 0x13) = bVar2, 6 < bVar2)) {
      sub_08004768(0x10d);
      *puVar5 = *puVar5 | 0x400;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 8;
  }
  sub_080041E4(*(undefined *)(param_1 + 0xb8));
  sub_080177F4(param_1);
  return in_lr;
}

