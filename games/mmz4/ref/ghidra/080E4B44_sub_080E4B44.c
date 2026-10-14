// sub_080E4B44 at 0x080E4B44 (thumb)

undefined4 sub_080E4B44(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined2 auStack_18 [2];
  byte abStack_14 [4];
  
  sub_08128B5C(auStack_18,&DAT_08129bd0,4);
  sub_08128B5C(abStack_14,&DAT_08129bd4,2);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    sub_080D0C00(*(int *)(param_1 + 0x54) + 0x200,*(undefined4 *)(param_1 + 0x58),0);
    sub_080D0C00(*(int *)(param_1 + 0x54) + -0x200,*(undefined4 *)(param_1 + 0x58),0);
    sub_080E49F8(param_1 + 0x54,0,1);
    sub_080E49F8(param_1 + 0x54,1,0);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  sub_0801CF00(param_1,auStack_18[*(byte *)(param_1 + 0x11)]);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
  }
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 +
                      ((abStack_14[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17)) / 2;
  iVar1 = ((int)(short)(&DAT_08128c10)[abStack_14[*(byte *)(param_1 + 0x11)]] / 2) * -0x100;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  if (DAT_0202cabc < *(int *)(param_1 + 0x58) + -0x1000) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x13) = ((byte)(uVar2 * 2 >> 0x11) & 0x1f) + 0x1e;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

