// sub_08010624 at 0x08010624 (thumb)

undefined4 sub_08010624(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = 0;
    do {
      iVar3 = (int)(short)uVar1;
      uVar2 = sub_080CD374(&DAT_08320260 + iVar3 * 8,(&DAT_08320288)[iVar3],0x40);
      *(undefined4 *)(param_1 + 0x68 + iVar3 * 4) = uVar2;
      uVar1 = iVar3 + 1U & 0xffff;
    } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

