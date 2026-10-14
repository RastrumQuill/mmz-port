// sub_080FE500 at 0x080FE500 (thumb)

undefined4 sub_080FE500(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa800);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    iVar4 = param_1 + 0x54;
    sub_080D4898(iVar4,&DAT_08867e64,0,bVar1 & 0x10);
    sub_080D4898(iVar4,&DAT_08867e80,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar4,&DAT_08867e9c,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar4,&DAT_08867eb8,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar4,&DAT_08867ed4,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar4,&DAT_08867ef0,0,*(byte *)(param_1 + 10) & 0x10);
    *(undefined *)(param_1 + 0x12) = 0;
    local_20 = *(int *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080D0894(1,&local_20);
    sub_08002B10(0x2a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\x04') {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (8 - (uVar3 * 2 >> 0x11 & 0xf)) * 0x100;
    local_1c = *(int *)(param_1 + 0x58);
    iVar4 = -0x1800;
  }
  else {
    if (cVar2 != '\b') {
      if (cVar2 == '\f') {
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        local_20 = *(int *)(param_1 + 0x54) + (8 - (uVar3 * 2 >> 0x11 & 0xf)) * 0x100;
        local_1c = *(int *)(param_1 + 0x58) + -0x3800;
        sub_080D0894(1,&local_20);
        sub_08002B10(0x2a);
      }
      goto LAB_080fe6ca;
    }
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (8 - (uVar3 * 2 >> 0x11 & 0xf)) * 0x100;
    local_1c = *(int *)(param_1 + 0x58);
    iVar4 = -0x800;
  }
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  local_1c = local_1c + iVar4;
  sub_080D0894(1,&local_20);
  sub_08002B10(0x2a);
LAB_080fe6ca:
  if (0xb < *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

