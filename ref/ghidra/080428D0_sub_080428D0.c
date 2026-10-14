// sub_080428D0 at 0x080428D0 (thumb)

undefined8 sub_080428D0(int param_1,uint param_2,uint param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar5 = bVar1 & 1;
  iVar2 = sub_0808582C(param_1,1,uVar5);
  *(int *)(param_1 + 0xb8 + (param_2 + 2) * 4) = iVar2;
  *(undefined4 *)(param_1 + 0xb8 + (param_2 + 6) * 4) = 0;
  iVar3 = *(int *)(param_1 + 0x4c);
  *(int *)(iVar2 + 0x4c) = iVar3;
  iVar4 = param_2 * 8 + (param_3 & 0xff) * 0x20;
  iVar3 = iVar3 + *(int *)(&DAT_082ae6a4 + iVar4);
  *(int *)(iVar2 + 0x4c) = iVar3;
  *(uint *)(iVar2 + 0x4c) = iVar3 - uVar5 * *(int *)(&DAT_082ae6a4 + iVar4) * 2;
  *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(&DAT_082ae6a8 + iVar4);
  *(char *)(iVar2 + 0x12) = param_4;
  if ((bVar1 & 1) != 0) {
    *(char *)(iVar2 + 0x12) = -0x80 - param_4;
  }
  *(undefined *)(iVar2 + 0x13) = 0;
  return CONCAT44(in_lr,iVar2);
}

