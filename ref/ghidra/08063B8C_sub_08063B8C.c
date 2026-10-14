// sub_08063B8C at 0x08063B8C (thumb)

undefined4 sub_08063B8C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,8);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar2;
  if (*(int *)(param_1 + 0x4c) < iVar2) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b07e4,param_1 + 0x4c,0xe);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x4000;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x4000;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  iVar2 = sub_08079F34(param_1,0);
  *(int *)(param_1 + 0x24) = iVar2;
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)(iVar2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08063CAC(param_1);
  return in_lr;
}

