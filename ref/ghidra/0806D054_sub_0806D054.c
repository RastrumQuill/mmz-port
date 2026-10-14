// sub_0806D054 at 0x0806D054 (thumb)

undefined4 sub_0806D054(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined auStack_1f [4];
  char acStack_1b [7];
  
  sub_080C8D70(auStack_1f + 3,&DAT_080c9316,3);
  sub_080C8D70(acStack_1b + 3,&DAT_080c9313,3);
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,auStack_1f[*(byte *)(param_1 + 0x10)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = (acStack_1b + 3)[*(byte *)(param_1 + 0x10) - 3];
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0f48,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    sub_0806CE10(param_1,6,*(undefined *)(param_1 + 0x12));
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0806CE88(param_1);
  return in_lr;
}

