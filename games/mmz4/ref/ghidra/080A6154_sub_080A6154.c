// sub_080A6154 at 0x080A6154 (thumb)

undefined4 sub_080A6154(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885f01e + (uint)*(byte *)(param_1 + 0x13) * 2));
    uVar2 = FUN_081288bc(*(undefined4 *)(param_1 + 0x5c),0x28);
    *(undefined4 *)(param_1 + 100) = uVar2;
    uVar2 = FUN_081288bc(*(undefined4 *)(param_1 + 0x60),0x28);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x72) == '\x01')) &&
     (*(char *)(param_1 + 0x71) == '\x02')) {
    cVar1 = sub_080A6368(param_1);
    if (cVar1 == '\x02') {
      *(undefined *)(param_1 + 0x12) = 0x1e;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    sub_080D0C00(*(undefined4 *)(param_1 + 0x54),
                 *(int *)(param_1 + 0x58) + (uVar3 * 2 >> 0x11 & 0xf) * 0x100,1);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    sub_080D0C00(*(int *)(param_1 + 0x54) + (uVar3 * 2 >> 0x11 & 0xf) * 0x100,
                 *(undefined4 *)(param_1 + 0x58),0);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar4;
  if ((*(char *)(param_1 + 0x10) == '\0') && (iVar5 + -0x1000 < DAT_0202cabc)) {
    iVar4 = iVar4 * -0x100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885f022 + (uint)*(byte *)(param_1 + 0x13) * 2));
    sub_08002B10(0xe8);
  }
  cVar1 = sub_080A6350(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885ef58 + (uint)*(byte *)(param_1 + 0x13) * 0x30);
  }
  return in_lr;
}

