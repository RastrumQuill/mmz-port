// sub_0802DC1C at 0x0802DC1C (thumb)

undefined8 sub_0802DC1C(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_28;
  uint local_24;
  
  local_28 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  local_24 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x188 + local_24);
      uVar3 = (uint)(ushort)(&DAT_02000c86)[uVar4 * 0xc];
      if ((uVar3 & 0xf) == 0xf) {
        if (((&DAT_02000c86)[uVar4 * 0xc] & 0x8000) != 0) {
          uVar3 = 0x8001;
          goto LAB_0802dc7c;
        }
      }
      else {
LAB_0802dc7c:
        puVar2 = &DAT_02000c88 + uVar4 * 0xc;
        if (((param_2 - (&DAT_02000c8c)[uVar4 * 6]) + (uint)*puVar2 < (uint)*puVar2 << 1) &&
           ((param_3 - (&DAT_02000c90)[uVar4 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar4 * 0xc] <
            (uint)(ushort)(&DAT_02000c8a)[uVar4 * 0xc] << 1)) {
          sub_0802E624(param_1,uVar4);
          iVar1 = (&DAT_02000c8c)[uVar4 * 6];
          if (iVar1 < *(int *)(param_1 + 0x54)) {
            *param_4 = (iVar1 + (uint)*puVar2) - param_2;
          }
          else {
            *param_4 = ((iVar1 - (uint)*puVar2) - param_2) + -1;
          }
          iVar1 = *param_4;
          if (iVar1 != 0) {
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
            param_2 = param_2 + iVar1;
            *(undefined *)(param_1 + 0x1bb) = 1;
            local_28 = uVar3;
          }
        }
      }
      local_24 = local_24 + 1 & 0xff;
    } while (local_24 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_28);
}

