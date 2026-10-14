// sub_080F85FC at 0x080F85FC (thumb)

undefined4 sub_080F85FC(undefined2 param_1,uint param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    iVar1 = sub_080FE4D8(param_1,10);
    sub_080E9604(&DAT_0836f268 + *(ushort *)(&DAT_0836ea14 + ((uint)(iVar1 << 0x10) >> 0xf)),
                 (param_2 & 0xff) - uVar2,param_3);
    param_1 = sub_080FE460(param_1,10);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 3);
  return in_lr;
}

