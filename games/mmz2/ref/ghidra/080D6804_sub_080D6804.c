// sub_080D6804 at 0x080D6804 (thumb)

undefined4 sub_080D6804(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (DAT_0202e144 == '\0') {
    uVar2 = sub_080D62A8(0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    cVar1 = sub_080D58D0(*(undefined *)(param_1 + 0x10));
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0xbc) = 0x708;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_0834b2cc,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80d6ba9;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b2c4 + cVar1 * 2));
    sub_080D68B8(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}

