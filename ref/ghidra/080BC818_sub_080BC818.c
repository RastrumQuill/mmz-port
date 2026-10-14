// sub_080BC818 at 0x080BC818 (thumb)

undefined4 sub_080BC818(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = ((param_1 << 0x10) >> 0x18) * 4;
  iVar3 = *(int *)(&DAT_082bb220 + iVar2);
  uVar1 = *(ushort *)((param_1 & 0xff) * 2 + *(int *)(&DAT_082bb1d4 + iVar2));
  if (((param_1 & 0xff00) != 0x100) || (sub_08001EAC(0x77), DAT_0202365a == 0)) {
    DAT_02023660 = param_2 & 0xffff;
    DAT_02023670 = (uint)uVar1 + iVar3;
    sub_080BC910(&DAT_02023658);
    sub_080BC934(&DAT_02023658);
    if (DAT_0202365c == '\0') {
      DAT_02023664 = 2;
    }
    else {
      DAT_02023664 = 1;
    }
  }
  return in_lr;
}

