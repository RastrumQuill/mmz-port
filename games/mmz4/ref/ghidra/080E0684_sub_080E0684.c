// sub_080E0684 at 0x080E0684 (thumb)

undefined4 sub_080E0684(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (2 < bVar1) {
      bVar1 = 2;
    }
    *(byte *)(param_1 + 0xd) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865410 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_0801CFF0(param_1);
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

