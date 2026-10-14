// sub_080010E8 at 0x080010E8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_080010E8(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  FUN_08000718(&DAT_02001230,0x10);
  DAT_0200101c = &DAT_02001230;
  DAT_02001014 = 0;
  _DAT_02001230 = 0x61;
  DAT_02001232 = (short)param_1;
  DAT_02001234 = (short)(param_1 >> 0x10);
  iVar2 = 4;
  do {
    DAT_02001014 = DAT_02001014 + (param_1 & 0xff);
    param_1 = param_1 >> 8;
    iVar3 = iVar2 + -1;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  DAT_02000ff0 = 0xe;
  DAT_02000ff4 = 0xe;
  return;
}

