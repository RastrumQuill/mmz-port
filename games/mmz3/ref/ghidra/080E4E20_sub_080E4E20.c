// sub_080E4E20 at 0x080E4E20 (thumb)

undefined4 sub_080E4E20(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar3 = *(int *)(param_1 + 0xb8);
  sub_08017700(param_1,0x200);
  pbVar7 = (byte *)(param_1 + 0x4c);
  *pbVar7 = 0;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080177F4(param_1);
  uVar4 = sub_08034794();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&UNK_0836e5e0 + (uVar4 & 0xff) * 0x30,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar6 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  iVar3 = sub_080E1124(param_1 + 0x54);
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 != 0) {
    sub_080E11E0(&local_28);
    iVar2 = sub_080E90EC(local_28 - *(int *)(param_1 + 0x54),local_24 - *(int *)(param_1 + 0x58));
    *(byte *)(param_1 + 0xbc) = (byte)iVar2;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * 6;
    iVar2 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0xbc)] * 6;
    goto LAB_080e4fb4;
  }
  if (*(char *)(iVar2 + 0xd) == '\x02') {
    if (CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)) == 0x500) {
      if (*(char *)(iVar2 + 0x71) < '\x03') goto LAB_080e4f9c;
      *pbVar7 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) goto LAB_080e4f94;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *pbVar7 = (*(byte *)(iVar2 + 10) >> 4 ^ 1) & 1;
      uVar4 = (*(byte *)(iVar2 + 10) >> 4 ^ 1) & 1;
      *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
LAB_080e4f94:
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_080e4f9c:
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    uVar6 = 0xfffffa00;
  }
  else {
    uVar6 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  iVar2 = 0;
LAB_080e4fb4:
  *(int *)(param_1 + 0x60) = iVar2;
  return in_lr;
}

