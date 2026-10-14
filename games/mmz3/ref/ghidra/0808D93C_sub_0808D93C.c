// sub_0808D93C at 0x0808D93C (thumb)

undefined4 sub_0808D93C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x7403);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_0808d9be;
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xba) = 0x20;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0808d9be;
    }
    if (bVar1 != 0) goto LAB_0808d9be;
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08017700(param_1,0x7402);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_0808CCCC(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_0808d9be:
  iVar3 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
  if (((iVar3 != 0) ||
      (iVar3 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400),
      iVar3 != 0)) && (cVar2 = sub_0808CD20(param_1), cVar2 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar2 = sub_0808CE28(param_1,1);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

