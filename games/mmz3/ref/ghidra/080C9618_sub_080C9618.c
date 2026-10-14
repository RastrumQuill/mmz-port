// sub_080C9618 at 0x080C9618 (thumb)

undefined4 sub_080C9618(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = sub_08001B60(0x140);
  if (iVar1 != 0) {
    sub_08001BA4(0,iVar1,0x140);
    DAT_03002ac0 = 0xffff;
    iVar2 = *(int *)(iVar5 + 0x78);
    iVar3 = iVar2 + *(int *)(iVar5 + 0x7c);
    if (iVar3 < (iVar2 + 0x20) - *(int *)(iVar5 + 0x7c)) {
      puVar4 = (ushort *)(iVar3 * 2 + iVar1);
      do {
        *puVar4 = (ushort)(byte)(&DAT_0836c2b0)[iVar3 - iVar2] +
                  (short)*(undefined4 *)(iVar5 + 0x74) & 0xff;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar5 + 0x78);
      } while (iVar3 < (iVar2 + 0x20) - *(int *)(iVar5 + 0x7c));
    }
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar1;
  }
  return in_lr;
}

