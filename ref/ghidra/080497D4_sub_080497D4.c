// sub_080497D4 at 0x080497D4 (thumb)

undefined4 sub_080497D4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082aedb8,param_1 + 0x4c,6);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(char *)(param_1 + 0x10) != '\a') {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  bVar1 = 0 < (*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8);
  *(char *)(param_1 + 0xbc) = bVar1;
  *(bool *)(param_1 + 0x44) = bVar1;
  if (*(char *)(param_1 + 0xbc) == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080498E0(param_1);
  return in_lr;
}

