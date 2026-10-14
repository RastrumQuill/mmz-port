// sub_08073B58 at 0x08073B58 (thumb)

undefined4 sub_08073B58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08073C90(param_1);
      return in_lr;
    }
    iVar1 = sub_080054C0(param_1);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar1 + 9) = 0x3e;
    *(undefined4 *)(iVar1 + 0x14) = 0x8073b59;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f1c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f6e;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x20) = param_1;
  }
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b15e4,param_1 + 0x4c,0xc);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8074089;
    if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08073C90(param_1);
  return in_lr;
}

