// sub_0806CF30 at 0x0806CF30 (thumb)

undefined4 sub_0806CF30(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined auStack_28 [4];
  char acStack_24 [4];
  
  sub_080C8D70(auStack_28,&DAT_080c9310,3);
  sub_080C8D70(acStack_24,&DAT_080c9313,3);
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,auStack_28[*(byte *)(param_1 + 0x10) & 0xf]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar2 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar2 & 0xf;
  if ((bVar2 & 0xf) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b0f2c,param_1 + 0x4c,8);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  cVar1 = acStack_24[*(byte *)(param_1 + 0x10)];
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) + ' ';
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0806CE88(param_1);
  return in_lr;
}

