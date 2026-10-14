// sub_08117D68 at 0x08117D68 (thumb)

undefined4 sub_08117D68(short param_1,uint param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = sub_08128A9C(param_1,10);
    sub_0810D214(&DAT_0886a17c + *(ushort *)(&DAT_08869afc + ((uint)(iVar1 << 0x10) >> 0xf)),
                 (param_2 & 0xff) - uVar2,param_3);
    param_1 = sub_08128A24(param_1,10);
    if (param_1 == 0) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  return in_lr;
}

