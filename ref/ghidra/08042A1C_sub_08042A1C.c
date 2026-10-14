// sub_08042A1C at 0x08042A1C (thumb)

undefined8 sub_08042A1C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + ((uint)(param_2 << 0x18) >> 0x16) + 0xc0);
  uVar5 = (uint)*(byte *)(iVar3 + 0x12) + (uint)*(byte *)(iVar3 + 0x13) & 0xff;
  iVar1 = sub_0804246C(param_1);
  iVar1 = (int)(short)(&DAT_080c8e24)[uVar5 + 0x40] *
          *(int *)(&DAT_082ae7d4 + ((uint)(iVar1 << 0x18) >> 0x16));
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = *(int *)(iVar3 + 0x4c) + (iVar1 >> 8);
  *(int *)(iVar3 + 0x4c) = iVar2;
  if (iVar1 >> 8 < 1) {
    iVar1 = sub_08008120(iVar2,*(undefined4 *)(iVar3 + 0x50));
    if (0 < iVar1) goto LAB_08042a8c;
  }
  else {
    iVar1 = sub_08007EE0(iVar2,*(undefined4 *)(iVar3 + 0x50));
    if (iVar1 < 0) {
LAB_08042a8c:
      *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + iVar1;
      uVar4 = 1;
    }
  }
  iVar1 = sub_0804246C(param_1);
  iVar1 = (int)(short)(&DAT_080c8e24)[uVar5] *
          *(int *)(&DAT_082ae7d4 + ((uint)(iVar1 << 0x18) >> 0x16));
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = *(int *)(iVar3 + 0x50) + (iVar1 >> 8);
  *(int *)(iVar3 + 0x50) = iVar2;
  if (iVar1 >> 8 < 1) {
    iVar1 = sub_08007CF8(*(undefined4 *)(iVar3 + 0x4c),iVar2);
    if (iVar1 < 1) goto LAB_08042af2;
  }
  else {
    iVar1 = sub_08007B30(*(undefined4 *)(iVar3 + 0x4c),iVar2);
    if (-1 < iVar1) goto LAB_08042af2;
  }
  *(int *)(iVar3 + 0x50) = *(int *)(iVar3 + 0x50) + iVar1;
  uVar4 = 1;
LAB_08042af2:
  return CONCAT44(in_lr,uVar4);
}

