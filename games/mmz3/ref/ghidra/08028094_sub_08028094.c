// sub_08028094 at 0x08028094 (thumb)

undefined8 sub_08028094(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_24;
  
  local_24 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x15c + uVar4);
      if ((param_2 - (&DAT_0200265c)[uVar1 * 6]) + (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] << 1) {
        puVar3 = &DAT_0200265a + uVar1 * 0xc;
        if ((param_3 - (&DAT_02002660)[uVar1 * 6]) + (uint)*puVar3 < (uint)*puVar3 << 1) {
          sub_080287B4(param_1,(&DAT_02002654)[uVar1 * 0xc]);
          iVar2 = (&DAT_02002660)[uVar1 * 6];
          if (iVar2 < param_3) {
            if (param_3 == *(int *)(param_1 + 0x58)) {
              param_4[1] = ((iVar2 - (uint)*puVar3) - param_3) + -1;
            }
            else {
              param_4[1] = (iVar2 + (uint)*puVar3) - param_3;
            }
          }
          else {
            param_4[1] = ((iVar2 - (uint)*puVar3) - param_3) + -1;
          }
          iVar2 = param_4[1];
          if (iVar2 != 0) {
            local_24 = (uint)(ushort)(&DAT_02002656)[uVar1 * 0xc];
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
            param_3 = param_3 + iVar2;
            *(undefined *)(param_1 + 399) = 1;
          }
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < *(byte *)(param_1 + 0x18c));
  }
  return CONCAT44(in_lr,local_24);
}

