// sub_0802DD3C at 0x0802DD3C (thumb)

undefined8 sub_0802DD3C(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  uint local_24;
  
  local_24 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x188 + uVar5);
      uVar4 = (uint)(ushort)(&DAT_02000c86)[uVar1 * 0xc];
      if ((uVar4 & 0xf) == 0xf) {
        if (((&DAT_02000c86)[uVar1 * 0xc] & 0x8000) != 0) {
          uVar4 = 0x8001;
          goto LAB_0802dd9c;
        }
      }
      else {
LAB_0802dd9c:
        if ((param_2 - (&DAT_02000c8c)[uVar1 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar1 * 0xc] <
            (uint)(ushort)(&DAT_02000c88)[uVar1 * 0xc] << 1) {
          puVar3 = &DAT_02000c8a + uVar1 * 0xc;
          if ((param_3 - (&DAT_02000c90)[uVar1 * 6]) + (uint)*puVar3 < (uint)*puVar3 << 1) {
            sub_0802E624(param_1,uVar1);
            iVar2 = (&DAT_02000c90)[uVar1 * 6];
            if (iVar2 < param_3) {
              if (param_3 < *(int *)(param_1 + 0x58)) {
                param_4[1] = (iVar2 + (uint)*puVar3) - param_3;
              }
              else {
                param_4[1] = ((iVar2 - (uint)*puVar3) - param_3) + -1;
              }
            }
            else {
              param_4[1] = ((iVar2 - (uint)*puVar3) - param_3) + -1;
            }
            iVar2 = param_4[1];
            if (iVar2 != 0) {
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
              param_3 = param_3 + iVar2;
              *(undefined *)(param_1 + 0x1bb) = 1;
              local_24 = uVar4;
            }
          }
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_24);
}

