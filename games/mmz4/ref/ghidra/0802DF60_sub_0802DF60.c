// sub_0802DF60 at 0x0802DF60 (thumb)

undefined8 sub_0802DF60(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x188 + uVar5);
      if ((((&DAT_02000c86)[uVar3 * 0xc] & 0x800f) != 0xf) &&
         ((param_2 - (&DAT_02000c8c)[uVar3 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar3 * 0xc] <
          (uint)(ushort)(&DAT_02000c88)[uVar3 * 0xc] << 1)) {
        puVar2 = &DAT_02000c8a + uVar3 * 0xc;
        if ((param_3 - (&DAT_02000c90)[uVar3 * 6]) + (uint)*puVar2 < (uint)*puVar2 << 1) {
          sub_0802E624(param_1,uVar3);
          iVar1 = (&DAT_02000c90)[uVar3 * 6];
          if (iVar1 < param_3) {
            iVar1 = (iVar1 + (uint)*puVar2) - param_3;
          }
          else {
            iVar1 = ((iVar1 - (uint)*puVar2) - param_3) + -1;
          }
          if ((iVar4 == 0) || (iVar4 < iVar1)) {
            iVar4 = iVar1;
          }
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,iVar4);
}

