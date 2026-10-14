// sub_08059C50 at 0x08059C50 (thumb)

undefined4 sub_08059C50(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082afec9)[*(byte *)(param_1 + 0x10)];
  if ((*(byte *)(param_1 + 0x10) - 2 & 0xff) < 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 | 2;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      *(byte *)(param_1 + 10) = bVar2 | 6;
      puVar5 = &DAT_082afe10;
    }
    else {
      *(byte *)(param_1 + 10) = bVar2 | 6;
      puVar5 = &DAT_082afe2c;
    }
    sub_080055FC(param_1 + 0x74,puVar5,param_1 + 0x4c,0xc);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0x805a0d1;
  }
  else {
    iVar3 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar3 < -0x4000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080489E4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_080055FC(param_1 + 0x74,&DAT_082afd68,param_1 + 0x4c,0xc);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x805a0d1;
    *(undefined *)(param_1 + 0xc0) = 0;
    iVar4 = sub_08008360(*(int *)(param_1 + 0x4c) + -0xa00,*(undefined4 *)(param_1 + 0x50));
    iVar3 = sub_08008360(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    sub_080033F0(param_1 + 0x6c,1);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  sub_08059DE0(param_1);
  return in_lr;
}

