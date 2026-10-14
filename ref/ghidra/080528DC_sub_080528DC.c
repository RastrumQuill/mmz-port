// sub_080528DC at 0x080528DC (thumb)

undefined4 sub_080528DC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082af5b4,param_1 + 0x4c,0xe);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8052ebd;
  sub_080033F0(param_1 + 0x6c,0);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080033F0(param_1 + 0x6c,0);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
  }
  else {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  cVar1 = (&DAT_082af60c)[*(byte *)(param_1 + 0x10)];
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x12) =
         (byte)((uint)(*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) >> 0x1f);
  }
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x4c) = DAT_02022c7c + -0x8c00;
  }
  *(bool *)(param_1 + 0x11) = cVar1 != '\x01';
  *(bool *)(undefined4 *)(param_1 + 0xbc) = cVar1 == '\x02';
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  sub_080529F8(param_1);
  return in_lr;
}

