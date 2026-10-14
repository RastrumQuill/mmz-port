// sub_0804BD70 at 0x0804BD70 (thumb)

undefined4 sub_0804BD70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5d01);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885415c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x804bef1;
  iVar3 = sub_0803A4B4(uVar2);
  uVar4 = iVar3 + 4U & 0xff;
  cVar1 = sub_08038A84(uVar2);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_0885415c,uVar4,0xffffffff,0xffffffff,0xffffffff);
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)
                      ) << 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] << 2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  sub_0804BE78(param_1);
  return in_lr;
}

