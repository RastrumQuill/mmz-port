// sub_08122268 at 0x08122268 (thumb)

undefined4 sub_08122268(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  bVar1 = *(byte *)(param_1 + 0xd + param_2);
  if (bVar1 == 1) {
    sub_08122338(param_2,*(undefined *)(param_1 + 0x28 + param_2 * 4),
                 *(undefined4 *)(param_1 + 0x14 + param_2 * 4),
                 *(undefined *)(param_1 + 0x3c + param_2),*(undefined *)(param_1 + 0x41 + param_2),
                 (param_3 << 0x19) >> 0x18);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = param_3 * 2 + 4;
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[param_2 + 0x1f],5,iVar2);
      sub_0810D214(&DAT_0886a17e,8,iVar2);
    }
  }
  else if (bVar1 == 2) {
    iVar2 = param_3 * 2 + 4;
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[param_2 + 0x1f],5,iVar2);
    sub_0810D214(&DAT_0886de9f,8,iVar2);
  }
  return in_lr;
}

