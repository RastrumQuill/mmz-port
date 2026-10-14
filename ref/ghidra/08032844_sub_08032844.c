// sub_08032844 at 0x08032844 (thumb)

undefined4 sub_08032844(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffc80;
    *(undefined4 *)(param_1 + 0x58) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x380;
      *(undefined4 *)(param_1 + 0x58) = 0xffffffe8;
    }
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  cVar2 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (0x15 < bVar1) {
    if (cVar2 == '\x17') {
      sub_0808D634(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
      sub_0800561C(param_1 + 0x74,&DAT_082ad4b0);
    }
    cVar2 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),3);
    if (cVar2 == '\0') {
      sub_0808D6F4(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    iVar5 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = -iVar5;
    }
    if (iVar6 < 0x101) {
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *(int *)(param_1 + 0x54) = iVar5 + *(int *)(param_1 + 0x58);
    }
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
      uVar3 = 0x19;
      goto LAB_08032956;
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xb8) + 0x2000 <= *(int *)(param_1 + 0x4c)) {
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0xb8) + 0x1c000) {
    return in_lr;
  }
  uVar3 = 0x18;
LAB_08032956:
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

