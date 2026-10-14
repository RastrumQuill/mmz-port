// sub_080B4E58 at 0x080B4E58 (thumb)

undefined4 sub_080B4E58(int param_1,uint param_2)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 - 1 < 0x4e) {
    if (DAT_02022b35 < 99) {
      DAT_02022b35 = DAT_02022b35 + 1;
    }
    uVar1 = sub_080B4660(param_2);
    cVar2 = sub_080B46A0(param_1,uVar1,param_2);
    if ((&DAT_082b6ea5)[param_2 * 0xc] == '\0') {
      *(char *)(param_1 + 0x200) = *(char *)(param_1 + 0x200) + (&DAT_082b8164)[cVar2];
    }
    else {
      DAT_02022b30 = DAT_02022b30 + (uint)(byte)(&DAT_082b8164)[cVar2];
    }
  }
  return in_lr;
}

