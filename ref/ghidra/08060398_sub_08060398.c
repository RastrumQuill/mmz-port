// sub_08060398 at 0x08060398 (thumb)

undefined4 sub_08060398(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b0534)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    uVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  if (*(byte *)(param_1 + 0x10) < 2) {
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x22;
      *(undefined4 *)(iVar3 + 0x14) = 0x8060399;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022ee4;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f52;
      iVar4 = *(int *)(param_1 + 0x4c) + 0x1000;
      *(int *)(iVar3 + 0x4c) = iVar4;
      *(uint *)(iVar3 + 0x4c) = iVar4 + (uint)*(byte *)(param_1 + 0x10) * -0x2000;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar3 + 0x10) = 2;
      *(int *)(iVar3 + 0x20) = param_1;
      sub_08048A54(iVar3);
      *(byte *)(iVar3 + 0x41) = *(byte *)(iVar3 + 0x41) | 0xc;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b04c8,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8060789;
    *(undefined4 *)(param_1 + 0x20) = 0;
    sub_080489E4(param_1);
    *(undefined *)(param_1 + 0x13) = 0xf;
    *(undefined *)(param_1 + 0xc4) = 0;
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  iVar3 = *(int *)(DAT_0202286c + 0x50);
  iVar4 = iVar3 - *(int *)(param_1 + 0x50);
  *(bool *)(param_1 + 0x45) = 0 < iVar4;
  if (iVar3 == *(int *)(param_1 + 0x50) || iVar4 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b0537)[*(byte *)(param_1 + 0x10)]);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_08060AA4(param_1);
  }
  sub_08060524(param_1);
  return in_lr;
}

