// sub_0808DA78 at 0x0808DA78 (thumb)

undefined4 sub_0808DA78(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((iVar7 != 0) && (1 < *(byte *)(iVar7 + 0xc))) {
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_08365960);
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
        uVar6 = 0xfffffe00;
        if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
          uVar6 = 0x200;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar6;
        uVar3 = sub_080FE124(0x180);
        *(undefined *)(param_1 + 0x12) = uVar3;
        *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x12) * -0x40;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar7 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar7;
      if (0x700 < iVar7) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sVar4 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
      if (sVar4 == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xbc) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x106);
    sub_08007390(param_1 + 0x74,&DAT_08365978);
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(undefined4 *)(param_1 + 0x68) = 0xffffe400;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08017700(param_1,0x7410);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + -0x200 + (uVar5 * 0x40 >> 0x16);
  *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -0x80;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') || (iVar7 == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

