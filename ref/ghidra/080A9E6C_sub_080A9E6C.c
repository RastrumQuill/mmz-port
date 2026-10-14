// sub_080A9E6C at 0x080A9E6C (thumb)

undefined4 sub_080A9E6C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((byte)(*(char *)(param_1 + 0x10) - 0xcU) < 2) &&
      ((*(uint *)(DAT_02022b20 + 0x18) & 0x100) != 0)) ||
     ((*(byte *)(param_1 + 0x10) < 0xc &&
      (((*(uint *)(DAT_02022b20 + 0x10) & 0x800) == 0 ||
       ((*(uint *)(DAT_02022b20 + 0x18) & 0x800) != 0)))))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    if (*(char *)(param_1 + 0x10) == '\v') {
      sub_0809C930(param_1,(uint)*(byte *)(param_1 + 0x11) << 2);
    }
    else {
      sub_0809C930(param_1,*(byte *)(param_1 + 0x11) + 8);
    }
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x10) != '\v') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b64b8,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    iVar3 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar3;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080A9D18(param_1);
  }
  return in_lr;
}

