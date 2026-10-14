// sub_0808B400 at 0x0808B400 (thumb)

undefined4 sub_0808B400(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,iVar4);
  sub_080033F0(param_1 + 0x6c,6);
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0xb00;
  iVar3 = *(int *)(iVar4 + 0x54) * 100;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  uVar2 = 0;
  if ((*(char *)(iVar4 + 0xe) == '\x01') || (*(char *)(iVar4 + 0xe) == '\x03')) {
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808B390(param_1);
  return in_lr;
}

