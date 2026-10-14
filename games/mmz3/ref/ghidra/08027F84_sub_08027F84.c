// sub_08027F84 at 0x08027F84 (thumb)

undefined8 sub_08027F84(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_24;
  
  local_24 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x15c + uVar4);
      puVar2 = &DAT_02002658 + uVar3 * 0xc;
      if (((param_2 - (&DAT_0200265c)[uVar3 * 6]) + (uint)*puVar2 < (uint)*puVar2 << 1) &&
         ((param_3 - (&DAT_02002660)[uVar3 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] <
          (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] << 1)) {
        sub_080287B4(param_1,(&DAT_02002654)[uVar3 * 0xc]);
        iVar1 = (&DAT_0200265c)[uVar3 * 6];
        if (iVar1 < *(int *)(param_1 + 0x54)) {
          *param_4 = (iVar1 + (uint)*puVar2) - param_2;
        }
        else {
          *param_4 = ((iVar1 - (uint)*puVar2) - param_2) + -1;
        }
        iVar1 = *param_4;
        if (iVar1 != 0) {
          local_24 = (uint)(ushort)(&DAT_02002656)[uVar3 * 0xc];
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
          param_2 = param_2 + iVar1;
          *(undefined *)(param_1 + 399) = 1;
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < *(byte *)(param_1 + 0x18c));
  }
  return CONCAT44(in_lr,local_24);
}

