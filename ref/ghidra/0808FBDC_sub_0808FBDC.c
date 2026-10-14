// sub_0808FBDC at 0x0808FBDC (thumb)

undefined4 sub_0808FBDC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  bVar2 = *(byte *)(iVar5 + 10) >> 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,iVar5);
  sub_080033F0(param_1 + 0x6c,7);
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
  iVar4 = *(int *)(iVar5 + 0x54) * 100;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  uVar3 = 0;
  cVar1 = *(char *)(iVar5 + 0xf);
  if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x06')) {
    uVar3 = 1;
  }
  *(undefined *)(param_1 + 0x13) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808FB6C(param_1);
  return in_lr;
}

