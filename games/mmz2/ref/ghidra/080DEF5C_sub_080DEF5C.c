// sub_080DEF5C at 0x080DEF5C (thumb)

undefined4 sub_080DEF5C(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = ((param_1 << 0x10) >> 0x18) * 4;
  uVar1 = *(ushort *)((param_1 & 0xff) * 2 + *(int *)(&DAT_0834f314 + iVar2));
  iVar2 = *(int *)(&DAT_0834f364 + iVar2);
  if ((param_1 & 0xff00) == 0x100) {
    sub_080032EC(6);
  }
  DAT_0202f660 = param_2 & 0xffff;
  DAT_0202f670 = iVar2 + (uint)uVar1;
  sub_080DF050(&DAT_0202f658);
  sub_080DF074(&DAT_0202f658);
  if (DAT_0202f65c == '\0') {
    DAT_0202f664 = 2;
  }
  else {
    DAT_0202f664 = 1;
  }
  return in_lr;
}

