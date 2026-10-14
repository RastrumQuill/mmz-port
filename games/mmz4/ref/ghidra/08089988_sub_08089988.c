// sub_08089988 at 0x08089988 (thumb)

undefined4 sub_08089988(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x1f08);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(undefined4 *)(param_1 + 0x58);
    sub_080D85EC(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,*(undefined *)(param_1 + 0xc0));
    sub_0802AB70(3,0x17,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(int *)(param_1 + 0x58);
    sub_080D0894(2,&local_34);
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 3;
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = &local_24;
    sub_080D8678(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0b,uVar5,0);
    sub_080D8678(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0c,uVar5,0);
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080D0894(2,&local_34);
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 3;
    local_2c = *(undefined4 *)(param_1 + 0x54);
    local_28 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = &local_2c;
    sub_080D8678(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0b,uVar5,0);
    sub_080D8678(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0c,uVar5,0);
    bVar1 = *(byte *)(param_1 + 10);
  }
  sub_080D8678(puVar4,bVar1 >> 4 & 1,0x1f0d,uVar5,0);
  sub_08002B10(0x2a);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

