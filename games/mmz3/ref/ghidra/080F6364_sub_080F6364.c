// sub_080F6364 at 0x080F6364 (thumb)

undefined4 sub_080F6364(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x64ac);
  cVar1 = *(char *)(param_1 + 0xe04);
  bVar2 = *(byte *)(param_1 + 3);
  if ((bVar2 != 0) || (cVar3 = sub_080F3784(param_1), cVar3 == '\0')) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838bb88 + (uint)*(byte *)(param_1 + 3) * 4));
    sub_080041E4(0x51);
    if (*(char *)(param_1 + 0xe08) != '\0') {
      sub_080041E4();
    }
    DAT_02002402 = *(byte *)(param_1 + 0xe07) & 0x1f |
                   (0x10 - (ushort)*(byte *)(param_1 + 0xe07)) * 0x100;
    if (cVar1 != *(char *)(param_1 + 0xe04)) {
      sub_0800393C(&UNK_085475a0 + (uint)*(byte *)(param_1 + 0xe04) * 0x14,
                   (DAT_020023c6 & 0xc) << 0xc);
      sub_08003E14(&UNK_085475ac + (uint)*(byte *)(param_1 + 0xe04) * 0x14,0);
    }
    if (*(byte *)(param_1 + 3) < 2) {
      if (1 < bVar2) {
        sub_0800393C(&DAT_0854758c,(DAT_020023c6 & 0xc) << 0xc);
        sub_08003E14(&DAT_08547598,0);
      }
      if ((*(char *)(param_1 + 0xe03) == '\0') &&
         (uVar5 = (uint)*(byte *)(iVar4 + 0xb4), uVar5 != 0xff)) {
        sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[uVar5 + 100],0x15,1);
      }
      if ((*(char *)(param_1 + 0xe03) == '\x01') &&
         (uVar5 = (uint)*(byte *)(iVar4 + 0xb5), uVar5 != 0xff)) {
        sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[uVar5 + 100],0x15,1);
      }
    }
    else if ((cVar1 != *(char *)(param_1 + 0xe04)) || (bVar2 < 2)) {
      sub_0800393C(&UNK_08547514 + (uint)*(byte *)(param_1 + 0xe04) * 0x14,
                   (DAT_020023c6 & 0xc) << 0xc);
      sub_08003E14(&UNK_08547520 + (uint)*(byte *)(param_1 + 0xe04) * 0x14,0);
    }
    sub_080F703C(param_1);
    sub_080F70A8(param_1);
    sub_080F7458(param_1);
    sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  }
  return in_lr;
}

