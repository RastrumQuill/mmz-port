// sub_0808D458 at 0x0808D458 (thumb)

undefined4 sub_0808D458(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_0808d518;
  }
  pbVar4 = (byte *)(param_1 + 0xb9);
  sub_08007390(param_1 + 0x74,&DAT_08365960 + (uint)(byte)(&DAT_08365ad4)[*pbVar4] * 0x18);
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x02')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  if (*pbVar4 == 0) {
    if (*(byte *)(param_1 + 0x10) < 2) {
      uVar3 = 0x7402;
      goto LAB_0808d4f8;
    }
    sub_08017700(param_1,0x7401);
  }
  else {
    uVar3 = *(undefined2 *)(&DAT_08365ac8 + (uint)*pbVar4 * 2);
LAB_0808d4f8:
    sub_08017700(param_1,uVar3);
  }
  sub_080177F4(param_1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808d518:
  iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
  if ((iVar2 != 0) ||
     (iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400),
     iVar2 != 0)) {
    cVar1 = sub_0808CD20(param_1);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
  }
  cVar1 = sub_0808CE28(param_1,1);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = *(char *)(param_1 + 0xba);
  if (cVar1 == '\0') {
    if ((((*(char *)(param_1 + 0xb9) == '\0') && (*(byte *)(param_1 + 0x10) < 2)) &&
        ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4800U < 0x9000)) &&
       ((*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U < 0x4000)) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0xba) = cVar1 + -1;
  }
  return in_lr;
}

