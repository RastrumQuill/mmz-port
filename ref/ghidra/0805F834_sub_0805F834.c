// sub_0805F834 at 0x0805F834 (thumb)

undefined4 sub_0805F834(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b04a4)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),0);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x21;
      *(undefined4 *)(iVar3 + 0x14) = 0x805f835;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022ee2;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f51;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x50) + 0x1000;
      *(undefined *)(iVar3 + 0x10) = 1;
      *(int *)(iVar3 + 0x20) = param_1;
      sub_08048A54(iVar3);
      *(byte *)(iVar3 + 0x41) = *(byte *)(iVar3 + 0x41) | 0xc;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0438,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x805fc09;
    *(undefined4 *)(param_1 + 0x20) = 0;
    sub_080489E4(param_1);
    *(undefined *)(param_1 + 0x13) = 0xf;
    *(undefined *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  iVar3 = *(int *)(DAT_0202286c + 0x4c);
  iVar4 = iVar3 - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar4;
  if (iVar3 == *(int *)(param_1 + 0x4c) || iVar4 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b04a6)[*(byte *)(param_1 + 0x10)]);
  if (*(char *)(param_1 + 0x10) != '\0') {
    sub_0805FF2C(param_1);
  }
  sub_0805F9A8(param_1);
  return in_lr;
}

