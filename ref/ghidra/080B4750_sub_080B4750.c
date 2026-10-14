// sub_080B4750 at 0x080B4750 (thumb)

ulonglong sub_080B4750(int param_1,uint param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar6 = 0;
  if ((param_2 - 1 < 0x4e) && (iVar5 = (int)(char)(&DAT_082b6ea4)[param_2 * 0xc], iVar5 != -1)) {
    uVar1 = *(ushort *)(param_1 + 0x1c2 + iVar5 * 2);
    cVar4 = *(char *)(param_1 + 0x1ea + iVar5);
    while ((cVar2 = sub_080B47D8(param_1,param_2), cVar2 == '\0' &&
           (uVar3 = sub_080B4884(param_1,param_2), uVar3 <= uVar1))) {
      cVar4 = cVar4 + '\x01';
      *(char *)(param_1 + 0x1ea + iVar5) = cVar4;
      iVar6 = iVar6 + 1;
    }
  }
  return CONCAT44(in_lr,iVar6) & 0xffffffff000000ff;
}

