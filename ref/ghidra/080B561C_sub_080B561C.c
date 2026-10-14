// sub_080B561C at 0x080B561C (thumb)

undefined4 sub_080B561C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (DAT_02022878 == '\0') {
    uVar2 = sub_080B4F88(0);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    cVar1 = sub_080B4660(*(undefined *)(param_1 + 0x10));
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined2 *)(param_1 + 0xc4) = 0x708;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b81b0,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80b59c1;
    sub_080B4FA4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080B50DC(param_1,*(undefined2 *)(&DAT_082b81a8 + cVar1 * 2));
    sub_080B56CC(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}

