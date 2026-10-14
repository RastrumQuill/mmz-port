// sub_080F386C at 0x080F386C (thumb)

undefined4 sub_080F386C(short param_1,uint param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = sub_080FE4D8(param_1,10);
    sub_080E9604(&DAT_0836f268 + *(ushort *)(&DAT_0836ea14 + ((uint)(iVar1 << 0x10) >> 0xf)),
                 (param_2 & 0xff) - uVar2,param_3);
    param_1 = sub_080FE460(param_1,10);
    if (param_1 == 0) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  return in_lr;
}

